grammar Expr;

program             
    : program_header program_body PERIOD EOF
    ;

program_header      
    : PROGRAM program_name SEMICOLON 
    ;

program_name        
    : IDENTIFIER 
    ;

program_body        
    : program_declaration compound_statement 
    ;

program_declaration 
    : ( constants_section SEMICOLON ) ? 
      ( types_section SEMICOLON ) ?
      ( routine_section SEMICOLON ) ?
      ( variable_section SEMICOLON ) ? ;




//----------constant part------------

constants_section 
    : CONST const_list
    ;

const_list        
    : const_name EQUAL constant ( SEMICOLON const_name EQUAL constant)* 
    ;

const_name        
    : IDENTIFIER 
    ;


constant 
    : sign ? (IDENTIFIER) 
    | number
    | char_constant
    | string_constant 
    ;

//------------type part--------------
types_section
    : TYPE type_declaration
    ;

type_declaration
    : type_identifier EQUAL data_type ( SEMICOLON type_identifier EQUAL data_type ) *
    ;

type_identifier
    : IDENTIFIER
    ;

//----------variable part------------

variable_section 
    : VAR var_declaration
    ;

var_declaration  
    : var_list COLON data_type ( SEMICOLON var_list COLON data_type ) *
    ;

var_list         
    : var_name ( COMMA var_name) * 
    ;

var_name         
    : IDENTIFIER 
    ;

//-----------routine part------------
routine_section
    : routine_declaration ( SEMICOLON routine_declaration ) *
    ;

routine_declaration
    : ( procedure | function ) SEMICOLON program_body
    ;

procedure
    : PROCEDURE routine_name parameter_list?
    ;

function
    : FUNCTION routine_name parameter_list? COLON data_type
    ;

routine_name
    : IDENTIFIER
    ;

parameter_list
    : LPAREN parameter_declaration ( SEMICOLON parameter_declaration ) * RPAREN
    ;

parameter_declaration
    : VAR ? parameter_name_list COLON data_type
    ;

parameter_name_list
    : parameter_name ( COMMA parameter_name )
    ;

parameter_name
    : IDENTIFIER
    ;

call_procedure
    : procedure_name LPAREN argument_list? RPAREN
    ;

procedure_name
    : IDENTIFIER
    ;

call_function
    : function_name LPAREN argument_list? RPAREN
    ;

function_name
    : IDENTIFIER
    ;

argument_list
    : argument ( COMMA argument ) *
    ;

argument
    : expression
    ;

//--------------type part------------

data_type 
    : type_name
    | array_type 
    | record_type
    ;

type_name 
    : IDENTIFIER ;

array_type        
    : ARRAY LBRACE array_declaration RBRACE OF data_type 
    ;

array_declaration 
    : INTEGER DOTDOT INTEGER 
    ;

record_type
    : RECORD var_declaration SEMICOLON ? END
    ;

//----------statement part------------
compound_statement 
    : BEGIN statement_list END
    ;

statement_list     
    : statement ( SEMICOLON statement )* SEMICOLON ?
    ;

statement          
    : compound_statement
    | assign_statement
    | for_statement
    | while_statement
    | repeat_statement
    | case_statment
    | if_statement
    | write_statement
    | writeln_statement
    | call_procedure
//    | empty_statement
    ;

empty_statement
    :
    ;

assign_statement
    : lhs ASSIGN rhs
    ;

lhs
    : variable
    ;

rhs
    : expression
    ;

variable
    : IDENTIFIER
    ;

expression
    : single_expression( relation_operator single_expression )*
    ;

single_expression
    : sign ? term_expression ( expression_operator term_expression) *
    ;

term_expression
    : factor ( term_operator factor ) *
    ;

factor
    : variable
    | number
    | char_constant
    | string_constant
    | NOT factor
    | LPAREN expression RPAREN
    | call_function
    ;

//----------for statement part------------
for_statement 
    : FOR assign_statement (TO | DOWNTO) expression DO statement 
    ;

//----------while statement part------------
while_statement
    : WHILE expression DO statement
    ;

//----------repeat statement part------------
repeat_statement
    : REPEAT statement_list UNTIL expression
    ;

//----------if statement part------------
if_statement
    : IF expression THEN true_statement ( ELSE false_statment ) ?
    ;

true_statement
    : statement
    ;

false_statment
    : statement
    ;

//----------case statement part------------
case_statment
    : CASE expression OF case_branch_list END
    ;

case_branch_list
    : case_branch ( SEMICOLON case_branch ) * SEMICOLON ?
    ;

case_branch
    : case_constant_list COLON statement
    ;

case_constant_list
    : case_constant ( COMMA case_constant ) *
    ;

case_constant
    : constant
    ;

//----------write statement part------------
write_statement
    : WRITE write_argument_list
    ;

writeln_statement
    : WRITELN write_argument_list ?
    ;

write_argument_list
    : LPAREN write_argument ( COMMA write_argument )* RPAREN
    ;

write_argument
    : expression ( COLON width )?
    ;

width
    : INTEGER ( COLON decimal_place )?
    ;

decimal_place
    : INTEGER
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

relation_operator
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

number        : sign? unsign_number;
unsign_number : INTEGER | REAL;


INTEGER    : [0-9]+ ;

REAL       : INTEGER '.' INTEGER
           | INTEGER ('e' | 'E') ('+' | '-')? INTEGER
           | INTEGER '.' INTEGER ('e' | 'E') ('+' | '-')? INTEGER
           ;

NEWLINE : '\r'? '\n' -> skip  ;
WS      : [ \t]+ -> skip ; 

QUOTE     : '\'' ;
char_constant : CHARACTER ;
string_constant : STRING ;
CHARACTER : QUOTE CHARACTER_CHAR QUOTE ;
STRING    : QUOTE STRING_CHAR* QUOTE ;

fragment CHARACTER_CHAR : ~('\'')   // any non-quote character
                        ;

fragment STRING_CHAR : QUOTE QUOTE  // two consecutive quotes
                     | ~('\'')      // any non-quote character
                     ;

COMMENT : LBRACE COMMENT_CHARACTER* RBRACE -> skip ;

fragment COMMENT_CHARACTER : ~('}') ;