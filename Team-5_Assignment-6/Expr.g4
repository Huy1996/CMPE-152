grammar Expr;

@header {
    #include <map>
    #include "intermediate/symtab/Symtab.h"
    #include "intermediate/type/Typespec.h"
    using namespace intermediate::symtab;
    using namespace intermediate::type;
}

program           
    : program_header program_body PERIOD 
    ;

program_header     
    : PROGRAM program_name SEMICOLON 
    ; 

program_name   
    locals [ 
        SymtabEntry *entry = nullptr 
    ]
    : IDENTIFIER 
    ;

program_body         
    : program_declaration compound_statement 
    ;

program_declaration  
    : ( constants_section SEMICOLON ) ? 
      ( types_section SEMICOLON ) ? 
      ( variable_section SEMICOLON ) ? 
      ( routine_section SEMICOLON) ? 
    ;


//----------constant part------------
constants_section           
    : CONST constant_list 
    ;

constant_list 
    : constant_definition ( SEMICOLON constant_definition )* 
    ;

constant_definition      
    : constant_name EQUAL constant 
    ;

constant_name  
    locals [ 
        Typespec *type = nullptr, 
        SymtabEntry *entry = nullptr 
    ]
    : IDENTIFIER ;

constant            
    locals [ 
        Typespec *type = nullptr, 
        Object value = nullptr 
    ]  
    : sign? ( IDENTIFIER 
            | unsigned_number )
    | character_constant
    | string_constant
    ;


//------------type part--------------
types_section           
    : TYPE type_declaration_list 
    ;

type_declaration_list 
    : type_declaration ( SEMICOLON type_declaration )* 
    ;

type_declaration      
    : type_identifier EQUAL data_type ;

type_identifier      
    locals [ 
        Typespec *type = nullptr, 
        SymtabEntry *entry = nullptr 
    ]
    : IDENTIFIER ;

data_type   
    locals [ Typespec *type = nullptr ]
    : simple_type        # simple_type_spec
    | array_type         # array_type_spec 
    ;

simple_type          
    locals [ Typespec *type = nullptr ] 
    : type_identifier    # type_identifier_type_spec 
    | subrange_type      # subrange_type_spec
    ;


//----------variable part------------
variable_section            
    : VAR variable_declaration_list 
    ;

variable_declaration_list 
    : variable_declaration ( SEMICOLON variable_declaration )* 
    ;

variable_declaration     
    : variable_name_list COLON data_type 
    ;
variable_name_list   
    : variable_name ( COMMA variable_name )* 
    ;

variable_name  
    locals [ 
        Typespec *type = nullptr, 
        SymtabEntry *entry = nullptr 
    ] 
    : IDENTIFIER ;


subrange_type        
    : constant DOTDOT constant 
    ;

array_type
    : ARRAY LBRACKET array_declaration RBRACKET OF data_type 
    ;

array_declaration 
    : simple_type ( COMMA simple_type )* 
    ;


//-----------routine part------------
routine_section      
    : routine_declaration ( SEMICOLON routine_declaration)* 
    ;

routine_declaration 
    : ( procedure | function ) SEMICOLON program_body ;

procedure     
    : PROCEDURE routine_name parameters? 
    ;

function      
    : FUNCTION  routine_name parameters? COLON type_identifier 
    ;

routine_name   
    locals [ 
        Typespec *type = nullptr, 
        SymtabEntry *entry = nullptr 
    ]
    : IDENTIFIER ;

parameters                
    : '(' parameter_list ')' 
    ;

parameter_list 
    : parameter_declaration ( SEMICOLON parameter_declaration )* 
    ;

parameter_declaration     
    : VAR? parameter_name_list COLON type_identifier 
    ;

parameter_name_list   
    : parameter_name ( COMMA parameter_name )* 
    ;

parameter_name   
    locals [ 
        Typespec *type = nullptr, 
        SymtabEntry *entry = nullptr 
    ]
    : IDENTIFIER ;

procedure_call 
    : procedure_name '(' argument_list? ')' 
    ;

procedure_name   
    locals [ 
        SymtabEntry *entry = nullptr 
    ] 
    : IDENTIFIER 
    ;

function_call 
    : function_name '(' argument_list? ')' 
    ;

function_name    
    locals [ Typespec *type = nullptr, SymtabEntry *entry = nullptr ] 
    : IDENTIFIER 
    ;
     
argument_list 
    : argument ( COMMA argument )* 
    ;

argument     
    : expression 
    ;


//-----------statement part------------
statement : compound_statement
          | assign_statement
          | if_statement
          | case_statement
          | repeat_statement
          | while_statement
          | for_statement
          | write_statement
          | writeln_statement
          | procedure_call
          ;

compound_statement 
    : BEGIN statement_list END 
    ;
     
statement_list       
    : statement ( SEMICOLON statement )* SEMICOLON ?
    ;

assign_statement 
    : lhs ASSIGN rhs 
    ;

lhs                 
    locals [ 
        Typespec *type = nullptr 
    ] 
    : variable 
    ;

rhs     
    : expression 
    ;

//-----------if statement part------------
if_statement    
    : IF expression THEN true_statement ( ELSE false_statement )? 
    ;

true_statement  
    : statement 
    ;

false_statement 
    : statement 
    ;

//-----------case statement part------------
case_statement
    locals [ 
        map<int, ExprParser::StatementContext*> *jumpTable = nullptr 
    ]
    : CASE expression OF case_branch_list END 
    ;
    
case_branch_list   
    : case_branch ( SEMICOLON case_branch )* 
    ;

case_branch       
    : case_constant_list COLON statement | 
    ;

case_constant_list 
    : case_constant ( COMMA case_constant )* 
    ;

case_constant        
    locals [ 
        Typespec *type = nullptr, 
        int value = 0 
    ]
    : constant ;

//-----------repeat statement part------------
repeat_statement 
    : REPEAT statement_list UNTIL expression 
    ;

//-----------while statement part------------
while_statement  
    : WHILE expression DO statement 
    ;

//-----------for statement part------------
for_statement 
    : FOR variable ASSIGN expression ( TO | DOWNTO ) expression DO statement 
    ;

//-----------write statement part------------

write_statement   
    : WRITE write_argument_list 
    ;

writeln_statement 
    : WRITELN write_argument_list ? 
    ;

write_argument_list   
    : '(' write_argument (COMMA write_argument)* ')' 
    ;

write_argument    
    : expression (COLON width) ? 
    ;

width       
    : sign ? integer_constant (COLON decimal_place) ? 
    ;

decimal_place    
    : integer_constant 
    ;

expression          locals [ Typespec *type = nullptr ] 
    : simpleExpression (relational_operator simpleExpression)? ;
    
simpleExpression    locals [ Typespec *type = nullptr ] 
    : sign? term (expression_operator term)* ;
    
term                
    locals [ 
        Typespec *type = nullptr 
    ]
    : factor (term_operator factor)* ;

factor              
    locals [ 
        Typespec *type = nullptr 
    ] 
    : variable             # variable_factor
    | number               # number_factor
    | character_constant   # character_factor
    | string_constant      # string_factor
    | function_call        # function_call_factor
    | NOT factor           # not_factor
    | '(' expression ')'   # parenthesized_factor
    ;

variable        
    locals [ 
        Typespec *type = nullptr, 
        SymtabEntry *entry = nullptr 
    ] 
    : variable_name modifier* 
    ;

modifier  
    : '[' index_list ']' 
    | '.' field 
    ;

index_list 
    : index ( COMMA index )* 
    ;

index     
    : expression 
    ; 

field           
    locals [ 
        Typespec *type = nullptr, 
        SymtabEntry *entry = nullptr 
    ]     
    : IDENTIFIER 
    ;


number          
    : sign? unsigned_number 
    ;

unsigned_number  
    : integer_constant 
    | real_constant 
    ;

integer_constant 
    : INTEGER 
    ;

real_constant    
    : REAL
    ;

character_constant 
    : CHARACTER 
    ;

string_constant    
    : STRING 
    ;
       


fragment A : ('a' | 'A') ;
fragment B : ('b' | 'B') ;
fragment C : ('c' | 'C') ;
fragment D : ('d' | 'D') ;
fragment E : ('e' | 'E') ;
fragment F : ('f' | 'F') ;
fragment G : ('g' | 'G') ;
fragment H : ('h' | 'H') ;
fragment I : ('i' | 'I') ;
fragment J : ('j' | 'J') ;
fragment K : ('k' | 'K') ;
fragment L : ('l' | 'L') ;
fragment M : ('m' | 'M') ;
fragment N : ('n' | 'N') ;
fragment O : ('o' | 'O') ;
fragment P : ('p' | 'P') ;
fragment Q : ('q' | 'Q') ;
fragment R : ('r' | 'R') ;
fragment S : ('s' | 'S') ;
fragment T : ('t' | 'T') ;
fragment U : ('u' | 'U') ;
fragment V : ('v' | 'V') ;
fragment W : ('w' | 'W') ;
fragment X : ('x' | 'X') ;
fragment Y : ('y' | 'Y') ;
fragment Z : ('z' | 'Z') ;

sign 
    : MINUSOP 
    | PLUSOP 
    ;

relational_operator
    : EQUAL
    | NE
    | LT
    | GT
    | LTEQ
    | GTEQ
    ;

expression_operator
    : PLUSOP
    | MINUSOP
    | OR
    ;

term_operator
    : MULTOP
    | DIVOP
    | DIV
    | MOD
    | AND
    ;

PLUSOP   : '+' ;
MINUSOP  : '-' ;
MULTOP   : '*' ;
DIVOP    : '/' ;
EQUAL    : '=' ;
LT	     : '<' ;
GT	     : '>' ;
CARAT    : '^' ;
COLON    : ':' ;
COMMA    : ',' ;
PERIOD   : '.' ;
SEMICOLON: ';' ;
LPAREN   : '(' ;
RPAREN   : ')' ;
LBRACKET : '[' ;
RBRACKET : ']' ;
LCOMMENT : '(*';
RCOMMENT : '*)';
LBRACE   : '{' ;
RBRACE	 : '}' ;

ASSIGN	   : ':=';
PLUSEQUAL  : '+=';
MINUSEQUAL : '-=';
DIVEQUAL   : '/=';
MULTEQUAL  : '*=';
NE         : '<>';
LTEQ	   : '<=';
GTEQ	   : '>=';
DOTDOT     : '..';


PROGRAM   	   : P R O G R A M ;
CONST     	   : C O N S T ;
TYPE      	   : T Y P E ;
ARRAY     	   : A R R A Y ;
ASM		       : A S M ;
BREAK     	   : B R E A K ;
CONSTRUCTOR	   : C O N S T R U C T O R ;
CONTINUE  	   : C O N T I N U E ;
DESTRUCTOR	   : D E S T R U C T O R;
FALSE     	   : F A L S E ;
FILE      	   : F I L E ;
GOTO      	   : G O T O;
IMPLEMENTATION : I M P L E M E N T A T I O N ;
IN             : I N ;
INLINE         : I N L I N E ;
INTERFACE      : I N T E R F A C E ;
LABEL          : L A B E L ;
NIL		       : N I L ;
OBJECT         : O B J E C T;
ON	           : O N ;
OPERATOR	   : O P E R A T O R ;
PACKED		   : P A C K E D ; 
SET            : S E T ;
SHL	           : S H L ;
SHR		       : S H R ;
UNIT		   : U N I T ;
USES		   : U S E S ;
XOR	           : X O R;
OF        	   : O F ;
RECORD    	   : R E C O R D ;
VAR       	   : V A R ;
BEGIN     	   : B E G I N ;
END       	   : E N D ;
DIV       	   : D I V ;
MOD       	   : M O D ;
AND       	   : A N D ;
OR        	   : O R ;
NOT       	   : N O T ;
IF        	   : I F ;
THEN      	   : T H E N ;
ELSE      	   : E L S E ;
CASE      	   : C A S E ;
REPEAT    	   : R E P E A T ;
UNTIL     	   : U N T I L ;
WHILE     	   : W H I L E ;
DO        	   : D O ;
FOR       	   : F O R ;
TO        	   : T O ;
DOWNTO    	   : D O W N T O ;
WRITE     	   : W R I T E ;
WRITELN   	   : W R I T E L N ;
READ      	   : R E A D ;
READLN    	   : R E A D L N ;
PROCEDURE 	   : P R O C E D U R E ;
FUNCTION  	   : F U N C T I O N ;

IDENTIFIER : [a-zA-Z][a-zA-Z0-9]* ;
INTEGER    : [0-9]+ ;

REAL       
    : INTEGER '.' INTEGER
    | INTEGER ('e' | 'E') ('+' | '-')? INTEGER
    | INTEGER '.' INTEGER ('e' | 'E') ('+' | '-')? INTEGER
    ;

NEWLINE : '\r'? '\n' -> skip  ;
WS      : [ \t]+ -> skip ; 

QUOTE     : '\'' ;
CHARACTER : QUOTE CHARACTER_CHAR QUOTE ;
STRING    : QUOTE STRING_CHAR* QUOTE ;

fragment CHARACTER_CHAR : ~('\'')   // any non-quote character
                        ;

fragment STRING_CHAR : QUOTE QUOTE  
                     | ~('\'')      
                     ;

COMMENT : '{' COMMENT_CHARACTER* '}' -> skip ;

fragment COMMENT_CHARACTER : ~('}') ;
                     