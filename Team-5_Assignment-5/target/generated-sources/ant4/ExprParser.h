
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
    RuleCompound_statement = 4, RuleStatement_list = 5, RuleStatement = 6, 
    RuleFor_statement = 7
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
  class Compound_statementContext;
  class Statement_listContext;
  class StatementContext;
  class For_statementContext; 

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
    Compound_statementContext *compound_statement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Program_bodyContext* program_body();

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
    For_statementContext *for_statement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  For_statementContext : public antlr4::ParserRuleContext {
  public:
    For_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *DO();
    StatementContext *statement();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *DOWNTO();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_statementContext* for_statement();


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

