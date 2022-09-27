
// Generated from Expr.g4 by ANTLR 4.7.2


#include "ExprVisitor.h"

#include "ExprParser.h"


using namespace antlrcpp;
using namespace antlr4;

ExprParser::ExprParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ExprParser::~ExprParser() {
  delete _interpreter;
}

std::string ExprParser::getGrammarFileName() const {
  return "Expr.g4";
}

const std::vector<std::string>& ExprParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ExprParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

ExprParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Program_headerContext* ExprParser::ProgramContext::program_header() {
  return getRuleContext<ExprParser::Program_headerContext>(0);
}

ExprParser::Program_bodyContext* ExprParser::ProgramContext::program_body() {
  return getRuleContext<ExprParser::Program_bodyContext>(0);
}

tree::TerminalNode* ExprParser::ProgramContext::PERIOD() {
  return getToken(ExprParser::PERIOD, 0);
}


size_t ExprParser::ProgramContext::getRuleIndex() const {
  return ExprParser::RuleProgram;
}


antlrcpp::Any ExprParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ProgramContext* ExprParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, ExprParser::RuleProgram);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(16);
    program_header();
    setState(17);
    program_body();
    setState(18);
    match(ExprParser::PERIOD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Program_headerContext ------------------------------------------------------------------

ExprParser::Program_headerContext::Program_headerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Program_headerContext::PROGRAM() {
  return getToken(ExprParser::PROGRAM, 0);
}

ExprParser::Program_nameContext* ExprParser::Program_headerContext::program_name() {
  return getRuleContext<ExprParser::Program_nameContext>(0);
}

tree::TerminalNode* ExprParser::Program_headerContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
}


size_t ExprParser::Program_headerContext::getRuleIndex() const {
  return ExprParser::RuleProgram_header;
}


antlrcpp::Any ExprParser::Program_headerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitProgram_header(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Program_headerContext* ExprParser::program_header() {
  Program_headerContext *_localctx = _tracker.createInstance<Program_headerContext>(_ctx, getState());
  enterRule(_localctx, 2, ExprParser::RuleProgram_header);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(20);
    match(ExprParser::PROGRAM);
    setState(21);
    program_name();
    setState(22);
    match(ExprParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Program_nameContext ------------------------------------------------------------------

ExprParser::Program_nameContext::Program_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Program_nameContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}


size_t ExprParser::Program_nameContext::getRuleIndex() const {
  return ExprParser::RuleProgram_name;
}


antlrcpp::Any ExprParser::Program_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitProgram_name(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Program_nameContext* ExprParser::program_name() {
  Program_nameContext *_localctx = _tracker.createInstance<Program_nameContext>(_ctx, getState());
  enterRule(_localctx, 4, ExprParser::RuleProgram_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(24);
    match(ExprParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Program_bodyContext ------------------------------------------------------------------

ExprParser::Program_bodyContext::Program_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Compound_statementContext* ExprParser::Program_bodyContext::compound_statement() {
  return getRuleContext<ExprParser::Compound_statementContext>(0);
}


size_t ExprParser::Program_bodyContext::getRuleIndex() const {
  return ExprParser::RuleProgram_body;
}


antlrcpp::Any ExprParser::Program_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitProgram_body(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Program_bodyContext* ExprParser::program_body() {
  Program_bodyContext *_localctx = _tracker.createInstance<Program_bodyContext>(_ctx, getState());
  enterRule(_localctx, 6, ExprParser::RuleProgram_body);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(26);
    compound_statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Compound_statementContext ------------------------------------------------------------------

ExprParser::Compound_statementContext::Compound_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Compound_statementContext::BEGIN() {
  return getToken(ExprParser::BEGIN, 0);
}

ExprParser::Statement_listContext* ExprParser::Compound_statementContext::statement_list() {
  return getRuleContext<ExprParser::Statement_listContext>(0);
}

tree::TerminalNode* ExprParser::Compound_statementContext::END() {
  return getToken(ExprParser::END, 0);
}


size_t ExprParser::Compound_statementContext::getRuleIndex() const {
  return ExprParser::RuleCompound_statement;
}


antlrcpp::Any ExprParser::Compound_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitCompound_statement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Compound_statementContext* ExprParser::compound_statement() {
  Compound_statementContext *_localctx = _tracker.createInstance<Compound_statementContext>(_ctx, getState());
  enterRule(_localctx, 8, ExprParser::RuleCompound_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(28);
    match(ExprParser::BEGIN);
    setState(29);
    statement_list();
    setState(30);
    match(ExprParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Statement_listContext ------------------------------------------------------------------

ExprParser::Statement_listContext::Statement_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::StatementContext *> ExprParser::Statement_listContext::statement() {
  return getRuleContexts<ExprParser::StatementContext>();
}

ExprParser::StatementContext* ExprParser::Statement_listContext::statement(size_t i) {
  return getRuleContext<ExprParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::Statement_listContext::SEMICOLON() {
  return getTokens(ExprParser::SEMICOLON);
}

tree::TerminalNode* ExprParser::Statement_listContext::SEMICOLON(size_t i) {
  return getToken(ExprParser::SEMICOLON, i);
}


size_t ExprParser::Statement_listContext::getRuleIndex() const {
  return ExprParser::RuleStatement_list;
}


antlrcpp::Any ExprParser::Statement_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitStatement_list(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Statement_listContext* ExprParser::statement_list() {
  Statement_listContext *_localctx = _tracker.createInstance<Statement_listContext>(_ctx, getState());
  enterRule(_localctx, 10, ExprParser::RuleStatement_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(32);
    statement();
    setState(37);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::SEMICOLON) {
      setState(33);
      match(ExprParser::SEMICOLON);
      setState(34);
      statement();
      setState(39);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

ExprParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Compound_statementContext* ExprParser::StatementContext::compound_statement() {
  return getRuleContext<ExprParser::Compound_statementContext>(0);
}

ExprParser::For_statementContext* ExprParser::StatementContext::for_statement() {
  return getRuleContext<ExprParser::For_statementContext>(0);
}


size_t ExprParser::StatementContext::getRuleIndex() const {
  return ExprParser::RuleStatement;
}


antlrcpp::Any ExprParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::StatementContext* ExprParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 12, ExprParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(42);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::BEGIN: {
        enterOuterAlt(_localctx, 1);
        setState(40);
        compound_statement();
        break;
      }

      case ExprParser::FOR: {
        enterOuterAlt(_localctx, 2);
        setState(41);
        for_statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_statementContext ------------------------------------------------------------------

ExprParser::For_statementContext::For_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::For_statementContext::FOR() {
  return getToken(ExprParser::FOR, 0);
}

std::vector<tree::TerminalNode *> ExprParser::For_statementContext::IDENTIFIER() {
  return getTokens(ExprParser::IDENTIFIER);
}

tree::TerminalNode* ExprParser::For_statementContext::IDENTIFIER(size_t i) {
  return getToken(ExprParser::IDENTIFIER, i);
}

tree::TerminalNode* ExprParser::For_statementContext::ASSIGN() {
  return getToken(ExprParser::ASSIGN, 0);
}

tree::TerminalNode* ExprParser::For_statementContext::DO() {
  return getToken(ExprParser::DO, 0);
}

ExprParser::StatementContext* ExprParser::For_statementContext::statement() {
  return getRuleContext<ExprParser::StatementContext>(0);
}

tree::TerminalNode* ExprParser::For_statementContext::TO() {
  return getToken(ExprParser::TO, 0);
}

tree::TerminalNode* ExprParser::For_statementContext::DOWNTO() {
  return getToken(ExprParser::DOWNTO, 0);
}


size_t ExprParser::For_statementContext::getRuleIndex() const {
  return ExprParser::RuleFor_statement;
}


antlrcpp::Any ExprParser::For_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitFor_statement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::For_statementContext* ExprParser::for_statement() {
  For_statementContext *_localctx = _tracker.createInstance<For_statementContext>(_ctx, getState());
  enterRule(_localctx, 14, ExprParser::RuleFor_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    match(ExprParser::FOR);
    setState(45);
    match(ExprParser::IDENTIFIER);
    setState(46);
    match(ExprParser::ASSIGN);
    setState(47);
    match(ExprParser::IDENTIFIER);
    setState(48);
    _la = _input->LA(1);
    if (!(_la == ExprParser::TO

    || _la == ExprParser::DOWNTO)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(49);
    match(ExprParser::IDENTIFIER);
    setState(50);
    match(ExprParser::DO);
    setState(51);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> ExprParser::_decisionToDFA;
atn::PredictionContextCache ExprParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ExprParser::_atn;
std::vector<uint16_t> ExprParser::_serializedATN;

std::vector<std::string> ExprParser::_ruleNames = {
  "program", "program_header", "program_name", "program_body", "compound_statement", 
  "statement_list", "statement", "for_statement"
};

std::vector<std::string> ExprParser::_literalNames = {
  "", "'+'", "'-'", "'*'", "'/'", "'='", "'<'", "'>'", "'^'", "':'", "','", 
  "'.'", "';'", "'('", "')'", "'['", "']'", "'(*'", "'*)'", "'{'", "'}'", 
  "':='", "'+='", "'-='", "'/='", "'*='", "'<>'", "'<='", "'>='", "'..'", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "'''"
};

std::vector<std::string> ExprParser::_symbolicNames = {
  "", "PLUSOP", "MINUSOP", "MULTOP", "DIVOP", "EQUAL", "LT", "GT", "CARAT", 
  "COLON", "COMMA", "PERIOD", "SEMICOLON", "LPAREN", "RPAREN", "LBRACKET", 
  "RBRACKET", "LCOMMENT", "RCOMMENT", "LBRACE", "RBRACE", "ASSIGN", "PLUSEQUAL", 
  "MINUSEQUAL", "DIVEQUAL", "MULTEQUAL", "NE", "LTEQ", "GTEQ", "DOTDOT", 
  "PROGRAM", "CONST", "TYPE", "ARRAY", "ASM", "BREAK", "CONSTRUCTOR", "CONTINUE", 
  "DESTRUCTOR", "FALSE", "FILE", "GOTO", "IMPLEMENTATION", "IN", "INLINE", 
  "INTERFACE", "LABEL", "NIL", "OBJECT", "ON", "OPERATOR", "PACKED", "SET", 
  "SHL", "SHR", "UNIT", "USES", "XOR", "OF", "RECORD", "VAR", "BEGIN", "END", 
  "DIV", "MOD", "AND", "OR", "NOT", "IF", "THEN", "ELSE", "CASE", "REPEAT", 
  "UNTIL", "WHILE", "DO", "FOR", "TO", "DOWNTO", "WRITE", "WRITELN", "READ", 
  "READLN", "PROCEDURE", "FUNCTION", "IDENTIFIER", "INTEGER", "REAL", "NEWLINE", 
  "WS", "QUOTE", "CHARACTER", "STRING", "COMMENT"
};

dfa::Vocabulary ExprParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ExprParser::_tokenNames;

ExprParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x5f, 0x38, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x7, 0x7, 0x26, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x29, 0xb, 
    0x7, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x2d, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x2, 0x2, 0xa, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x2, 
    0x3, 0x3, 0x2, 0x4f, 0x50, 0x2, 0x31, 0x2, 0x12, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0x16, 0x3, 0x2, 0x2, 0x2, 0x6, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x8, 0x1c, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x1e, 0x3, 0x2, 0x2, 0x2, 0xc, 0x22, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x10, 0x2e, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x13, 0x5, 0x4, 0x3, 0x2, 0x13, 0x14, 0x5, 0x8, 0x5, 0x2, 
    0x14, 0x15, 0x7, 0xd, 0x2, 0x2, 0x15, 0x3, 0x3, 0x2, 0x2, 0x2, 0x16, 
    0x17, 0x7, 0x20, 0x2, 0x2, 0x17, 0x18, 0x5, 0x6, 0x4, 0x2, 0x18, 0x19, 
    0x7, 0xe, 0x2, 0x2, 0x19, 0x5, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1b, 0x7, 
    0x57, 0x2, 0x2, 0x1b, 0x7, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1d, 0x5, 0xa, 
    0x6, 0x2, 0x1d, 0x9, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1f, 0x7, 0x3f, 0x2, 
    0x2, 0x1f, 0x20, 0x5, 0xc, 0x7, 0x2, 0x20, 0x21, 0x7, 0x40, 0x2, 0x2, 
    0x21, 0xb, 0x3, 0x2, 0x2, 0x2, 0x22, 0x27, 0x5, 0xe, 0x8, 0x2, 0x23, 
    0x24, 0x7, 0xe, 0x2, 0x2, 0x24, 0x26, 0x5, 0xe, 0x8, 0x2, 0x25, 0x23, 
    0x3, 0x2, 0x2, 0x2, 0x26, 0x29, 0x3, 0x2, 0x2, 0x2, 0x27, 0x25, 0x3, 
    0x2, 0x2, 0x2, 0x27, 0x28, 0x3, 0x2, 0x2, 0x2, 0x28, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0x29, 0x27, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2d, 0x5, 0xa, 0x6, 
    0x2, 0x2b, 0x2d, 0x5, 0x10, 0x9, 0x2, 0x2c, 0x2a, 0x3, 0x2, 0x2, 0x2, 
    0x2c, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2d, 0xf, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0x2f, 0x7, 0x4e, 0x2, 0x2, 0x2f, 0x30, 0x7, 0x57, 0x2, 0x2, 0x30, 0x31, 
    0x7, 0x17, 0x2, 0x2, 0x31, 0x32, 0x7, 0x57, 0x2, 0x2, 0x32, 0x33, 0x9, 
    0x2, 0x2, 0x2, 0x33, 0x34, 0x7, 0x57, 0x2, 0x2, 0x34, 0x35, 0x7, 0x4d, 
    0x2, 0x2, 0x35, 0x36, 0x5, 0xe, 0x8, 0x2, 0x36, 0x11, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0x27, 0x2c, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ExprParser::Initializer ExprParser::_init;
