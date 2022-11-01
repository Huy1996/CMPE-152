
    #include <map>
    #include "intermediate/symtab/Symtab.h"
    #include "intermediate/type/Typespec.h"
    using namespace intermediate::symtab;
    using namespace intermediate::type;


// Generated from Expr.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  ExprLexer : public antlr4::Lexer {
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

  ExprLexer(antlr4::CharStream *input);
  ~ExprLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

