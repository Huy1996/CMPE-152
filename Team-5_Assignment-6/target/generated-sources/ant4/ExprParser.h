
    #include <map>
    #include "intermediate/symtab/Symtab.h"
    #include "intermediate/type/Typespec.h"
    using namespace intermediate::symtab;
    using namespace intermediate::type;


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
    RuleProgram_declaration = 4, RuleConstants_section = 5, RuleConstant_list = 6, 
    RuleConstant_definition = 7, RuleConstant_name = 8, RuleConstant = 9, 
    RuleTypes_section = 10, RuleType_declaration_list = 11, RuleType_declaration = 12, 
    RuleType_identifier = 13, RuleData_type = 14, RuleSimple_type = 15, 
    RuleVariable_section = 16, RuleVariable_declaration_list = 17, RuleVariable_declaration = 18, 
    RuleVariable_name_list = 19, RuleVariable_name = 20, RuleSubrange_type = 21, 
    RuleArray_type = 22, RuleArray_declaration = 23, RuleRoutine_section = 24, 
    RuleRoutine_declaration = 25, RuleProcedure = 26, RuleFunction = 27, 
    RuleRoutine_name = 28, RuleParameters = 29, RuleParameter_list = 30, 
    RuleParameter_declaration = 31, RuleParameter_name_list = 32, RuleParameter_name = 33, 
    RuleProcedure_call = 34, RuleProcedure_name = 35, RuleFunction_call = 36, 
    RuleFunction_name = 37, RuleArgument_list = 38, RuleArgument = 39, RuleStatement = 40, 
    RuleCompound_statement = 41, RuleStatement_list = 42, RuleAssign_statement = 43, 
    RuleLhs = 44, RuleRhs = 45, RuleIf_statement = 46, RuleTrue_statement = 47, 
    RuleFalse_statement = 48, RuleCase_statement = 49, RuleCase_branch_list = 50, 
    RuleCase_branch = 51, RuleCase_constant_list = 52, RuleCase_constant = 53, 
    RuleRepeat_statement = 54, RuleWhile_statement = 55, RuleFor_statement = 56, 
    RuleWrite_statement = 57, RuleWriteln_statement = 58, RuleWrite_argument_list = 59, 
    RuleWrite_argument = 60, RuleWidth = 61, RuleDecimal_place = 62, RuleExpression = 63, 
    RuleSimpleExpression = 64, RuleTerm = 65, RuleFactor = 66, RuleVariable = 67, 
    RuleModifier = 68, RuleIndex_list = 69, RuleIndex = 70, RuleField = 71, 
    RuleNumber = 72, RuleUnsigned_number = 73, RuleInteger_constant = 74, 
    RuleReal_constant = 75, RuleCharacter_constant = 76, RuleString_constant = 77, 
    RuleSign = 78, RuleRelational_operator = 79, RuleExpression_operator = 80, 
    RuleTerm_operator = 81
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
  class Constant_listContext;
  class Constant_definitionContext;
  class Constant_nameContext;
  class ConstantContext;
  class Types_sectionContext;
  class Type_declaration_listContext;
  class Type_declarationContext;
  class Type_identifierContext;
  class Data_typeContext;
  class Simple_typeContext;
  class Variable_sectionContext;
  class Variable_declaration_listContext;
  class Variable_declarationContext;
  class Variable_name_listContext;
  class Variable_nameContext;
  class Subrange_typeContext;
  class Array_typeContext;
  class Array_declarationContext;
  class Routine_sectionContext;
  class Routine_declarationContext;
  class ProcedureContext;
  class FunctionContext;
  class Routine_nameContext;
  class ParametersContext;
  class Parameter_listContext;
  class Parameter_declarationContext;
  class Parameter_name_listContext;
  class Parameter_nameContext;
  class Procedure_callContext;
  class Procedure_nameContext;
  class Function_callContext;
  class Function_nameContext;
  class Argument_listContext;
  class ArgumentContext;
  class StatementContext;
  class Compound_statementContext;
  class Statement_listContext;
  class Assign_statementContext;
  class LhsContext;
  class RhsContext;
  class If_statementContext;
  class True_statementContext;
  class False_statementContext;
  class Case_statementContext;
  class Case_branch_listContext;
  class Case_branchContext;
  class Case_constant_listContext;
  class Case_constantContext;
  class Repeat_statementContext;
  class While_statementContext;
  class For_statementContext;
  class Write_statementContext;
  class Writeln_statementContext;
  class Write_argument_listContext;
  class Write_argumentContext;
  class WidthContext;
  class Decimal_placeContext;
  class ExpressionContext;
  class SimpleExpressionContext;
  class TermContext;
  class FactorContext;
  class VariableContext;
  class ModifierContext;
  class Index_listContext;
  class IndexContext;
  class FieldContext;
  class NumberContext;
  class Unsigned_numberContext;
  class Integer_constantContext;
  class Real_constantContext;
  class Character_constantContext;
  class String_constantContext;
  class SignContext;
  class Relational_operatorContext;
  class Expression_operatorContext;
  class Term_operatorContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Program_headerContext *program_header();
    Program_bodyContext *program_body();
    antlr4::tree::TerminalNode *PERIOD();


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
    SymtabEntry * entry = nullptr;
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
    Types_sectionContext *types_section();
    Variable_sectionContext *variable_section();
    Routine_sectionContext *routine_section();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Program_declarationContext* program_declaration();

  class  Constants_sectionContext : public antlr4::ParserRuleContext {
  public:
    Constants_sectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST();
    Constant_listContext *constant_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constants_sectionContext* constants_section();

  class  Constant_listContext : public antlr4::ParserRuleContext {
  public:
    Constant_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constant_definitionContext *> constant_definition();
    Constant_definitionContext* constant_definition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_listContext* constant_list();

  class  Constant_definitionContext : public antlr4::ParserRuleContext {
  public:
    Constant_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_nameContext *constant_name();
    antlr4::tree::TerminalNode *EQUAL();
    ConstantContext *constant();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_definitionContext* constant_definition();

  class  Constant_nameContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    SymtabEntry * entry = nullptr;
    Constant_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_nameContext* constant_name();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    Object value = nullptr;
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    Unsigned_numberContext *unsigned_number();
    SignContext *sign();
    Character_constantContext *character_constant();
    String_constantContext *string_constant();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantContext* constant();

  class  Types_sectionContext : public antlr4::ParserRuleContext {
  public:
    Types_sectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    Type_declaration_listContext *type_declaration_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Types_sectionContext* types_section();

  class  Type_declaration_listContext : public antlr4::ParserRuleContext {
  public:
    Type_declaration_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Type_declarationContext *> type_declaration();
    Type_declarationContext* type_declaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_declaration_listContext* type_declaration_list();

  class  Type_declarationContext : public antlr4::ParserRuleContext {
  public:
    Type_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_identifierContext *type_identifier();
    antlr4::tree::TerminalNode *EQUAL();
    Data_typeContext *data_type();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_declarationContext* type_declaration();

  class  Type_identifierContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    SymtabEntry * entry = nullptr;
    Type_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_identifierContext* type_identifier();

  class  Data_typeContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    Data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Data_typeContext() = default;
    void copyFrom(Data_typeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Array_type_specContext : public Data_typeContext {
  public:
    Array_type_specContext(Data_typeContext *ctx);

    Array_typeContext *array_type();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Simple_type_specContext : public Data_typeContext {
  public:
    Simple_type_specContext(Data_typeContext *ctx);

    Simple_typeContext *simple_type();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Data_typeContext* data_type();

  class  Simple_typeContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    Simple_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Simple_typeContext() = default;
    void copyFrom(Simple_typeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Type_identifier_type_specContext : public Simple_typeContext {
  public:
    Type_identifier_type_specContext(Simple_typeContext *ctx);

    Type_identifierContext *type_identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Subrange_type_specContext : public Simple_typeContext {
  public:
    Subrange_type_specContext(Simple_typeContext *ctx);

    Subrange_typeContext *subrange_type();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Simple_typeContext* simple_type();

  class  Variable_sectionContext : public antlr4::ParserRuleContext {
  public:
    Variable_sectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    Variable_declaration_listContext *variable_declaration_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_sectionContext* variable_section();

  class  Variable_declaration_listContext : public antlr4::ParserRuleContext {
  public:
    Variable_declaration_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Variable_declarationContext *> variable_declaration();
    Variable_declarationContext* variable_declaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_declaration_listContext* variable_declaration_list();

  class  Variable_declarationContext : public antlr4::ParserRuleContext {
  public:
    Variable_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_name_listContext *variable_name_list();
    antlr4::tree::TerminalNode *COLON();
    Data_typeContext *data_type();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_declarationContext* variable_declaration();

  class  Variable_name_listContext : public antlr4::ParserRuleContext {
  public:
    Variable_name_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Variable_nameContext *> variable_name();
    Variable_nameContext* variable_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_name_listContext* variable_name_list();

  class  Variable_nameContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    SymtabEntry * entry = nullptr;
    Variable_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_nameContext* variable_name();

  class  Subrange_typeContext : public antlr4::ParserRuleContext {
  public:
    Subrange_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConstantContext *> constant();
    ConstantContext* constant(size_t i);
    antlr4::tree::TerminalNode *DOTDOT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subrange_typeContext* subrange_type();

  class  Array_typeContext : public antlr4::ParserRuleContext {
  public:
    Array_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *LBRACKET();
    Array_declarationContext *array_declaration();
    antlr4::tree::TerminalNode *RBRACKET();
    antlr4::tree::TerminalNode *OF();
    Data_typeContext *data_type();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Array_typeContext* array_type();

  class  Array_declarationContext : public antlr4::ParserRuleContext {
  public:
    Array_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Simple_typeContext *> simple_type();
    Simple_typeContext* simple_type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Array_declarationContext* array_declaration();

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
    ParametersContext *parameters();


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
    Type_identifierContext *type_identifier();
    ParametersContext *parameters();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionContext* function();

  class  Routine_nameContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    SymtabEntry * entry = nullptr;
    Routine_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Routine_nameContext* routine_name();

  class  ParametersContext : public antlr4::ParserRuleContext {
  public:
    ParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    Parameter_listContext *parameter_list();
    antlr4::tree::TerminalNode *RPAREN();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParametersContext* parameters();

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
    Type_identifierContext *type_identifier();
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
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_name_listContext* parameter_name_list();

  class  Parameter_nameContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    SymtabEntry * entry = nullptr;
    Parameter_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_nameContext* parameter_name();

  class  Procedure_callContext : public antlr4::ParserRuleContext {
  public:
    Procedure_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Procedure_nameContext *procedure_name();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    Argument_listContext *argument_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedure_callContext* procedure_call();

  class  Procedure_nameContext : public antlr4::ParserRuleContext {
  public:
    SymtabEntry * entry = nullptr;
    Procedure_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedure_nameContext* procedure_name();

  class  Function_callContext : public antlr4::ParserRuleContext {
  public:
    Function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_nameContext *function_name();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    Argument_listContext *argument_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_callContext* function_call();

  class  Function_nameContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    SymtabEntry * entry = nullptr;
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

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Compound_statementContext *compound_statement();
    Assign_statementContext *assign_statement();
    If_statementContext *if_statement();
    Case_statementContext *case_statement();
    Repeat_statementContext *repeat_statement();
    While_statementContext *while_statement();
    For_statementContext *for_statement();
    Write_statementContext *write_statement();
    Writeln_statementContext *writeln_statement();
    Procedure_callContext *procedure_call();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

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
    Typespec * type = nullptr;
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

  class  If_statementContext : public antlr4::ParserRuleContext {
  public:
    If_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *THEN();
    True_statementContext *true_statement();
    antlr4::tree::TerminalNode *ELSE();
    False_statementContext *false_statement();


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

  class  False_statementContext : public antlr4::ParserRuleContext {
  public:
    False_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  False_statementContext* false_statement();

  class  Case_statementContext : public antlr4::ParserRuleContext {
  public:
    map<int, ExprParser::StatementContext*> * jumpTable = nullptr;
    Case_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *OF();
    Case_branch_listContext *case_branch_list();
    antlr4::tree::TerminalNode *END();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_statementContext* case_statement();

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
    Typespec * type = nullptr;
    int value = 0;
    Case_constantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantContext *constant();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_constantContext* case_constant();

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

  class  For_statementContext : public antlr4::ParserRuleContext {
  public:
    For_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    VariableContext *variable();
    antlr4::tree::TerminalNode *ASSIGN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *DO();
    StatementContext *statement();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *DOWNTO();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_statementContext* for_statement();

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
    Integer_constantContext *integer_constant();
    SignContext *sign();
    antlr4::tree::TerminalNode *COLON();
    Decimal_placeContext *decimal_place();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WidthContext* width();

  class  Decimal_placeContext : public antlr4::ParserRuleContext {
  public:
    Decimal_placeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_constantContext *integer_constant();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Decimal_placeContext* decimal_place();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SimpleExpressionContext *> simpleExpression();
    SimpleExpressionContext* simpleExpression(size_t i);
    Relational_operatorContext *relational_operator();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  SimpleExpressionContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    SimpleExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TermContext *> term();
    TermContext* term(size_t i);
    SignContext *sign();
    std::vector<Expression_operatorContext *> expression_operator();
    Expression_operatorContext* expression_operator(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleExpressionContext* simpleExpression();

  class  TermContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    TermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FactorContext *> factor();
    FactorContext* factor(size_t i);
    std::vector<Term_operatorContext *> term_operator();
    Term_operatorContext* term_operator(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TermContext* term();

  class  FactorContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    FactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FactorContext() = default;
    void copyFrom(FactorContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Number_factorContext : public FactorContext {
  public:
    Number_factorContext(FactorContext *ctx);

    NumberContext *number();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Variable_factorContext : public FactorContext {
  public:
    Variable_factorContext(FactorContext *ctx);

    VariableContext *variable();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Function_call_factorContext : public FactorContext {
  public:
    Function_call_factorContext(FactorContext *ctx);

    Function_callContext *function_call();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Parenthesized_factorContext : public FactorContext {
  public:
    Parenthesized_factorContext(FactorContext *ctx);

    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Character_factorContext : public FactorContext {
  public:
    Character_factorContext(FactorContext *ctx);

    Character_constantContext *character_constant();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  String_factorContext : public FactorContext {
  public:
    String_factorContext(FactorContext *ctx);

    String_constantContext *string_constant();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Not_factorContext : public FactorContext {
  public:
    Not_factorContext(FactorContext *ctx);

    antlr4::tree::TerminalNode *NOT();
    FactorContext *factor();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FactorContext* factor();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    SymtabEntry * entry = nullptr;
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_nameContext *variable_name();
    std::vector<ModifierContext *> modifier();
    ModifierContext* modifier(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  ModifierContext : public antlr4::ParserRuleContext {
  public:
    ModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACKET();
    Index_listContext *index_list();
    antlr4::tree::TerminalNode *RBRACKET();
    antlr4::tree::TerminalNode *PERIOD();
    FieldContext *field();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModifierContext* modifier();

  class  Index_listContext : public antlr4::ParserRuleContext {
  public:
    Index_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IndexContext *> index();
    IndexContext* index(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_listContext* index_list();

  class  IndexContext : public antlr4::ParserRuleContext {
  public:
    IndexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexContext* index();

  class  FieldContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    SymtabEntry * entry = nullptr;
    FieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldContext* field();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unsigned_numberContext *unsigned_number();
    SignContext *sign();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class  Unsigned_numberContext : public antlr4::ParserRuleContext {
  public:
    Unsigned_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_constantContext *integer_constant();
    Real_constantContext *real_constant();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unsigned_numberContext* unsigned_number();

  class  Integer_constantContext : public antlr4::ParserRuleContext {
  public:
    Integer_constantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Integer_constantContext* integer_constant();

  class  Real_constantContext : public antlr4::ParserRuleContext {
  public:
    Real_constantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REAL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Real_constantContext* real_constant();

  class  Character_constantContext : public antlr4::ParserRuleContext {
  public:
    Character_constantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHARACTER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Character_constantContext* character_constant();

  class  String_constantContext : public antlr4::ParserRuleContext {
  public:
    String_constantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  String_constantContext* string_constant();

  class  SignContext : public antlr4::ParserRuleContext {
  public:
    SignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MINUSOP();
    antlr4::tree::TerminalNode *PLUSOP();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignContext* sign();

  class  Relational_operatorContext : public antlr4::ParserRuleContext {
  public:
    Relational_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *NE();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LTEQ();
    antlr4::tree::TerminalNode *GTEQ();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Relational_operatorContext* relational_operator();

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

