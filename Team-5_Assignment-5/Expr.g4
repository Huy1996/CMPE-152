grammar Expr;

program        : program_header program_body PERIOD ;
program_header : PROGRAM program_name SEMICOLON ;
program_name   : IDENTIFIER ;
program_body   : compound_statement ;

compound_statement : BEGIN statement_list END;
statement_list     : statement ( SEMICOLON statement )* ;
statement          : compound_statement
                   | for_statement;

for_statement : FOR IDENTIFIER ASSIGN IDENTIFIER (TO | DOWNTO) IDENTIFIER DO statement ;


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

PLUSOP   : '+' ;
MINUSOP  : '-' ;
MULTOP   : '*' ;
DIVOP    : '/' ;
EQUAL    : '=' ;
LT	  : '<' ;
GT	  : '>' ;
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
RBRACE	  : '}' ;

ASSIGN	   : ':=';
PLUSEQUAL : '+=';
MINUSEQUAL: '-=';
DIVEQUAL  : '/=';
MULTEQUAL : '*=';
NE        : '<>';
LTEQ	   : '<=';
GTEQ	   : '>=';
DOTDOT    : '..';


PROGRAM   	   : P R O G R A M ;
CONST     	   : C O N S T ;
TYPE      	   : T Y P E ;
ARRAY     	   : A R R A Y ;
ASM		   : A S M ;
BREAK     	   : B R E A K ;
CONSTRUCTOR	   : C O N S T R U C T O R ;
CONTINUE  	   : C O N T I N U E ;
DESTRUCTOR	   : D E S T R U C T O R;
FALSE     	   : F A L S E ;
FILE      	   : F I L E ;
GOTO      	   : G O T O;
IMPLEMENTATION   : I M P L E M E N T A T I O N ;
IN               : I N ;
INLINE           : I N L I N E ;
INTERFACE        : I N T E R F A C E ;
LABEL            : L A B E L ;
NIL		   : N I L ;
OBJECT           : O B J E C T;
ON	          : O N ;
OPERATOR	   : O P E R A T O R ;
PACKED		   : P A C K E D ; 
SET              : S E T ;
SHL	          : S H L ;
SHR		   : S H R ;
UNIT		   : U N I T ;
USES		   : U S E S ;
XOR	          : X O R;
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

REAL       : INTEGER '.' INTEGER
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

fragment STRING_CHAR : QUOTE QUOTE  // two consecutive quotes
                     | ~('\'')      // any non-quote character
                     ;

COMMENT : LBRACE COMMENT_CHARACTER* RBRACE -> skip ;

fragment COMMENT_CHARACTER : ~('}') ;