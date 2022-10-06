
// Generated from Expr.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  ExprParser : public antlr4::Parser {
public:
  enum {
    PLUSOP = 1, MINUSOP = 2, MULTOP = 3, DIVOP = 4, EQUAL = 5, LT = 6, GT = 7, 
    CARAT = 8, COLON = 9, COMMA = 10, PERIOD = 11, SEMICOLON = 12, LPAREN = 13, 
    RPAREN = 14, LBRACKET = 15, RBRACKET = 16, LCOMMENT = 17, RCOMMENT = 18, 
    LBRACE = 19, RBRACE = 20, ASSIGN = 21, PLUSEQUAL = 22, MINUSEQUAL = 23, 
    DIVEQUAL = 24, MULTEQUAL = 25, NE = 26, LTEQ = 27, GTEQ = 28, DOTDOT = 29, 
    PROGRAM = 30, CONST = 31, TYPE = 32, ARRAY = 33, ASM = 34, BREAK = 35, 
    CONSTRUCTOR = 36, CONTINUE = 37, DESTRUCTOR = 38, FALSE = 39, FILE = 40, 
    GOTO = 41, IMPLEMENTATION = 42, IN = 43, INLINE = 44, INTERFACE = 45, 
    LABEL = 46, NIL = 47, OBJECT = 48, ON = 49, OPERATOR = 50, PACKED = 51, 
    SET = 52, SHL = 53, SHR = 54, UNIT = 55, USES = 56, XOR = 57, OF = 58, 
    RECORD = 59, VAR = 60, BEGIN = 61, END = 62, DIV = 63, MOD = 64, AND = 65, 
    OR = 66, NOT = 67, IF = 68, THEN = 69, ELSE = 70, CASE = 71, REPEAT = 72, 
    UNTIL = 73, WHILE = 74, DO = 75, FOR = 76, TO = 77, DOWNTO = 78, WRITE = 79, 
    WRITELN = 80, READ = 81, READLN = 82, PROCEDURE = 83, FUNCTION = 84, 
    IDENTIFIER = 85, INTEGER = 86, REAL = 87, NEWLINE = 88, WS = 89, QUOTE = 90, 
    CHARACTER = 91, STRING = 92, COMMENT = 93
  };

  enum {
    RuleProgram = 0, RuleProgram_header = 1, RuleProgram_name = 2, RuleProgram_body = 3, 
    RuleProgram_declaration = 4, RuleConstants_section = 5, RuleConst_list = 6, 
    RuleConst_name = 7, RuleConstant = 8, RuleVariable_section = 9, RuleVar_declaration = 10, 
    RuleVar_list = 11, RuleVar_name = 12, RuleRoutine_section = 13, RuleRoutine_declaration = 14, 
    RuleProcedure = 15, RuleFunction = 16, RuleRoutine_name = 17, RuleParameter_list = 18, 
    RuleParameter_declaration = 19, RuleParameter_name_list = 20, RuleParameter_name = 21, 
    RuleCall_procedure = 22, RuleProcedure_name = 23, RuleCall_function = 24, 
    RuleFunction_name = 25, RuleArgument_list = 26, RuleArgument = 27, RuleData_type = 28, 
    RuleType_name = 29, RuleArray_type = 30, RuleArray_declaration = 31, 
    RuleCompound_statement = 32, RuleStatement_list = 33, RuleStatement = 34, 
    RuleEmpty_statement = 35, RuleAssign_statement = 36, RuleLhs = 37, RuleRhs = 38, 
    RuleVariable = 39, RuleExpression = 40, RuleSingle_expression = 41, 
    RuleTerm_expression = 42, RuleFactor = 43, RuleFor_statement = 44, RuleWhile_statement = 45, 
    RuleRepeat_statement = 46, RuleIf_statement = 47, RuleTrue_statement = 48, 
    RuleFalse_statment = 49, RuleCase_statment = 50, RuleCase_branch_list = 51, 
    RuleCase_branch = 52, RuleCase_constant_list = 53, RuleCase_constant = 54, 
    RuleWrite_statement = 55, RuleWriteln_statement = 56, RuleWrite_argument_list = 57, 
    RuleWrite_argument = 58, RuleWidth = 59, RuleDecimal_place = 60, RuleSign = 61, 
    RuleRelation_operator = 62, RuleExpression_operator = 63, RuleTerm_operator = 64, 
    RuleNumber = 65, RuleUnsign_number = 66, RuleChar_constant = 67, RuleString_constant = 68
  };

  ExprParser(antlr4::TokenStream *input);
  ~ExprParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class Program_headerContext;
  class Program_nameContext;
  class Program_bodyContext;
  class Program_declarationContext;
  class Constants_sectionContext;
  class Const_listContext;
  class Const_nameContext;
  class ConstantContext;
  class Variable_sectionContext;
  class Var_declarationContext;
  class Var_listContext;
  class Var_nameContext;
  class Routine_sectionContext;
  class Routine_declarationContext;
  class ProcedureContext;
  class FunctionContext;
  class Routine_nameContext;
  class Parameter_listContext;
  class Parameter_declarationContext;
  class Parameter_name_listContext;
  class Parameter_nameContext;
  class Call_procedureContext;
  class Procedure_nameContext;
  class Call_functionContext;
  class Function_nameContext;
  class Argument_listContext;
  class ArgumentContext;
  class Data_typeContext;
  class Type_nameContext;
  class Array_typeContext;
  class Array_declarationContext;
  class Compound_statementContext;
  class Statement_listContext;
  class StatementContext;
  class Empty_statementContext;
  class Assign_statementContext;
  class LhsContext;
  class RhsContext;
  class VariableContext;
  class ExpressionContext;
  class Single_expressionContext;
  class Term_expressionContext;
  class FactorContext;
  class For_statementContext;
  class While_statementContext;
  class Repeat_statementContext;
  class If_statementContext;
  class True_statementContext;
  class False_statmentContext;
  class Case_statmentContext;
  class Case_branch_listContext;
  class Case_branchContext;
  class Case_constant_listContext;
  class Case_constantContext;
  class Write_statementContext;
  class Writeln_statementContext;
  class Write_argument_listContext;
  class Write_argumentContext;
  class WidthContext;
  class Decimal_placeContext;
  class SignContext;
  class Relation_operatorContext;
  class Expression_operatorContext;
  class Term_operatorContext;
  class NumberContext;
  class Unsign_numberContext;
  class Char_constantContext;
  class String_constantContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Program_headerContext *program_header();
    Program_bodyContext *program_body();
    antlr4::tree::TerminalNode *PERIOD();
    antlr4::tree::TerminalNode *EOF();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  Program_headerContext : public antlr4::ParserRuleContext {
  public:
    Program_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROGRAM();
    Program_nameContext *program_name();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Program_headerContext* program_header();

  class  Program_nameContext : public antlr4::ParserRuleContext {
  public:
    Program_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Program_nameContext* program_name();

  class  Program_bodyContext : public antlr4::ParserRuleContext {
  public:
    Program_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Program_declarationContext *program_declaration();
    Compound_statementContext *compound_statement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Program_bodyContext* program_body();

  class  Program_declarationContext : public antlr4::ParserRuleContext {
  public:
    Program_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constants_sectionContext *constants_section();
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);
    Routine_sectionContext *routine_section();
    Variable_sectionContext *variable_section();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Program_declarationContext* program_declaration();

  class  Constants_sectionContext : public antlr4::ParserRuleContext {
  public:
    Constants_sectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST();
    Const_listContext *const_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constants_sectionContext* constants_section();

  class  Const_listContext : public antlr4::ParserRuleContext {
  public:
    Const_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Const_nameContext *> const_name();
    Const_nameContext* const_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    std::vector<ConstantContext *> constant();
    ConstantContext* constant(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Const_listContext* const_list();

  class  Const_nameContext : public antlr4::ParserRuleContext {
  public:
    Const_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Const_nameContext* const_name();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    SignContext *sign();
    NumberContext *number();
    Char_constantContext *char_constant();
    String_constantContext *string_constant();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantContext* constant();

  class  Variable_sectionContext : public antlr4::ParserRuleContext {
  public:
    Variable_sectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    Var_declarationContext *var_declaration();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_sectionContext* variable_section();

  class  Var_declarationContext : public antlr4::ParserRuleContext {
  public:
    Var_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Var_listContext *> var_list();
    Var_listContext* var_list(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    std::vector<Data_typeContext *> data_type();
    Data_typeContext* data_type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_declarationContext* var_declaration();

  class  Var_listContext : public antlr4::ParserRuleContext {
  public:
    Var_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Var_nameContext *> var_name();
    Var_nameContext* var_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_listContext* var_list();

  class  Var_nameContext : public antlr4::ParserRuleContext {
  public:
    Var_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_nameContext* var_name();

  class  Routine_sectionContext : public antlr4::ParserRuleContext {
  public:
    Routine_sectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Routine_declarationContext *> routine_declaration();
    Routine_declarationContext* routine_declaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Routine_sectionContext* routine_section();

  class  Routine_declarationContext : public antlr4::ParserRuleContext {
  public:
    Routine_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMICOLON();
    Program_bodyContext *program_body();
    ProcedureContext *procedure();
    FunctionContext *function();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Routine_declarationContext* routine_declaration();

  class  ProcedureContext : public antlr4::ParserRuleContext {
  public:
    ProcedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROCEDURE();
    Routine_nameContext *routine_name();
    Parameter_listContext *parameter_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProcedureContext* procedure();

  class  FunctionContext : public antlr4::ParserRuleContext {
  public:
    FunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    Routine_nameContext *routine_name();
    antlr4::tree::TerminalNode *COLON();
    Data_typeContext *data_type();
    Parameter_listContext *parameter_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionContext* function();

  class  Routine_nameContext : public antlr4::ParserRuleContext {
  public:
    Routine_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Routine_nameContext* routine_name();

  class  Parameter_listContext : public antlr4::ParserRuleContext {
  public:
    Parameter_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Parameter_declarationContext *> parameter_declaration();
    Parameter_declarationContext* parameter_declaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_listContext* parameter_list();

  class  Parameter_declarationContext : public antlr4::ParserRuleContext {
  public:
    Parameter_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parameter_name_listContext *parameter_name_list();
    antlr4::tree::TerminalNode *COLON();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *VAR();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_declarationContext* parameter_declaration();

  class  Parameter_name_listContext : public antlr4::ParserRuleContext {
  public:
    Parameter_name_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Parameter_nameContext *> parameter_name();
    Parameter_nameContext* parameter_name(size_t i);
    antlr4::tree::TerminalNode *COMMA();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_name_listContext* parameter_name_list();

  class  Parameter_nameContext : public antlr4::ParserRuleContext {
  public:
    Parameter_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_nameContext* parameter_name();

  class  Call_procedureContext : public antlr4::ParserRuleContext {
  public:
    Call_procedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Procedure_nameContext *procedure_name();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    Argument_listContext *argument_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Call_procedureContext* call_procedure();

  class  Procedure_nameContext : public antlr4::ParserRuleContext {
  public:
    Procedure_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedure_nameContext* procedure_name();

  class  Call_functionContext : public antlr4::ParserRuleContext {
  public:
    Call_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_nameContext *function_name();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    Argument_listContext *argument_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Call_functionContext* call_function();

  class  Function_nameContext : public antlr4::ParserRuleContext {
  public:
    Function_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_nameContext* function_name();

  class  Argument_listContext : public antlr4::ParserRuleContext {
  public:
    Argument_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArgumentContext *> argument();
    ArgumentContext* argument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Argument_listContext* argument_list();

  class  ArgumentContext : public antlr4::ParserRuleContext {
  public:
    ArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentContext* argument();

  class  Data_typeContext : public antlr4::ParserRuleContext {
  public:
    Data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_nameContext *type_name();
    Array_typeContext *array_type();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_typeContext* data_type();

  class  Type_nameContext : public antlr4::ParserRuleContext {
  public:
    Type_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_nameContext* type_name();

  class  Array_typeContext : public antlr4::ParserRuleContext {
  public:
    Array_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *LBRACE();
    Array_declarationContext *array_declaration();
    antlr4::tree::TerminalNode *RBRACE();
    antlr4::tree::TerminalNode *OF();
    Data_typeContext *data_type();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Array_typeContext* array_type();

  class  Array_declarationContext : public antlr4::ParserRuleContext {
  public:
    Array_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> INTEGER();
    antlr4::tree::TerminalNode* INTEGER(size_t i);
    antlr4::tree::TerminalNode *DOTDOT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Array_declarationContext* array_declaration();

  class  Compound_statementContext : public antlr4::ParserRuleContext {
  public:
    Compound_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    Statement_listContext *statement_list();
    antlr4::tree::TerminalNode *END();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compound_statementContext* compound_statement();

  class  Statement_listContext : public antlr4::ParserRuleContext {
  public:
    Statement_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_listContext* statement_list();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Compound_statementContext *compound_statement();
    Assign_statementContext *assign_statement();
    For_statementContext *for_statement();
    While_statementContext *while_statement();
    Repeat_statementContext *repeat_statement();
    Case_statmentContext *case_statment();
    If_statementContext *if_statement();
    Write_statementContext *write_statement();
    Writeln_statementContext *writeln_statement();
    Call_procedureContext *call_procedure();
    Empty_statementContext *empty_statement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  Empty_statementContext : public antlr4::ParserRuleContext {
  public:
    Empty_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Empty_statementContext* empty_statement();

  class  Assign_statementContext : public antlr4::ParserRuleContext {
  public:
    Assign_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LhsContext *lhs();
    antlr4::tree::TerminalNode *ASSIGN();
    RhsContext *rhs();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assign_statementContext* assign_statement();

  class  LhsContext : public antlr4::ParserRuleContext {
  public:
    LhsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LhsContext* lhs();

  class  RhsContext : public antlr4::ParserRuleContext {
  public:
    RhsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RhsContext* rhs();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Single_expressionContext *> single_expression();
    Single_expressionContext* single_expression(size_t i);
    std::vector<Relation_operatorContext *> relation_operator();
    Relation_operatorContext* relation_operator(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  Single_expressionContext : public antlr4::ParserRuleContext {
  public:
    Single_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Term_expressionContext *> term_expression();
    Term_expressionContext* term_expression(size_t i);
    SignContext *sign();
    std::vector<Expression_operatorContext *> expression_operator();
    Expression_operatorContext* expression_operator(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Single_expressionContext* single_expression();

  class  Term_expressionContext : public antlr4::ParserRuleContext {
  public:
    Term_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FactorContext *> factor();
    FactorContext* factor(size_t i);
    std::vector<Term_operatorContext *> term_operator();
    Term_operatorContext* term_operator(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Term_expressionContext* term_expression();

  class  FactorContext : public antlr4::ParserRuleContext {
  public:
    FactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    NumberContext *number();
    Char_constantContext *char_constant();
    String_constantContext *string_constant();
    antlr4::tree::TerminalNode *NOT();
    FactorContext *factor();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    Call_functionContext *call_function();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FactorContext* factor();

  class  For_statementContext : public antlr4::ParserRuleContext {
  public:
    For_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    Assign_statementContext *assign_statement();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DO();
    StatementContext *statement();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *DOWNTO();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_statementContext* for_statement();

  class  While_statementContext : public antlr4::ParserRuleContext {
  public:
    While_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DO();
    StatementContext *statement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  While_statementContext* while_statement();

  class  Repeat_statementContext : public antlr4::ParserRuleContext {
  public:
    Repeat_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPEAT();
    Statement_listContext *statement_list();
    antlr4::tree::TerminalNode *UNTIL();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Repeat_statementContext* repeat_statement();

  class  If_statementContext : public antlr4::ParserRuleContext {
  public:
    If_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *THEN();
    True_statementContext *true_statement();
    antlr4::tree::TerminalNode *ELSE();
    False_statmentContext *false_statment();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_statementContext* if_statement();

  class  True_statementContext : public antlr4::ParserRuleContext {
  public:
    True_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  True_statementContext* true_statement();

  class  False_statmentContext : public antlr4::ParserRuleContext {
  public:
    False_statmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  False_statmentContext* false_statment();

  class  Case_statmentContext : public antlr4::ParserRuleContext {
  public:
    Case_statmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *OF();
    Case_branch_listContext *case_branch_list();
    antlr4::tree::TerminalNode *END();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_statmentContext* case_statment();

  class  Case_branch_listContext : public antlr4::ParserRuleContext {
  public:
    Case_branch_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Case_branchContext *> case_branch();
    Case_branchContext* case_branch(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_branch_listContext* case_branch_list();

  class  Case_branchContext : public antlr4::ParserRuleContext {
  public:
    Case_branchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Case_constant_listContext *case_constant_list();
    antlr4::tree::TerminalNode *COLON();
    StatementContext *statement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_branchContext* case_branch();

  class  Case_constant_listContext : public antlr4::ParserRuleContext {
  public:
    Case_constant_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Case_constantContext *> case_constant();
    Case_constantContext* case_constant(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_constant_listContext* case_constant_list();

  class  Case_constantContext : public antlr4::ParserRuleContext {
  public:
    Case_constantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantContext *constant();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_constantContext* case_constant();

  class  Write_statementContext : public antlr4::ParserRuleContext {
  public:
    Write_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WRITE();
    Write_argument_listContext *write_argument_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Write_statementContext* write_statement();

  class  Writeln_statementContext : public antlr4::ParserRuleContext {
  public:
    Writeln_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WRITELN();
    Write_argument_listContext *write_argument_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Writeln_statementContext* writeln_statement();

  class  Write_argument_listContext : public antlr4::ParserRuleContext {
  public:
    Write_argument_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<Write_argumentContext *> write_argument();
    Write_argumentContext* write_argument(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Write_argument_listContext* write_argument_list();

  class  Write_argumentContext : public antlr4::ParserRuleContext {
  public:
    Write_argumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *COLON();
    WidthContext *width();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Write_argumentContext* write_argument();

  class  WidthContext : public antlr4::ParserRuleContext {
  public:
    WidthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *COLON();
    Decimal_placeContext *decimal_place();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WidthContext* width();

  class  Decimal_placeContext : public antlr4::ParserRuleContext {
  public:
    Decimal_placeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Decimal_placeContext* decimal_place();

  class  SignContext : public antlr4::ParserRuleContext {
  public:
    SignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MINUSOP();
    antlr4::tree::TerminalNode *PLUSOP();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignContext* sign();

  class  Relation_operatorContext : public antlr4::ParserRuleContext {
  public:
    Relation_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *NE();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LTEQ();
    antlr4::tree::TerminalNode *GTEQ();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Relation_operatorContext* relation_operator();

  class  Expression_operatorContext : public antlr4::ParserRuleContext {
  public:
    Expression_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUSOP();
    antlr4::tree::TerminalNode *MINUSOP();
    antlr4::tree::TerminalNode *OR();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expression_operatorContext* expression_operator();

  class  Term_operatorContext : public antlr4::ParserRuleContext {
  public:
    Term_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MULTOP();
    antlr4::tree::TerminalNode *DIVOP();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *AND();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Term_operatorContext* term_operator();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unsign_numberContext *unsign_number();
    SignContext *sign();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class  Unsign_numberContext : public antlr4::ParserRuleContext {
  public:
    Unsign_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *REAL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unsign_numberContext* unsign_number();

  class  Char_constantContext : public antlr4::ParserRuleContext {
  public:
    Char_constantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHARACTER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Char_constantContext* char_constant();

  class  String_constantContext : public antlr4::ParserRuleContext {
  public:
    String_constantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  String_constantContext* string_constant();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

