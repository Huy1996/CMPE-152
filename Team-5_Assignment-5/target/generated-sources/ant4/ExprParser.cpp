
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

tree::TerminalNode* ExprParser::ProgramContext::EOF() {
  return getToken(ExprParser::EOF, 0);
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
    setState(146);
    program_header();
    setState(147);
    program_body();
    setState(148);
    match(ExprParser::PERIOD);
    setState(149);
    match(ExprParser::EOF);
   
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
    setState(151);
    match(ExprParser::PROGRAM);
    setState(152);
    program_name();
    setState(153);
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
    setState(155);
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

ExprParser::Program_declarationContext* ExprParser::Program_bodyContext::program_declaration() {
  return getRuleContext<ExprParser::Program_declarationContext>(0);
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
    setState(157);
    program_declaration();
    setState(158);
    compound_statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Program_declarationContext ------------------------------------------------------------------

ExprParser::Program_declarationContext::Program_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Constants_sectionContext* ExprParser::Program_declarationContext::constants_section() {
  return getRuleContext<ExprParser::Constants_sectionContext>(0);
}

std::vector<tree::TerminalNode *> ExprParser::Program_declarationContext::SEMICOLON() {
  return getTokens(ExprParser::SEMICOLON);
}

tree::TerminalNode* ExprParser::Program_declarationContext::SEMICOLON(size_t i) {
  return getToken(ExprParser::SEMICOLON, i);
}

ExprParser::Types_sectionContext* ExprParser::Program_declarationContext::types_section() {
  return getRuleContext<ExprParser::Types_sectionContext>(0);
}

ExprParser::Routine_sectionContext* ExprParser::Program_declarationContext::routine_section() {
  return getRuleContext<ExprParser::Routine_sectionContext>(0);
}

ExprParser::Variable_sectionContext* ExprParser::Program_declarationContext::variable_section() {
  return getRuleContext<ExprParser::Variable_sectionContext>(0);
}


size_t ExprParser::Program_declarationContext::getRuleIndex() const {
  return ExprParser::RuleProgram_declaration;
}


antlrcpp::Any ExprParser::Program_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitProgram_declaration(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Program_declarationContext* ExprParser::program_declaration() {
  Program_declarationContext *_localctx = _tracker.createInstance<Program_declarationContext>(_ctx, getState());
  enterRule(_localctx, 8, ExprParser::RuleProgram_declaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(163);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::CONST) {
      setState(160);
      constants_section();
      setState(161);
      match(ExprParser::SEMICOLON);
    }
    setState(168);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::TYPE) {
      setState(165);
      types_section();
      setState(166);
      match(ExprParser::SEMICOLON);
    }
    setState(173);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::PROCEDURE

    || _la == ExprParser::FUNCTION) {
      setState(170);
      routine_section();
      setState(171);
      match(ExprParser::SEMICOLON);
    }
    setState(178);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::VAR) {
      setState(175);
      variable_section();
      setState(176);
      match(ExprParser::SEMICOLON);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Constants_sectionContext ------------------------------------------------------------------

ExprParser::Constants_sectionContext::Constants_sectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Constants_sectionContext::CONST() {
  return getToken(ExprParser::CONST, 0);
}

ExprParser::Const_listContext* ExprParser::Constants_sectionContext::const_list() {
  return getRuleContext<ExprParser::Const_listContext>(0);
}


size_t ExprParser::Constants_sectionContext::getRuleIndex() const {
  return ExprParser::RuleConstants_section;
}


antlrcpp::Any ExprParser::Constants_sectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitConstants_section(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Constants_sectionContext* ExprParser::constants_section() {
  Constants_sectionContext *_localctx = _tracker.createInstance<Constants_sectionContext>(_ctx, getState());
  enterRule(_localctx, 10, ExprParser::RuleConstants_section);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    match(ExprParser::CONST);
    setState(181);
    const_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Const_listContext ------------------------------------------------------------------

ExprParser::Const_listContext::Const_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::Const_nameContext *> ExprParser::Const_listContext::const_name() {
  return getRuleContexts<ExprParser::Const_nameContext>();
}

ExprParser::Const_nameContext* ExprParser::Const_listContext::const_name(size_t i) {
  return getRuleContext<ExprParser::Const_nameContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::Const_listContext::EQUAL() {
  return getTokens(ExprParser::EQUAL);
}

tree::TerminalNode* ExprParser::Const_listContext::EQUAL(size_t i) {
  return getToken(ExprParser::EQUAL, i);
}

std::vector<ExprParser::ConstantContext *> ExprParser::Const_listContext::constant() {
  return getRuleContexts<ExprParser::ConstantContext>();
}

ExprParser::ConstantContext* ExprParser::Const_listContext::constant(size_t i) {
  return getRuleContext<ExprParser::ConstantContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::Const_listContext::SEMICOLON() {
  return getTokens(ExprParser::SEMICOLON);
}

tree::TerminalNode* ExprParser::Const_listContext::SEMICOLON(size_t i) {
  return getToken(ExprParser::SEMICOLON, i);
}


size_t ExprParser::Const_listContext::getRuleIndex() const {
  return ExprParser::RuleConst_list;
}


antlrcpp::Any ExprParser::Const_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitConst_list(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Const_listContext* ExprParser::const_list() {
  Const_listContext *_localctx = _tracker.createInstance<Const_listContext>(_ctx, getState());
  enterRule(_localctx, 12, ExprParser::RuleConst_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(183);
    const_name();
    setState(184);
    match(ExprParser::EQUAL);
    setState(185);
    constant();
    setState(193);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(186);
        match(ExprParser::SEMICOLON);
        setState(187);
        const_name();
        setState(188);
        match(ExprParser::EQUAL);
        setState(189);
        constant(); 
      }
      setState(195);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Const_nameContext ------------------------------------------------------------------

ExprParser::Const_nameContext::Const_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Const_nameContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}


size_t ExprParser::Const_nameContext::getRuleIndex() const {
  return ExprParser::RuleConst_name;
}


antlrcpp::Any ExprParser::Const_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitConst_name(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Const_nameContext* ExprParser::const_name() {
  Const_nameContext *_localctx = _tracker.createInstance<Const_nameContext>(_ctx, getState());
  enterRule(_localctx, 14, ExprParser::RuleConst_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(196);
    match(ExprParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

ExprParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::ConstantContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}

ExprParser::SignContext* ExprParser::ConstantContext::sign() {
  return getRuleContext<ExprParser::SignContext>(0);
}

ExprParser::NumberContext* ExprParser::ConstantContext::number() {
  return getRuleContext<ExprParser::NumberContext>(0);
}

ExprParser::Char_constantContext* ExprParser::ConstantContext::char_constant() {
  return getRuleContext<ExprParser::Char_constantContext>(0);
}

ExprParser::String_constantContext* ExprParser::ConstantContext::string_constant() {
  return getRuleContext<ExprParser::String_constantContext>(0);
}


size_t ExprParser::ConstantContext::getRuleIndex() const {
  return ExprParser::RuleConstant;
}


antlrcpp::Any ExprParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ConstantContext* ExprParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 16, ExprParser::RuleConstant);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(205);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(199);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ExprParser::PLUSOP

      || _la == ExprParser::MINUSOP) {
        setState(198);
        sign();
      }

      setState(201);
      match(ExprParser::IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(202);
      number();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(203);
      char_constant();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(204);
      string_constant();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Types_sectionContext ------------------------------------------------------------------

ExprParser::Types_sectionContext::Types_sectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Types_sectionContext::TYPE() {
  return getToken(ExprParser::TYPE, 0);
}

ExprParser::Type_declarationContext* ExprParser::Types_sectionContext::type_declaration() {
  return getRuleContext<ExprParser::Type_declarationContext>(0);
}


size_t ExprParser::Types_sectionContext::getRuleIndex() const {
  return ExprParser::RuleTypes_section;
}


antlrcpp::Any ExprParser::Types_sectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitTypes_section(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Types_sectionContext* ExprParser::types_section() {
  Types_sectionContext *_localctx = _tracker.createInstance<Types_sectionContext>(_ctx, getState());
  enterRule(_localctx, 18, ExprParser::RuleTypes_section);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(207);
    match(ExprParser::TYPE);
    setState(208);
    type_declaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_declarationContext ------------------------------------------------------------------

ExprParser::Type_declarationContext::Type_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::Type_identifierContext *> ExprParser::Type_declarationContext::type_identifier() {
  return getRuleContexts<ExprParser::Type_identifierContext>();
}

ExprParser::Type_identifierContext* ExprParser::Type_declarationContext::type_identifier(size_t i) {
  return getRuleContext<ExprParser::Type_identifierContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::Type_declarationContext::EQUAL() {
  return getTokens(ExprParser::EQUAL);
}

tree::TerminalNode* ExprParser::Type_declarationContext::EQUAL(size_t i) {
  return getToken(ExprParser::EQUAL, i);
}

std::vector<ExprParser::Data_typeContext *> ExprParser::Type_declarationContext::data_type() {
  return getRuleContexts<ExprParser::Data_typeContext>();
}

ExprParser::Data_typeContext* ExprParser::Type_declarationContext::data_type(size_t i) {
  return getRuleContext<ExprParser::Data_typeContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::Type_declarationContext::SEMICOLON() {
  return getTokens(ExprParser::SEMICOLON);
}

tree::TerminalNode* ExprParser::Type_declarationContext::SEMICOLON(size_t i) {
  return getToken(ExprParser::SEMICOLON, i);
}


size_t ExprParser::Type_declarationContext::getRuleIndex() const {
  return ExprParser::RuleType_declaration;
}


antlrcpp::Any ExprParser::Type_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitType_declaration(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Type_declarationContext* ExprParser::type_declaration() {
  Type_declarationContext *_localctx = _tracker.createInstance<Type_declarationContext>(_ctx, getState());
  enterRule(_localctx, 20, ExprParser::RuleType_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(210);
    type_identifier();
    setState(211);
    match(ExprParser::EQUAL);
    setState(212);
    data_type();
    setState(220);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(213);
        match(ExprParser::SEMICOLON);
        setState(214);
        type_identifier();
        setState(215);
        match(ExprParser::EQUAL);
        setState(216);
        data_type(); 
      }
      setState(222);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_identifierContext ------------------------------------------------------------------

ExprParser::Type_identifierContext::Type_identifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Type_identifierContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}


size_t ExprParser::Type_identifierContext::getRuleIndex() const {
  return ExprParser::RuleType_identifier;
}


antlrcpp::Any ExprParser::Type_identifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitType_identifier(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Type_identifierContext* ExprParser::type_identifier() {
  Type_identifierContext *_localctx = _tracker.createInstance<Type_identifierContext>(_ctx, getState());
  enterRule(_localctx, 22, ExprParser::RuleType_identifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(223);
    match(ExprParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_sectionContext ------------------------------------------------------------------

ExprParser::Variable_sectionContext::Variable_sectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Variable_sectionContext::VAR() {
  return getToken(ExprParser::VAR, 0);
}

ExprParser::Var_declarationContext* ExprParser::Variable_sectionContext::var_declaration() {
  return getRuleContext<ExprParser::Var_declarationContext>(0);
}


size_t ExprParser::Variable_sectionContext::getRuleIndex() const {
  return ExprParser::RuleVariable_section;
}


antlrcpp::Any ExprParser::Variable_sectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitVariable_section(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Variable_sectionContext* ExprParser::variable_section() {
  Variable_sectionContext *_localctx = _tracker.createInstance<Variable_sectionContext>(_ctx, getState());
  enterRule(_localctx, 24, ExprParser::RuleVariable_section);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(225);
    match(ExprParser::VAR);
    setState(226);
    var_declaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_declarationContext ------------------------------------------------------------------

ExprParser::Var_declarationContext::Var_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::Var_listContext *> ExprParser::Var_declarationContext::var_list() {
  return getRuleContexts<ExprParser::Var_listContext>();
}

ExprParser::Var_listContext* ExprParser::Var_declarationContext::var_list(size_t i) {
  return getRuleContext<ExprParser::Var_listContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::Var_declarationContext::COLON() {
  return getTokens(ExprParser::COLON);
}

tree::TerminalNode* ExprParser::Var_declarationContext::COLON(size_t i) {
  return getToken(ExprParser::COLON, i);
}

std::vector<ExprParser::Data_typeContext *> ExprParser::Var_declarationContext::data_type() {
  return getRuleContexts<ExprParser::Data_typeContext>();
}

ExprParser::Data_typeContext* ExprParser::Var_declarationContext::data_type(size_t i) {
  return getRuleContext<ExprParser::Data_typeContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::Var_declarationContext::SEMICOLON() {
  return getTokens(ExprParser::SEMICOLON);
}

tree::TerminalNode* ExprParser::Var_declarationContext::SEMICOLON(size_t i) {
  return getToken(ExprParser::SEMICOLON, i);
}


size_t ExprParser::Var_declarationContext::getRuleIndex() const {
  return ExprParser::RuleVar_declaration;
}


antlrcpp::Any ExprParser::Var_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitVar_declaration(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Var_declarationContext* ExprParser::var_declaration() {
  Var_declarationContext *_localctx = _tracker.createInstance<Var_declarationContext>(_ctx, getState());
  enterRule(_localctx, 26, ExprParser::RuleVar_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(228);
    var_list();
    setState(229);
    match(ExprParser::COLON);
    setState(230);
    data_type();
    setState(238);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(231);
        match(ExprParser::SEMICOLON);
        setState(232);
        var_list();
        setState(233);
        match(ExprParser::COLON);
        setState(234);
        data_type(); 
      }
      setState(240);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_listContext ------------------------------------------------------------------

ExprParser::Var_listContext::Var_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::Var_nameContext *> ExprParser::Var_listContext::var_name() {
  return getRuleContexts<ExprParser::Var_nameContext>();
}

ExprParser::Var_nameContext* ExprParser::Var_listContext::var_name(size_t i) {
  return getRuleContext<ExprParser::Var_nameContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::Var_listContext::COMMA() {
  return getTokens(ExprParser::COMMA);
}

tree::TerminalNode* ExprParser::Var_listContext::COMMA(size_t i) {
  return getToken(ExprParser::COMMA, i);
}


size_t ExprParser::Var_listContext::getRuleIndex() const {
  return ExprParser::RuleVar_list;
}


antlrcpp::Any ExprParser::Var_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitVar_list(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Var_listContext* ExprParser::var_list() {
  Var_listContext *_localctx = _tracker.createInstance<Var_listContext>(_ctx, getState());
  enterRule(_localctx, 28, ExprParser::RuleVar_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(241);
    var_name();
    setState(246);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::COMMA) {
      setState(242);
      match(ExprParser::COMMA);
      setState(243);
      var_name();
      setState(248);
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

//----------------- Var_nameContext ------------------------------------------------------------------

ExprParser::Var_nameContext::Var_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Var_nameContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}


size_t ExprParser::Var_nameContext::getRuleIndex() const {
  return ExprParser::RuleVar_name;
}


antlrcpp::Any ExprParser::Var_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitVar_name(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Var_nameContext* ExprParser::var_name() {
  Var_nameContext *_localctx = _tracker.createInstance<Var_nameContext>(_ctx, getState());
  enterRule(_localctx, 30, ExprParser::RuleVar_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(249);
    match(ExprParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Routine_sectionContext ------------------------------------------------------------------

ExprParser::Routine_sectionContext::Routine_sectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::Routine_declarationContext *> ExprParser::Routine_sectionContext::routine_declaration() {
  return getRuleContexts<ExprParser::Routine_declarationContext>();
}

ExprParser::Routine_declarationContext* ExprParser::Routine_sectionContext::routine_declaration(size_t i) {
  return getRuleContext<ExprParser::Routine_declarationContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::Routine_sectionContext::SEMICOLON() {
  return getTokens(ExprParser::SEMICOLON);
}

tree::TerminalNode* ExprParser::Routine_sectionContext::SEMICOLON(size_t i) {
  return getToken(ExprParser::SEMICOLON, i);
}


size_t ExprParser::Routine_sectionContext::getRuleIndex() const {
  return ExprParser::RuleRoutine_section;
}


antlrcpp::Any ExprParser::Routine_sectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitRoutine_section(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Routine_sectionContext* ExprParser::routine_section() {
  Routine_sectionContext *_localctx = _tracker.createInstance<Routine_sectionContext>(_ctx, getState());
  enterRule(_localctx, 32, ExprParser::RuleRoutine_section);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(251);
    routine_declaration();
    setState(256);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(252);
        match(ExprParser::SEMICOLON);
        setState(253);
        routine_declaration(); 
      }
      setState(258);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Routine_declarationContext ------------------------------------------------------------------

ExprParser::Routine_declarationContext::Routine_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Routine_declarationContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
}

ExprParser::Program_bodyContext* ExprParser::Routine_declarationContext::program_body() {
  return getRuleContext<ExprParser::Program_bodyContext>(0);
}

ExprParser::ProcedureContext* ExprParser::Routine_declarationContext::procedure() {
  return getRuleContext<ExprParser::ProcedureContext>(0);
}

ExprParser::FunctionContext* ExprParser::Routine_declarationContext::function() {
  return getRuleContext<ExprParser::FunctionContext>(0);
}


size_t ExprParser::Routine_declarationContext::getRuleIndex() const {
  return ExprParser::RuleRoutine_declaration;
}


antlrcpp::Any ExprParser::Routine_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitRoutine_declaration(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Routine_declarationContext* ExprParser::routine_declaration() {
  Routine_declarationContext *_localctx = _tracker.createInstance<Routine_declarationContext>(_ctx, getState());
  enterRule(_localctx, 34, ExprParser::RuleRoutine_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(261);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::PROCEDURE: {
        setState(259);
        procedure();
        break;
      }

      case ExprParser::FUNCTION: {
        setState(260);
        function();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(263);
    match(ExprParser::SEMICOLON);
    setState(264);
    program_body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcedureContext ------------------------------------------------------------------

ExprParser::ProcedureContext::ProcedureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::ProcedureContext::PROCEDURE() {
  return getToken(ExprParser::PROCEDURE, 0);
}

ExprParser::Routine_nameContext* ExprParser::ProcedureContext::routine_name() {
  return getRuleContext<ExprParser::Routine_nameContext>(0);
}

ExprParser::Parameter_listContext* ExprParser::ProcedureContext::parameter_list() {
  return getRuleContext<ExprParser::Parameter_listContext>(0);
}


size_t ExprParser::ProcedureContext::getRuleIndex() const {
  return ExprParser::RuleProcedure;
}


antlrcpp::Any ExprParser::ProcedureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitProcedure(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ProcedureContext* ExprParser::procedure() {
  ProcedureContext *_localctx = _tracker.createInstance<ProcedureContext>(_ctx, getState());
  enterRule(_localctx, 36, ExprParser::RuleProcedure);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(266);
    match(ExprParser::PROCEDURE);
    setState(267);
    routine_name();
    setState(269);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::LPAREN) {
      setState(268);
      parameter_list();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

ExprParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::FunctionContext::FUNCTION() {
  return getToken(ExprParser::FUNCTION, 0);
}

ExprParser::Routine_nameContext* ExprParser::FunctionContext::routine_name() {
  return getRuleContext<ExprParser::Routine_nameContext>(0);
}

tree::TerminalNode* ExprParser::FunctionContext::COLON() {
  return getToken(ExprParser::COLON, 0);
}

ExprParser::Data_typeContext* ExprParser::FunctionContext::data_type() {
  return getRuleContext<ExprParser::Data_typeContext>(0);
}

ExprParser::Parameter_listContext* ExprParser::FunctionContext::parameter_list() {
  return getRuleContext<ExprParser::Parameter_listContext>(0);
}


size_t ExprParser::FunctionContext::getRuleIndex() const {
  return ExprParser::RuleFunction;
}


antlrcpp::Any ExprParser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::FunctionContext* ExprParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 38, ExprParser::RuleFunction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(271);
    match(ExprParser::FUNCTION);
    setState(272);
    routine_name();
    setState(274);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::LPAREN) {
      setState(273);
      parameter_list();
    }
    setState(276);
    match(ExprParser::COLON);
    setState(277);
    data_type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Routine_nameContext ------------------------------------------------------------------

ExprParser::Routine_nameContext::Routine_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Routine_nameContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}


size_t ExprParser::Routine_nameContext::getRuleIndex() const {
  return ExprParser::RuleRoutine_name;
}


antlrcpp::Any ExprParser::Routine_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitRoutine_name(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Routine_nameContext* ExprParser::routine_name() {
  Routine_nameContext *_localctx = _tracker.createInstance<Routine_nameContext>(_ctx, getState());
  enterRule(_localctx, 40, ExprParser::RuleRoutine_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(279);
    match(ExprParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parameter_listContext ------------------------------------------------------------------

ExprParser::Parameter_listContext::Parameter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Parameter_listContext::LPAREN() {
  return getToken(ExprParser::LPAREN, 0);
}

std::vector<ExprParser::Parameter_declarationContext *> ExprParser::Parameter_listContext::parameter_declaration() {
  return getRuleContexts<ExprParser::Parameter_declarationContext>();
}

ExprParser::Parameter_declarationContext* ExprParser::Parameter_listContext::parameter_declaration(size_t i) {
  return getRuleContext<ExprParser::Parameter_declarationContext>(i);
}

tree::TerminalNode* ExprParser::Parameter_listContext::RPAREN() {
  return getToken(ExprParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> ExprParser::Parameter_listContext::SEMICOLON() {
  return getTokens(ExprParser::SEMICOLON);
}

tree::TerminalNode* ExprParser::Parameter_listContext::SEMICOLON(size_t i) {
  return getToken(ExprParser::SEMICOLON, i);
}


size_t ExprParser::Parameter_listContext::getRuleIndex() const {
  return ExprParser::RuleParameter_list;
}


antlrcpp::Any ExprParser::Parameter_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitParameter_list(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Parameter_listContext* ExprParser::parameter_list() {
  Parameter_listContext *_localctx = _tracker.createInstance<Parameter_listContext>(_ctx, getState());
  enterRule(_localctx, 42, ExprParser::RuleParameter_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(281);
    match(ExprParser::LPAREN);
    setState(282);
    parameter_declaration();
    setState(287);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::SEMICOLON) {
      setState(283);
      match(ExprParser::SEMICOLON);
      setState(284);
      parameter_declaration();
      setState(289);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(290);
    match(ExprParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parameter_declarationContext ------------------------------------------------------------------

ExprParser::Parameter_declarationContext::Parameter_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Parameter_name_listContext* ExprParser::Parameter_declarationContext::parameter_name_list() {
  return getRuleContext<ExprParser::Parameter_name_listContext>(0);
}

tree::TerminalNode* ExprParser::Parameter_declarationContext::COLON() {
  return getToken(ExprParser::COLON, 0);
}

ExprParser::Data_typeContext* ExprParser::Parameter_declarationContext::data_type() {
  return getRuleContext<ExprParser::Data_typeContext>(0);
}

tree::TerminalNode* ExprParser::Parameter_declarationContext::VAR() {
  return getToken(ExprParser::VAR, 0);
}


size_t ExprParser::Parameter_declarationContext::getRuleIndex() const {
  return ExprParser::RuleParameter_declaration;
}


antlrcpp::Any ExprParser::Parameter_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitParameter_declaration(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Parameter_declarationContext* ExprParser::parameter_declaration() {
  Parameter_declarationContext *_localctx = _tracker.createInstance<Parameter_declarationContext>(_ctx, getState());
  enterRule(_localctx, 44, ExprParser::RuleParameter_declaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(293);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::VAR) {
      setState(292);
      match(ExprParser::VAR);
    }
    setState(295);
    parameter_name_list();
    setState(296);
    match(ExprParser::COLON);
    setState(297);
    data_type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parameter_name_listContext ------------------------------------------------------------------

ExprParser::Parameter_name_listContext::Parameter_name_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::Parameter_nameContext *> ExprParser::Parameter_name_listContext::parameter_name() {
  return getRuleContexts<ExprParser::Parameter_nameContext>();
}

ExprParser::Parameter_nameContext* ExprParser::Parameter_name_listContext::parameter_name(size_t i) {
  return getRuleContext<ExprParser::Parameter_nameContext>(i);
}

tree::TerminalNode* ExprParser::Parameter_name_listContext::COMMA() {
  return getToken(ExprParser::COMMA, 0);
}


size_t ExprParser::Parameter_name_listContext::getRuleIndex() const {
  return ExprParser::RuleParameter_name_list;
}


antlrcpp::Any ExprParser::Parameter_name_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitParameter_name_list(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Parameter_name_listContext* ExprParser::parameter_name_list() {
  Parameter_name_listContext *_localctx = _tracker.createInstance<Parameter_name_listContext>(_ctx, getState());
  enterRule(_localctx, 46, ExprParser::RuleParameter_name_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(299);
    parameter_name();

    setState(300);
    match(ExprParser::COMMA);
    setState(301);
    parameter_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parameter_nameContext ------------------------------------------------------------------

ExprParser::Parameter_nameContext::Parameter_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Parameter_nameContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}


size_t ExprParser::Parameter_nameContext::getRuleIndex() const {
  return ExprParser::RuleParameter_name;
}


antlrcpp::Any ExprParser::Parameter_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitParameter_name(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Parameter_nameContext* ExprParser::parameter_name() {
  Parameter_nameContext *_localctx = _tracker.createInstance<Parameter_nameContext>(_ctx, getState());
  enterRule(_localctx, 48, ExprParser::RuleParameter_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(303);
    match(ExprParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Call_procedureContext ------------------------------------------------------------------

ExprParser::Call_procedureContext::Call_procedureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Procedure_nameContext* ExprParser::Call_procedureContext::procedure_name() {
  return getRuleContext<ExprParser::Procedure_nameContext>(0);
}

tree::TerminalNode* ExprParser::Call_procedureContext::LPAREN() {
  return getToken(ExprParser::LPAREN, 0);
}

tree::TerminalNode* ExprParser::Call_procedureContext::RPAREN() {
  return getToken(ExprParser::RPAREN, 0);
}

ExprParser::Argument_listContext* ExprParser::Call_procedureContext::argument_list() {
  return getRuleContext<ExprParser::Argument_listContext>(0);
}


size_t ExprParser::Call_procedureContext::getRuleIndex() const {
  return ExprParser::RuleCall_procedure;
}


antlrcpp::Any ExprParser::Call_procedureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitCall_procedure(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Call_procedureContext* ExprParser::call_procedure() {
  Call_procedureContext *_localctx = _tracker.createInstance<Call_procedureContext>(_ctx, getState());
  enterRule(_localctx, 50, ExprParser::RuleCall_procedure);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(305);
    procedure_name();
    setState(306);
    match(ExprParser::LPAREN);
    setState(308);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::PLUSOP)
      | (1ULL << ExprParser::MINUSOP)
      | (1ULL << ExprParser::LPAREN))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & ((1ULL << (ExprParser::NOT - 67))
      | (1ULL << (ExprParser::IDENTIFIER - 67))
      | (1ULL << (ExprParser::INTEGER - 67))
      | (1ULL << (ExprParser::REAL - 67))
      | (1ULL << (ExprParser::CHARACTER - 67))
      | (1ULL << (ExprParser::STRING - 67)))) != 0)) {
      setState(307);
      argument_list();
    }
    setState(310);
    match(ExprParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Procedure_nameContext ------------------------------------------------------------------

ExprParser::Procedure_nameContext::Procedure_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Procedure_nameContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}


size_t ExprParser::Procedure_nameContext::getRuleIndex() const {
  return ExprParser::RuleProcedure_name;
}


antlrcpp::Any ExprParser::Procedure_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitProcedure_name(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Procedure_nameContext* ExprParser::procedure_name() {
  Procedure_nameContext *_localctx = _tracker.createInstance<Procedure_nameContext>(_ctx, getState());
  enterRule(_localctx, 52, ExprParser::RuleProcedure_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(312);
    match(ExprParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Call_functionContext ------------------------------------------------------------------

ExprParser::Call_functionContext::Call_functionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Function_nameContext* ExprParser::Call_functionContext::function_name() {
  return getRuleContext<ExprParser::Function_nameContext>(0);
}

tree::TerminalNode* ExprParser::Call_functionContext::LPAREN() {
  return getToken(ExprParser::LPAREN, 0);
}

tree::TerminalNode* ExprParser::Call_functionContext::RPAREN() {
  return getToken(ExprParser::RPAREN, 0);
}

ExprParser::Argument_listContext* ExprParser::Call_functionContext::argument_list() {
  return getRuleContext<ExprParser::Argument_listContext>(0);
}


size_t ExprParser::Call_functionContext::getRuleIndex() const {
  return ExprParser::RuleCall_function;
}


antlrcpp::Any ExprParser::Call_functionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitCall_function(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Call_functionContext* ExprParser::call_function() {
  Call_functionContext *_localctx = _tracker.createInstance<Call_functionContext>(_ctx, getState());
  enterRule(_localctx, 54, ExprParser::RuleCall_function);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(314);
    function_name();
    setState(315);
    match(ExprParser::LPAREN);
    setState(317);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::PLUSOP)
      | (1ULL << ExprParser::MINUSOP)
      | (1ULL << ExprParser::LPAREN))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & ((1ULL << (ExprParser::NOT - 67))
      | (1ULL << (ExprParser::IDENTIFIER - 67))
      | (1ULL << (ExprParser::INTEGER - 67))
      | (1ULL << (ExprParser::REAL - 67))
      | (1ULL << (ExprParser::CHARACTER - 67))
      | (1ULL << (ExprParser::STRING - 67)))) != 0)) {
      setState(316);
      argument_list();
    }
    setState(319);
    match(ExprParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_nameContext ------------------------------------------------------------------

ExprParser::Function_nameContext::Function_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Function_nameContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}


size_t ExprParser::Function_nameContext::getRuleIndex() const {
  return ExprParser::RuleFunction_name;
}


antlrcpp::Any ExprParser::Function_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitFunction_name(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Function_nameContext* ExprParser::function_name() {
  Function_nameContext *_localctx = _tracker.createInstance<Function_nameContext>(_ctx, getState());
  enterRule(_localctx, 56, ExprParser::RuleFunction_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(321);
    match(ExprParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Argument_listContext ------------------------------------------------------------------

ExprParser::Argument_listContext::Argument_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::ArgumentContext *> ExprParser::Argument_listContext::argument() {
  return getRuleContexts<ExprParser::ArgumentContext>();
}

ExprParser::ArgumentContext* ExprParser::Argument_listContext::argument(size_t i) {
  return getRuleContext<ExprParser::ArgumentContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::Argument_listContext::COMMA() {
  return getTokens(ExprParser::COMMA);
}

tree::TerminalNode* ExprParser::Argument_listContext::COMMA(size_t i) {
  return getToken(ExprParser::COMMA, i);
}


size_t ExprParser::Argument_listContext::getRuleIndex() const {
  return ExprParser::RuleArgument_list;
}


antlrcpp::Any ExprParser::Argument_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitArgument_list(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Argument_listContext* ExprParser::argument_list() {
  Argument_listContext *_localctx = _tracker.createInstance<Argument_listContext>(_ctx, getState());
  enterRule(_localctx, 58, ExprParser::RuleArgument_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(323);
    argument();
    setState(328);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::COMMA) {
      setState(324);
      match(ExprParser::COMMA);
      setState(325);
      argument();
      setState(330);
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

//----------------- ArgumentContext ------------------------------------------------------------------

ExprParser::ArgumentContext::ArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::ExpressionContext* ExprParser::ArgumentContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}


size_t ExprParser::ArgumentContext::getRuleIndex() const {
  return ExprParser::RuleArgument;
}


antlrcpp::Any ExprParser::ArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitArgument(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ArgumentContext* ExprParser::argument() {
  ArgumentContext *_localctx = _tracker.createInstance<ArgumentContext>(_ctx, getState());
  enterRule(_localctx, 60, ExprParser::RuleArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(331);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Data_typeContext ------------------------------------------------------------------

ExprParser::Data_typeContext::Data_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Type_nameContext* ExprParser::Data_typeContext::type_name() {
  return getRuleContext<ExprParser::Type_nameContext>(0);
}

ExprParser::Array_typeContext* ExprParser::Data_typeContext::array_type() {
  return getRuleContext<ExprParser::Array_typeContext>(0);
}

ExprParser::Record_typeContext* ExprParser::Data_typeContext::record_type() {
  return getRuleContext<ExprParser::Record_typeContext>(0);
}


size_t ExprParser::Data_typeContext::getRuleIndex() const {
  return ExprParser::RuleData_type;
}


antlrcpp::Any ExprParser::Data_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitData_type(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Data_typeContext* ExprParser::data_type() {
  Data_typeContext *_localctx = _tracker.createInstance<Data_typeContext>(_ctx, getState());
  enterRule(_localctx, 62, ExprParser::RuleData_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(336);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(333);
        type_name();
        break;
      }

      case ExprParser::ARRAY: {
        enterOuterAlt(_localctx, 2);
        setState(334);
        array_type();
        break;
      }

      case ExprParser::RECORD: {
        enterOuterAlt(_localctx, 3);
        setState(335);
        record_type();
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

//----------------- Type_nameContext ------------------------------------------------------------------

ExprParser::Type_nameContext::Type_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Type_nameContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}


size_t ExprParser::Type_nameContext::getRuleIndex() const {
  return ExprParser::RuleType_name;
}


antlrcpp::Any ExprParser::Type_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitType_name(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Type_nameContext* ExprParser::type_name() {
  Type_nameContext *_localctx = _tracker.createInstance<Type_nameContext>(_ctx, getState());
  enterRule(_localctx, 64, ExprParser::RuleType_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(338);
    match(ExprParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Array_typeContext ------------------------------------------------------------------

ExprParser::Array_typeContext::Array_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Array_typeContext::ARRAY() {
  return getToken(ExprParser::ARRAY, 0);
}

tree::TerminalNode* ExprParser::Array_typeContext::LBRACE() {
  return getToken(ExprParser::LBRACE, 0);
}

ExprParser::Array_declarationContext* ExprParser::Array_typeContext::array_declaration() {
  return getRuleContext<ExprParser::Array_declarationContext>(0);
}

tree::TerminalNode* ExprParser::Array_typeContext::RBRACE() {
  return getToken(ExprParser::RBRACE, 0);
}

tree::TerminalNode* ExprParser::Array_typeContext::OF() {
  return getToken(ExprParser::OF, 0);
}

ExprParser::Data_typeContext* ExprParser::Array_typeContext::data_type() {
  return getRuleContext<ExprParser::Data_typeContext>(0);
}


size_t ExprParser::Array_typeContext::getRuleIndex() const {
  return ExprParser::RuleArray_type;
}


antlrcpp::Any ExprParser::Array_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitArray_type(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Array_typeContext* ExprParser::array_type() {
  Array_typeContext *_localctx = _tracker.createInstance<Array_typeContext>(_ctx, getState());
  enterRule(_localctx, 66, ExprParser::RuleArray_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(340);
    match(ExprParser::ARRAY);
    setState(341);
    match(ExprParser::LBRACE);
    setState(342);
    array_declaration();
    setState(343);
    match(ExprParser::RBRACE);
    setState(344);
    match(ExprParser::OF);
    setState(345);
    data_type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Array_declarationContext ------------------------------------------------------------------

ExprParser::Array_declarationContext::Array_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ExprParser::Array_declarationContext::INTEGER() {
  return getTokens(ExprParser::INTEGER);
}

tree::TerminalNode* ExprParser::Array_declarationContext::INTEGER(size_t i) {
  return getToken(ExprParser::INTEGER, i);
}

tree::TerminalNode* ExprParser::Array_declarationContext::DOTDOT() {
  return getToken(ExprParser::DOTDOT, 0);
}


size_t ExprParser::Array_declarationContext::getRuleIndex() const {
  return ExprParser::RuleArray_declaration;
}


antlrcpp::Any ExprParser::Array_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitArray_declaration(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Array_declarationContext* ExprParser::array_declaration() {
  Array_declarationContext *_localctx = _tracker.createInstance<Array_declarationContext>(_ctx, getState());
  enterRule(_localctx, 68, ExprParser::RuleArray_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(347);
    match(ExprParser::INTEGER);
    setState(348);
    match(ExprParser::DOTDOT);
    setState(349);
    match(ExprParser::INTEGER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Record_typeContext ------------------------------------------------------------------

ExprParser::Record_typeContext::Record_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Record_typeContext::RECORD() {
  return getToken(ExprParser::RECORD, 0);
}

ExprParser::Var_declarationContext* ExprParser::Record_typeContext::var_declaration() {
  return getRuleContext<ExprParser::Var_declarationContext>(0);
}

tree::TerminalNode* ExprParser::Record_typeContext::END() {
  return getToken(ExprParser::END, 0);
}

tree::TerminalNode* ExprParser::Record_typeContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
}


size_t ExprParser::Record_typeContext::getRuleIndex() const {
  return ExprParser::RuleRecord_type;
}


antlrcpp::Any ExprParser::Record_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitRecord_type(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Record_typeContext* ExprParser::record_type() {
  Record_typeContext *_localctx = _tracker.createInstance<Record_typeContext>(_ctx, getState());
  enterRule(_localctx, 70, ExprParser::RuleRecord_type);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(351);
    match(ExprParser::RECORD);
    setState(352);
    var_declaration();
    setState(354);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::SEMICOLON) {
      setState(353);
      match(ExprParser::SEMICOLON);
    }
    setState(356);
    match(ExprParser::END);
   
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
  enterRule(_localctx, 72, ExprParser::RuleCompound_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(358);
    match(ExprParser::BEGIN);
    setState(359);
    statement_list();
    setState(360);
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
  enterRule(_localctx, 74, ExprParser::RuleStatement_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(362);
    statement();
    setState(367);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(363);
        match(ExprParser::SEMICOLON);
        setState(364);
        statement(); 
      }
      setState(369);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    }
    setState(371);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::SEMICOLON) {
      setState(370);
      match(ExprParser::SEMICOLON);
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

ExprParser::Assign_statementContext* ExprParser::StatementContext::assign_statement() {
  return getRuleContext<ExprParser::Assign_statementContext>(0);
}

ExprParser::For_statementContext* ExprParser::StatementContext::for_statement() {
  return getRuleContext<ExprParser::For_statementContext>(0);
}

ExprParser::While_statementContext* ExprParser::StatementContext::while_statement() {
  return getRuleContext<ExprParser::While_statementContext>(0);
}

ExprParser::Repeat_statementContext* ExprParser::StatementContext::repeat_statement() {
  return getRuleContext<ExprParser::Repeat_statementContext>(0);
}

ExprParser::Case_statmentContext* ExprParser::StatementContext::case_statment() {
  return getRuleContext<ExprParser::Case_statmentContext>(0);
}

ExprParser::If_statementContext* ExprParser::StatementContext::if_statement() {
  return getRuleContext<ExprParser::If_statementContext>(0);
}

ExprParser::Write_statementContext* ExprParser::StatementContext::write_statement() {
  return getRuleContext<ExprParser::Write_statementContext>(0);
}

ExprParser::Writeln_statementContext* ExprParser::StatementContext::writeln_statement() {
  return getRuleContext<ExprParser::Writeln_statementContext>(0);
}

ExprParser::Call_procedureContext* ExprParser::StatementContext::call_procedure() {
  return getRuleContext<ExprParser::Call_procedureContext>(0);
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
  enterRule(_localctx, 76, ExprParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(383);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(373);
      compound_statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(374);
      assign_statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(375);
      for_statement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(376);
      while_statement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(377);
      repeat_statement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(378);
      case_statment();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(379);
      if_statement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(380);
      write_statement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(381);
      writeln_statement();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(382);
      call_procedure();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Empty_statementContext ------------------------------------------------------------------

ExprParser::Empty_statementContext::Empty_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::Empty_statementContext::getRuleIndex() const {
  return ExprParser::RuleEmpty_statement;
}


antlrcpp::Any ExprParser::Empty_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitEmpty_statement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Empty_statementContext* ExprParser::empty_statement() {
  Empty_statementContext *_localctx = _tracker.createInstance<Empty_statementContext>(_ctx, getState());
  enterRule(_localctx, 78, ExprParser::RuleEmpty_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);

   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assign_statementContext ------------------------------------------------------------------

ExprParser::Assign_statementContext::Assign_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::LhsContext* ExprParser::Assign_statementContext::lhs() {
  return getRuleContext<ExprParser::LhsContext>(0);
}

tree::TerminalNode* ExprParser::Assign_statementContext::ASSIGN() {
  return getToken(ExprParser::ASSIGN, 0);
}

ExprParser::RhsContext* ExprParser::Assign_statementContext::rhs() {
  return getRuleContext<ExprParser::RhsContext>(0);
}


size_t ExprParser::Assign_statementContext::getRuleIndex() const {
  return ExprParser::RuleAssign_statement;
}


antlrcpp::Any ExprParser::Assign_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitAssign_statement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Assign_statementContext* ExprParser::assign_statement() {
  Assign_statementContext *_localctx = _tracker.createInstance<Assign_statementContext>(_ctx, getState());
  enterRule(_localctx, 80, ExprParser::RuleAssign_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(387);
    lhs();
    setState(388);
    match(ExprParser::ASSIGN);
    setState(389);
    rhs();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LhsContext ------------------------------------------------------------------

ExprParser::LhsContext::LhsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::VariableContext* ExprParser::LhsContext::variable() {
  return getRuleContext<ExprParser::VariableContext>(0);
}


size_t ExprParser::LhsContext::getRuleIndex() const {
  return ExprParser::RuleLhs;
}


antlrcpp::Any ExprParser::LhsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitLhs(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::LhsContext* ExprParser::lhs() {
  LhsContext *_localctx = _tracker.createInstance<LhsContext>(_ctx, getState());
  enterRule(_localctx, 82, ExprParser::RuleLhs);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(391);
    variable();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RhsContext ------------------------------------------------------------------

ExprParser::RhsContext::RhsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::ExpressionContext* ExprParser::RhsContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}


size_t ExprParser::RhsContext::getRuleIndex() const {
  return ExprParser::RuleRhs;
}


antlrcpp::Any ExprParser::RhsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitRhs(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::RhsContext* ExprParser::rhs() {
  RhsContext *_localctx = _tracker.createInstance<RhsContext>(_ctx, getState());
  enterRule(_localctx, 84, ExprParser::RuleRhs);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(393);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

ExprParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::VariableContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}


size_t ExprParser::VariableContext::getRuleIndex() const {
  return ExprParser::RuleVariable;
}


antlrcpp::Any ExprParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::VariableContext* ExprParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 86, ExprParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(395);
    match(ExprParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

ExprParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::Single_expressionContext *> ExprParser::ExpressionContext::single_expression() {
  return getRuleContexts<ExprParser::Single_expressionContext>();
}

ExprParser::Single_expressionContext* ExprParser::ExpressionContext::single_expression(size_t i) {
  return getRuleContext<ExprParser::Single_expressionContext>(i);
}

std::vector<ExprParser::Relation_operatorContext *> ExprParser::ExpressionContext::relation_operator() {
  return getRuleContexts<ExprParser::Relation_operatorContext>();
}

ExprParser::Relation_operatorContext* ExprParser::ExpressionContext::relation_operator(size_t i) {
  return getRuleContext<ExprParser::Relation_operatorContext>(i);
}


size_t ExprParser::ExpressionContext::getRuleIndex() const {
  return ExprParser::RuleExpression;
}


antlrcpp::Any ExprParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ExpressionContext* ExprParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 88, ExprParser::RuleExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(397);
    single_expression();
    setState(403);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::EQUAL)
      | (1ULL << ExprParser::LT)
      | (1ULL << ExprParser::GT)
      | (1ULL << ExprParser::NE)
      | (1ULL << ExprParser::LTEQ)
      | (1ULL << ExprParser::GTEQ))) != 0)) {
      setState(398);
      relation_operator();
      setState(399);
      single_expression();
      setState(405);
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

//----------------- Single_expressionContext ------------------------------------------------------------------

ExprParser::Single_expressionContext::Single_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::Term_expressionContext *> ExprParser::Single_expressionContext::term_expression() {
  return getRuleContexts<ExprParser::Term_expressionContext>();
}

ExprParser::Term_expressionContext* ExprParser::Single_expressionContext::term_expression(size_t i) {
  return getRuleContext<ExprParser::Term_expressionContext>(i);
}

ExprParser::SignContext* ExprParser::Single_expressionContext::sign() {
  return getRuleContext<ExprParser::SignContext>(0);
}

std::vector<ExprParser::Expression_operatorContext *> ExprParser::Single_expressionContext::expression_operator() {
  return getRuleContexts<ExprParser::Expression_operatorContext>();
}

ExprParser::Expression_operatorContext* ExprParser::Single_expressionContext::expression_operator(size_t i) {
  return getRuleContext<ExprParser::Expression_operatorContext>(i);
}


size_t ExprParser::Single_expressionContext::getRuleIndex() const {
  return ExprParser::RuleSingle_expression;
}


antlrcpp::Any ExprParser::Single_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitSingle_expression(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Single_expressionContext* ExprParser::single_expression() {
  Single_expressionContext *_localctx = _tracker.createInstance<Single_expressionContext>(_ctx, getState());
  enterRule(_localctx, 90, ExprParser::RuleSingle_expression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(407);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      setState(406);
      sign();
      break;
    }

    }
    setState(409);
    term_expression();
    setState(415);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::PLUSOP

    || _la == ExprParser::MINUSOP || _la == ExprParser::OR) {
      setState(410);
      expression_operator();
      setState(411);
      term_expression();
      setState(417);
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

//----------------- Term_expressionContext ------------------------------------------------------------------

ExprParser::Term_expressionContext::Term_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::FactorContext *> ExprParser::Term_expressionContext::factor() {
  return getRuleContexts<ExprParser::FactorContext>();
}

ExprParser::FactorContext* ExprParser::Term_expressionContext::factor(size_t i) {
  return getRuleContext<ExprParser::FactorContext>(i);
}

std::vector<ExprParser::Term_operatorContext *> ExprParser::Term_expressionContext::term_operator() {
  return getRuleContexts<ExprParser::Term_operatorContext>();
}

ExprParser::Term_operatorContext* ExprParser::Term_expressionContext::term_operator(size_t i) {
  return getRuleContext<ExprParser::Term_operatorContext>(i);
}


size_t ExprParser::Term_expressionContext::getRuleIndex() const {
  return ExprParser::RuleTerm_expression;
}


antlrcpp::Any ExprParser::Term_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitTerm_expression(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Term_expressionContext* ExprParser::term_expression() {
  Term_expressionContext *_localctx = _tracker.createInstance<Term_expressionContext>(_ctx, getState());
  enterRule(_localctx, 92, ExprParser::RuleTerm_expression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(418);
    factor();
    setState(424);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 3) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 3)) & ((1ULL << (ExprParser::MULTOP - 3))
      | (1ULL << (ExprParser::DIVOP - 3))
      | (1ULL << (ExprParser::DIV - 3))
      | (1ULL << (ExprParser::MOD - 3))
      | (1ULL << (ExprParser::AND - 3)))) != 0)) {
      setState(419);
      term_operator();
      setState(420);
      factor();
      setState(426);
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

//----------------- FactorContext ------------------------------------------------------------------

ExprParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::VariableContext* ExprParser::FactorContext::variable() {
  return getRuleContext<ExprParser::VariableContext>(0);
}

ExprParser::NumberContext* ExprParser::FactorContext::number() {
  return getRuleContext<ExprParser::NumberContext>(0);
}

ExprParser::Char_constantContext* ExprParser::FactorContext::char_constant() {
  return getRuleContext<ExprParser::Char_constantContext>(0);
}

ExprParser::String_constantContext* ExprParser::FactorContext::string_constant() {
  return getRuleContext<ExprParser::String_constantContext>(0);
}

tree::TerminalNode* ExprParser::FactorContext::NOT() {
  return getToken(ExprParser::NOT, 0);
}

ExprParser::FactorContext* ExprParser::FactorContext::factor() {
  return getRuleContext<ExprParser::FactorContext>(0);
}

tree::TerminalNode* ExprParser::FactorContext::LPAREN() {
  return getToken(ExprParser::LPAREN, 0);
}

ExprParser::ExpressionContext* ExprParser::FactorContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

tree::TerminalNode* ExprParser::FactorContext::RPAREN() {
  return getToken(ExprParser::RPAREN, 0);
}

ExprParser::Call_functionContext* ExprParser::FactorContext::call_function() {
  return getRuleContext<ExprParser::Call_functionContext>(0);
}


size_t ExprParser::FactorContext::getRuleIndex() const {
  return ExprParser::RuleFactor;
}


antlrcpp::Any ExprParser::FactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitFactor(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::FactorContext* ExprParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 94, ExprParser::RuleFactor);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(438);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(427);
      variable();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(428);
      number();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(429);
      char_constant();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(430);
      string_constant();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(431);
      match(ExprParser::NOT);
      setState(432);
      factor();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(433);
      match(ExprParser::LPAREN);
      setState(434);
      expression();
      setState(435);
      match(ExprParser::RPAREN);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(437);
      call_function();
      break;
    }

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

ExprParser::Assign_statementContext* ExprParser::For_statementContext::assign_statement() {
  return getRuleContext<ExprParser::Assign_statementContext>(0);
}

ExprParser::ExpressionContext* ExprParser::For_statementContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
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
  enterRule(_localctx, 96, ExprParser::RuleFor_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(440);
    match(ExprParser::FOR);
    setState(441);
    assign_statement();
    setState(442);
    _la = _input->LA(1);
    if (!(_la == ExprParser::TO

    || _la == ExprParser::DOWNTO)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(443);
    expression();
    setState(444);
    match(ExprParser::DO);
    setState(445);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_statementContext ------------------------------------------------------------------

ExprParser::While_statementContext::While_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::While_statementContext::WHILE() {
  return getToken(ExprParser::WHILE, 0);
}

ExprParser::ExpressionContext* ExprParser::While_statementContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

tree::TerminalNode* ExprParser::While_statementContext::DO() {
  return getToken(ExprParser::DO, 0);
}

ExprParser::StatementContext* ExprParser::While_statementContext::statement() {
  return getRuleContext<ExprParser::StatementContext>(0);
}


size_t ExprParser::While_statementContext::getRuleIndex() const {
  return ExprParser::RuleWhile_statement;
}


antlrcpp::Any ExprParser::While_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitWhile_statement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::While_statementContext* ExprParser::while_statement() {
  While_statementContext *_localctx = _tracker.createInstance<While_statementContext>(_ctx, getState());
  enterRule(_localctx, 98, ExprParser::RuleWhile_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(447);
    match(ExprParser::WHILE);
    setState(448);
    expression();
    setState(449);
    match(ExprParser::DO);
    setState(450);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Repeat_statementContext ------------------------------------------------------------------

ExprParser::Repeat_statementContext::Repeat_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Repeat_statementContext::REPEAT() {
  return getToken(ExprParser::REPEAT, 0);
}

ExprParser::Statement_listContext* ExprParser::Repeat_statementContext::statement_list() {
  return getRuleContext<ExprParser::Statement_listContext>(0);
}

tree::TerminalNode* ExprParser::Repeat_statementContext::UNTIL() {
  return getToken(ExprParser::UNTIL, 0);
}

ExprParser::ExpressionContext* ExprParser::Repeat_statementContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}


size_t ExprParser::Repeat_statementContext::getRuleIndex() const {
  return ExprParser::RuleRepeat_statement;
}


antlrcpp::Any ExprParser::Repeat_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitRepeat_statement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Repeat_statementContext* ExprParser::repeat_statement() {
  Repeat_statementContext *_localctx = _tracker.createInstance<Repeat_statementContext>(_ctx, getState());
  enterRule(_localctx, 100, ExprParser::RuleRepeat_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(452);
    match(ExprParser::REPEAT);
    setState(453);
    statement_list();
    setState(454);
    match(ExprParser::UNTIL);
    setState(455);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_statementContext ------------------------------------------------------------------

ExprParser::If_statementContext::If_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::If_statementContext::IF() {
  return getToken(ExprParser::IF, 0);
}

ExprParser::ExpressionContext* ExprParser::If_statementContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

tree::TerminalNode* ExprParser::If_statementContext::THEN() {
  return getToken(ExprParser::THEN, 0);
}

ExprParser::True_statementContext* ExprParser::If_statementContext::true_statement() {
  return getRuleContext<ExprParser::True_statementContext>(0);
}

tree::TerminalNode* ExprParser::If_statementContext::ELSE() {
  return getToken(ExprParser::ELSE, 0);
}

ExprParser::False_statmentContext* ExprParser::If_statementContext::false_statment() {
  return getRuleContext<ExprParser::False_statmentContext>(0);
}


size_t ExprParser::If_statementContext::getRuleIndex() const {
  return ExprParser::RuleIf_statement;
}


antlrcpp::Any ExprParser::If_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitIf_statement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::If_statementContext* ExprParser::if_statement() {
  If_statementContext *_localctx = _tracker.createInstance<If_statementContext>(_ctx, getState());
  enterRule(_localctx, 102, ExprParser::RuleIf_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(457);
    match(ExprParser::IF);
    setState(458);
    expression();
    setState(459);
    match(ExprParser::THEN);
    setState(460);
    true_statement();
    setState(463);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      setState(461);
      match(ExprParser::ELSE);
      setState(462);
      false_statment();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- True_statementContext ------------------------------------------------------------------

ExprParser::True_statementContext::True_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::StatementContext* ExprParser::True_statementContext::statement() {
  return getRuleContext<ExprParser::StatementContext>(0);
}


size_t ExprParser::True_statementContext::getRuleIndex() const {
  return ExprParser::RuleTrue_statement;
}


antlrcpp::Any ExprParser::True_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitTrue_statement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::True_statementContext* ExprParser::true_statement() {
  True_statementContext *_localctx = _tracker.createInstance<True_statementContext>(_ctx, getState());
  enterRule(_localctx, 104, ExprParser::RuleTrue_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(465);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- False_statmentContext ------------------------------------------------------------------

ExprParser::False_statmentContext::False_statmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::StatementContext* ExprParser::False_statmentContext::statement() {
  return getRuleContext<ExprParser::StatementContext>(0);
}


size_t ExprParser::False_statmentContext::getRuleIndex() const {
  return ExprParser::RuleFalse_statment;
}


antlrcpp::Any ExprParser::False_statmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitFalse_statment(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::False_statmentContext* ExprParser::false_statment() {
  False_statmentContext *_localctx = _tracker.createInstance<False_statmentContext>(_ctx, getState());
  enterRule(_localctx, 106, ExprParser::RuleFalse_statment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(467);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Case_statmentContext ------------------------------------------------------------------

ExprParser::Case_statmentContext::Case_statmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Case_statmentContext::CASE() {
  return getToken(ExprParser::CASE, 0);
}

ExprParser::ExpressionContext* ExprParser::Case_statmentContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

tree::TerminalNode* ExprParser::Case_statmentContext::OF() {
  return getToken(ExprParser::OF, 0);
}

ExprParser::Case_branch_listContext* ExprParser::Case_statmentContext::case_branch_list() {
  return getRuleContext<ExprParser::Case_branch_listContext>(0);
}

tree::TerminalNode* ExprParser::Case_statmentContext::END() {
  return getToken(ExprParser::END, 0);
}


size_t ExprParser::Case_statmentContext::getRuleIndex() const {
  return ExprParser::RuleCase_statment;
}


antlrcpp::Any ExprParser::Case_statmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitCase_statment(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Case_statmentContext* ExprParser::case_statment() {
  Case_statmentContext *_localctx = _tracker.createInstance<Case_statmentContext>(_ctx, getState());
  enterRule(_localctx, 108, ExprParser::RuleCase_statment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(469);
    match(ExprParser::CASE);
    setState(470);
    expression();
    setState(471);
    match(ExprParser::OF);
    setState(472);
    case_branch_list();
    setState(473);
    match(ExprParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Case_branch_listContext ------------------------------------------------------------------

ExprParser::Case_branch_listContext::Case_branch_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::Case_branchContext *> ExprParser::Case_branch_listContext::case_branch() {
  return getRuleContexts<ExprParser::Case_branchContext>();
}

ExprParser::Case_branchContext* ExprParser::Case_branch_listContext::case_branch(size_t i) {
  return getRuleContext<ExprParser::Case_branchContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::Case_branch_listContext::SEMICOLON() {
  return getTokens(ExprParser::SEMICOLON);
}

tree::TerminalNode* ExprParser::Case_branch_listContext::SEMICOLON(size_t i) {
  return getToken(ExprParser::SEMICOLON, i);
}


size_t ExprParser::Case_branch_listContext::getRuleIndex() const {
  return ExprParser::RuleCase_branch_list;
}


antlrcpp::Any ExprParser::Case_branch_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitCase_branch_list(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Case_branch_listContext* ExprParser::case_branch_list() {
  Case_branch_listContext *_localctx = _tracker.createInstance<Case_branch_listContext>(_ctx, getState());
  enterRule(_localctx, 110, ExprParser::RuleCase_branch_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(475);
    case_branch();
    setState(480);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(476);
        match(ExprParser::SEMICOLON);
        setState(477);
        case_branch(); 
      }
      setState(482);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    }
    setState(484);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::SEMICOLON) {
      setState(483);
      match(ExprParser::SEMICOLON);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Case_branchContext ------------------------------------------------------------------

ExprParser::Case_branchContext::Case_branchContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Case_constant_listContext* ExprParser::Case_branchContext::case_constant_list() {
  return getRuleContext<ExprParser::Case_constant_listContext>(0);
}

tree::TerminalNode* ExprParser::Case_branchContext::COLON() {
  return getToken(ExprParser::COLON, 0);
}

ExprParser::StatementContext* ExprParser::Case_branchContext::statement() {
  return getRuleContext<ExprParser::StatementContext>(0);
}


size_t ExprParser::Case_branchContext::getRuleIndex() const {
  return ExprParser::RuleCase_branch;
}


antlrcpp::Any ExprParser::Case_branchContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitCase_branch(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Case_branchContext* ExprParser::case_branch() {
  Case_branchContext *_localctx = _tracker.createInstance<Case_branchContext>(_ctx, getState());
  enterRule(_localctx, 112, ExprParser::RuleCase_branch);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(486);
    case_constant_list();
    setState(487);
    match(ExprParser::COLON);
    setState(488);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Case_constant_listContext ------------------------------------------------------------------

ExprParser::Case_constant_listContext::Case_constant_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::Case_constantContext *> ExprParser::Case_constant_listContext::case_constant() {
  return getRuleContexts<ExprParser::Case_constantContext>();
}

ExprParser::Case_constantContext* ExprParser::Case_constant_listContext::case_constant(size_t i) {
  return getRuleContext<ExprParser::Case_constantContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::Case_constant_listContext::COMMA() {
  return getTokens(ExprParser::COMMA);
}

tree::TerminalNode* ExprParser::Case_constant_listContext::COMMA(size_t i) {
  return getToken(ExprParser::COMMA, i);
}


size_t ExprParser::Case_constant_listContext::getRuleIndex() const {
  return ExprParser::RuleCase_constant_list;
}


antlrcpp::Any ExprParser::Case_constant_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitCase_constant_list(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Case_constant_listContext* ExprParser::case_constant_list() {
  Case_constant_listContext *_localctx = _tracker.createInstance<Case_constant_listContext>(_ctx, getState());
  enterRule(_localctx, 114, ExprParser::RuleCase_constant_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(490);
    case_constant();
    setState(495);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::COMMA) {
      setState(491);
      match(ExprParser::COMMA);
      setState(492);
      case_constant();
      setState(497);
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

//----------------- Case_constantContext ------------------------------------------------------------------

ExprParser::Case_constantContext::Case_constantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::ConstantContext* ExprParser::Case_constantContext::constant() {
  return getRuleContext<ExprParser::ConstantContext>(0);
}


size_t ExprParser::Case_constantContext::getRuleIndex() const {
  return ExprParser::RuleCase_constant;
}


antlrcpp::Any ExprParser::Case_constantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitCase_constant(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Case_constantContext* ExprParser::case_constant() {
  Case_constantContext *_localctx = _tracker.createInstance<Case_constantContext>(_ctx, getState());
  enterRule(_localctx, 116, ExprParser::RuleCase_constant);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(498);
    constant();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Write_statementContext ------------------------------------------------------------------

ExprParser::Write_statementContext::Write_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Write_statementContext::WRITE() {
  return getToken(ExprParser::WRITE, 0);
}

ExprParser::Write_argument_listContext* ExprParser::Write_statementContext::write_argument_list() {
  return getRuleContext<ExprParser::Write_argument_listContext>(0);
}


size_t ExprParser::Write_statementContext::getRuleIndex() const {
  return ExprParser::RuleWrite_statement;
}


antlrcpp::Any ExprParser::Write_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitWrite_statement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Write_statementContext* ExprParser::write_statement() {
  Write_statementContext *_localctx = _tracker.createInstance<Write_statementContext>(_ctx, getState());
  enterRule(_localctx, 118, ExprParser::RuleWrite_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(500);
    match(ExprParser::WRITE);
    setState(501);
    write_argument_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Writeln_statementContext ------------------------------------------------------------------

ExprParser::Writeln_statementContext::Writeln_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Writeln_statementContext::WRITELN() {
  return getToken(ExprParser::WRITELN, 0);
}

ExprParser::Write_argument_listContext* ExprParser::Writeln_statementContext::write_argument_list() {
  return getRuleContext<ExprParser::Write_argument_listContext>(0);
}


size_t ExprParser::Writeln_statementContext::getRuleIndex() const {
  return ExprParser::RuleWriteln_statement;
}


antlrcpp::Any ExprParser::Writeln_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitWriteln_statement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Writeln_statementContext* ExprParser::writeln_statement() {
  Writeln_statementContext *_localctx = _tracker.createInstance<Writeln_statementContext>(_ctx, getState());
  enterRule(_localctx, 120, ExprParser::RuleWriteln_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(503);
    match(ExprParser::WRITELN);
    setState(505);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::LPAREN) {
      setState(504);
      write_argument_list();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Write_argument_listContext ------------------------------------------------------------------

ExprParser::Write_argument_listContext::Write_argument_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Write_argument_listContext::LPAREN() {
  return getToken(ExprParser::LPAREN, 0);
}

std::vector<ExprParser::Write_argumentContext *> ExprParser::Write_argument_listContext::write_argument() {
  return getRuleContexts<ExprParser::Write_argumentContext>();
}

ExprParser::Write_argumentContext* ExprParser::Write_argument_listContext::write_argument(size_t i) {
  return getRuleContext<ExprParser::Write_argumentContext>(i);
}

tree::TerminalNode* ExprParser::Write_argument_listContext::RPAREN() {
  return getToken(ExprParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> ExprParser::Write_argument_listContext::COMMA() {
  return getTokens(ExprParser::COMMA);
}

tree::TerminalNode* ExprParser::Write_argument_listContext::COMMA(size_t i) {
  return getToken(ExprParser::COMMA, i);
}


size_t ExprParser::Write_argument_listContext::getRuleIndex() const {
  return ExprParser::RuleWrite_argument_list;
}


antlrcpp::Any ExprParser::Write_argument_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitWrite_argument_list(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Write_argument_listContext* ExprParser::write_argument_list() {
  Write_argument_listContext *_localctx = _tracker.createInstance<Write_argument_listContext>(_ctx, getState());
  enterRule(_localctx, 122, ExprParser::RuleWrite_argument_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(507);
    match(ExprParser::LPAREN);
    setState(508);
    write_argument();
    setState(513);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::COMMA) {
      setState(509);
      match(ExprParser::COMMA);
      setState(510);
      write_argument();
      setState(515);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(516);
    match(ExprParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Write_argumentContext ------------------------------------------------------------------

ExprParser::Write_argumentContext::Write_argumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::ExpressionContext* ExprParser::Write_argumentContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

tree::TerminalNode* ExprParser::Write_argumentContext::COLON() {
  return getToken(ExprParser::COLON, 0);
}

ExprParser::WidthContext* ExprParser::Write_argumentContext::width() {
  return getRuleContext<ExprParser::WidthContext>(0);
}


size_t ExprParser::Write_argumentContext::getRuleIndex() const {
  return ExprParser::RuleWrite_argument;
}


antlrcpp::Any ExprParser::Write_argumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitWrite_argument(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Write_argumentContext* ExprParser::write_argument() {
  Write_argumentContext *_localctx = _tracker.createInstance<Write_argumentContext>(_ctx, getState());
  enterRule(_localctx, 124, ExprParser::RuleWrite_argument);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(518);
    expression();
    setState(521);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::COLON) {
      setState(519);
      match(ExprParser::COLON);
      setState(520);
      width();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WidthContext ------------------------------------------------------------------

ExprParser::WidthContext::WidthContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::WidthContext::INTEGER() {
  return getToken(ExprParser::INTEGER, 0);
}

tree::TerminalNode* ExprParser::WidthContext::COLON() {
  return getToken(ExprParser::COLON, 0);
}

ExprParser::Decimal_placeContext* ExprParser::WidthContext::decimal_place() {
  return getRuleContext<ExprParser::Decimal_placeContext>(0);
}


size_t ExprParser::WidthContext::getRuleIndex() const {
  return ExprParser::RuleWidth;
}


antlrcpp::Any ExprParser::WidthContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitWidth(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::WidthContext* ExprParser::width() {
  WidthContext *_localctx = _tracker.createInstance<WidthContext>(_ctx, getState());
  enterRule(_localctx, 126, ExprParser::RuleWidth);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(523);
    match(ExprParser::INTEGER);
    setState(526);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::COLON) {
      setState(524);
      match(ExprParser::COLON);
      setState(525);
      decimal_place();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Decimal_placeContext ------------------------------------------------------------------

ExprParser::Decimal_placeContext::Decimal_placeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Decimal_placeContext::INTEGER() {
  return getToken(ExprParser::INTEGER, 0);
}


size_t ExprParser::Decimal_placeContext::getRuleIndex() const {
  return ExprParser::RuleDecimal_place;
}


antlrcpp::Any ExprParser::Decimal_placeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDecimal_place(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Decimal_placeContext* ExprParser::decimal_place() {
  Decimal_placeContext *_localctx = _tracker.createInstance<Decimal_placeContext>(_ctx, getState());
  enterRule(_localctx, 128, ExprParser::RuleDecimal_place);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(528);
    match(ExprParser::INTEGER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignContext ------------------------------------------------------------------

ExprParser::SignContext::SignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::SignContext::MINUSOP() {
  return getToken(ExprParser::MINUSOP, 0);
}

tree::TerminalNode* ExprParser::SignContext::PLUSOP() {
  return getToken(ExprParser::PLUSOP, 0);
}


size_t ExprParser::SignContext::getRuleIndex() const {
  return ExprParser::RuleSign;
}


antlrcpp::Any ExprParser::SignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitSign(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::SignContext* ExprParser::sign() {
  SignContext *_localctx = _tracker.createInstance<SignContext>(_ctx, getState());
  enterRule(_localctx, 130, ExprParser::RuleSign);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(530);
    _la = _input->LA(1);
    if (!(_la == ExprParser::PLUSOP

    || _la == ExprParser::MINUSOP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Relation_operatorContext ------------------------------------------------------------------

ExprParser::Relation_operatorContext::Relation_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Relation_operatorContext::EQUAL() {
  return getToken(ExprParser::EQUAL, 0);
}

tree::TerminalNode* ExprParser::Relation_operatorContext::NE() {
  return getToken(ExprParser::NE, 0);
}

tree::TerminalNode* ExprParser::Relation_operatorContext::LT() {
  return getToken(ExprParser::LT, 0);
}

tree::TerminalNode* ExprParser::Relation_operatorContext::GT() {
  return getToken(ExprParser::GT, 0);
}

tree::TerminalNode* ExprParser::Relation_operatorContext::LTEQ() {
  return getToken(ExprParser::LTEQ, 0);
}

tree::TerminalNode* ExprParser::Relation_operatorContext::GTEQ() {
  return getToken(ExprParser::GTEQ, 0);
}


size_t ExprParser::Relation_operatorContext::getRuleIndex() const {
  return ExprParser::RuleRelation_operator;
}


antlrcpp::Any ExprParser::Relation_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitRelation_operator(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Relation_operatorContext* ExprParser::relation_operator() {
  Relation_operatorContext *_localctx = _tracker.createInstance<Relation_operatorContext>(_ctx, getState());
  enterRule(_localctx, 132, ExprParser::RuleRelation_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(532);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::EQUAL)
      | (1ULL << ExprParser::LT)
      | (1ULL << ExprParser::GT)
      | (1ULL << ExprParser::NE)
      | (1ULL << ExprParser::LTEQ)
      | (1ULL << ExprParser::GTEQ))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expression_operatorContext ------------------------------------------------------------------

ExprParser::Expression_operatorContext::Expression_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Expression_operatorContext::PLUSOP() {
  return getToken(ExprParser::PLUSOP, 0);
}

tree::TerminalNode* ExprParser::Expression_operatorContext::MINUSOP() {
  return getToken(ExprParser::MINUSOP, 0);
}

tree::TerminalNode* ExprParser::Expression_operatorContext::OR() {
  return getToken(ExprParser::OR, 0);
}


size_t ExprParser::Expression_operatorContext::getRuleIndex() const {
  return ExprParser::RuleExpression_operator;
}


antlrcpp::Any ExprParser::Expression_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitExpression_operator(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Expression_operatorContext* ExprParser::expression_operator() {
  Expression_operatorContext *_localctx = _tracker.createInstance<Expression_operatorContext>(_ctx, getState());
  enterRule(_localctx, 134, ExprParser::RuleExpression_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(534);
    _la = _input->LA(1);
    if (!(_la == ExprParser::PLUSOP

    || _la == ExprParser::MINUSOP || _la == ExprParser::OR)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Term_operatorContext ------------------------------------------------------------------

ExprParser::Term_operatorContext::Term_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Term_operatorContext::MULTOP() {
  return getToken(ExprParser::MULTOP, 0);
}

tree::TerminalNode* ExprParser::Term_operatorContext::DIVOP() {
  return getToken(ExprParser::DIVOP, 0);
}

tree::TerminalNode* ExprParser::Term_operatorContext::DIV() {
  return getToken(ExprParser::DIV, 0);
}

tree::TerminalNode* ExprParser::Term_operatorContext::MOD() {
  return getToken(ExprParser::MOD, 0);
}

tree::TerminalNode* ExprParser::Term_operatorContext::AND() {
  return getToken(ExprParser::AND, 0);
}


size_t ExprParser::Term_operatorContext::getRuleIndex() const {
  return ExprParser::RuleTerm_operator;
}


antlrcpp::Any ExprParser::Term_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitTerm_operator(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Term_operatorContext* ExprParser::term_operator() {
  Term_operatorContext *_localctx = _tracker.createInstance<Term_operatorContext>(_ctx, getState());
  enterRule(_localctx, 136, ExprParser::RuleTerm_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(536);
    _la = _input->LA(1);
    if (!(((((_la - 3) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 3)) & ((1ULL << (ExprParser::MULTOP - 3))
      | (1ULL << (ExprParser::DIVOP - 3))
      | (1ULL << (ExprParser::DIV - 3))
      | (1ULL << (ExprParser::MOD - 3))
      | (1ULL << (ExprParser::AND - 3)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

ExprParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Unsign_numberContext* ExprParser::NumberContext::unsign_number() {
  return getRuleContext<ExprParser::Unsign_numberContext>(0);
}

ExprParser::SignContext* ExprParser::NumberContext::sign() {
  return getRuleContext<ExprParser::SignContext>(0);
}


size_t ExprParser::NumberContext::getRuleIndex() const {
  return ExprParser::RuleNumber;
}


antlrcpp::Any ExprParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::NumberContext* ExprParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 138, ExprParser::RuleNumber);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(539);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::PLUSOP

    || _la == ExprParser::MINUSOP) {
      setState(538);
      sign();
    }
    setState(541);
    unsign_number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unsign_numberContext ------------------------------------------------------------------

ExprParser::Unsign_numberContext::Unsign_numberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Unsign_numberContext::INTEGER() {
  return getToken(ExprParser::INTEGER, 0);
}

tree::TerminalNode* ExprParser::Unsign_numberContext::REAL() {
  return getToken(ExprParser::REAL, 0);
}


size_t ExprParser::Unsign_numberContext::getRuleIndex() const {
  return ExprParser::RuleUnsign_number;
}


antlrcpp::Any ExprParser::Unsign_numberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitUnsign_number(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Unsign_numberContext* ExprParser::unsign_number() {
  Unsign_numberContext *_localctx = _tracker.createInstance<Unsign_numberContext>(_ctx, getState());
  enterRule(_localctx, 140, ExprParser::RuleUnsign_number);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(543);
    _la = _input->LA(1);
    if (!(_la == ExprParser::INTEGER

    || _la == ExprParser::REAL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Char_constantContext ------------------------------------------------------------------

ExprParser::Char_constantContext::Char_constantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Char_constantContext::CHARACTER() {
  return getToken(ExprParser::CHARACTER, 0);
}


size_t ExprParser::Char_constantContext::getRuleIndex() const {
  return ExprParser::RuleChar_constant;
}


antlrcpp::Any ExprParser::Char_constantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitChar_constant(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Char_constantContext* ExprParser::char_constant() {
  Char_constantContext *_localctx = _tracker.createInstance<Char_constantContext>(_ctx, getState());
  enterRule(_localctx, 142, ExprParser::RuleChar_constant);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(545);
    match(ExprParser::CHARACTER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- String_constantContext ------------------------------------------------------------------

ExprParser::String_constantContext::String_constantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::String_constantContext::STRING() {
  return getToken(ExprParser::STRING, 0);
}


size_t ExprParser::String_constantContext::getRuleIndex() const {
  return ExprParser::RuleString_constant;
}


antlrcpp::Any ExprParser::String_constantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitString_constant(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::String_constantContext* ExprParser::string_constant() {
  String_constantContext *_localctx = _tracker.createInstance<String_constantContext>(_ctx, getState());
  enterRule(_localctx, 144, ExprParser::RuleString_constant);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(547);
    match(ExprParser::STRING);
   
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
  "program", "program_header", "program_name", "program_body", "program_declaration", 
  "constants_section", "const_list", "const_name", "constant", "types_section", 
  "type_declaration", "type_identifier", "variable_section", "var_declaration", 
  "var_list", "var_name", "routine_section", "routine_declaration", "procedure", 
  "function", "routine_name", "parameter_list", "parameter_declaration", 
  "parameter_name_list", "parameter_name", "call_procedure", "procedure_name", 
  "call_function", "function_name", "argument_list", "argument", "data_type", 
  "type_name", "array_type", "array_declaration", "record_type", "compound_statement", 
  "statement_list", "statement", "empty_statement", "assign_statement", 
  "lhs", "rhs", "variable", "expression", "single_expression", "term_expression", 
  "factor", "for_statement", "while_statement", "repeat_statement", "if_statement", 
  "true_statement", "false_statment", "case_statment", "case_branch_list", 
  "case_branch", "case_constant_list", "case_constant", "write_statement", 
  "writeln_statement", "write_argument_list", "write_argument", "width", 
  "decimal_place", "sign", "relation_operator", "expression_operator", "term_operator", 
  "number", "unsign_number", "char_constant", "string_constant"
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
    0x3, 0x5f, 0x228, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 
    0x6, 0xa6, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0xab, 0xa, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0xb0, 0xa, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0xb5, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x7, 0x8, 0xc2, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0xc5, 0xb, 
    0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x5, 0xa, 0xca, 0xa, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xd0, 0xa, 0xa, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0xdd, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 
    0xe0, 0xb, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x7, 0xf, 0xef, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0xf2, 0xb, 0xf, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0xf7, 0xa, 0x10, 0xc, 0x10, 0xe, 
    0x10, 0xfa, 0xb, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x7, 0x12, 0x101, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x104, 0xb, 
    0x12, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x108, 0xa, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x110, 
    0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x115, 0xa, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0x120, 0xa, 0x17, 0xc, 0x17, 
    0xe, 0x17, 0x123, 0xb, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x5, 0x18, 
    0x128, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 
    0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x137, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x140, 
    0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 
    0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x149, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 
    0x14c, 0xb, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x5, 0x21, 0x153, 0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 
    0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 
    0x165, 0xa, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x7, 0x27, 0x170, 0xa, 0x27, 
    0xc, 0x27, 0xe, 0x27, 0x173, 0xb, 0x27, 0x3, 0x27, 0x5, 0x27, 0x176, 
    0xa, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 
    0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x182, 
    0xa, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 
    0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x7, 0x2e, 0x194, 0xa, 0x2e, 
    0xc, 0x2e, 0xe, 0x2e, 0x197, 0xb, 0x2e, 0x3, 0x2f, 0x5, 0x2f, 0x19a, 
    0xa, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x7, 0x2f, 0x1a0, 
    0xa, 0x2f, 0xc, 0x2f, 0xe, 0x2f, 0x1a3, 0xb, 0x2f, 0x3, 0x30, 0x3, 0x30, 
    0x3, 0x30, 0x3, 0x30, 0x7, 0x30, 0x1a9, 0xa, 0x30, 0xc, 0x30, 0xe, 0x30, 
    0x1ac, 0xb, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 
    0x31, 0x1b9, 0xa, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 
    0x33, 0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 
    0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x5, 
    0x35, 0x1d2, 0xa, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 0x3, 0x37, 
    0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 
    0x39, 0x3, 0x39, 0x3, 0x39, 0x7, 0x39, 0x1e1, 0xa, 0x39, 0xc, 0x39, 
    0xe, 0x39, 0x1e4, 0xb, 0x39, 0x3, 0x39, 0x5, 0x39, 0x1e7, 0xa, 0x39, 
    0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x3, 
    0x3b, 0x7, 0x3b, 0x1f0, 0xa, 0x3b, 0xc, 0x3b, 0xe, 0x3b, 0x1f3, 0xb, 
    0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3e, 
    0x3, 0x3e, 0x5, 0x3e, 0x1fc, 0xa, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 
    0x3, 0x3f, 0x7, 0x3f, 0x202, 0xa, 0x3f, 0xc, 0x3f, 0xe, 0x3f, 0x205, 
    0xb, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 
    0x40, 0x20c, 0xa, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 
    0x211, 0xa, 0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x44, 
    0x3, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x47, 0x5, 
    0x47, 0x21e, 0xa, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x48, 0x3, 0x48, 
    0x3, 0x49, 0x3, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x2, 0x2, 0x4b, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
    0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 
    0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 
    0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 
    0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 
    0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 
    0x2, 0x8, 0x3, 0x2, 0x4f, 0x50, 0x3, 0x2, 0x3, 0x4, 0x4, 0x2, 0x7, 0x9, 
    0x1c, 0x1e, 0x4, 0x2, 0x3, 0x4, 0x44, 0x44, 0x4, 0x2, 0x5, 0x6, 0x41, 
    0x43, 0x3, 0x2, 0x58, 0x59, 0x2, 0x214, 0x2, 0x94, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0x99, 0x3, 0x2, 0x2, 0x2, 0x6, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x8, 0x9f, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xc, 0xb6, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x10, 0xc6, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x14, 0xd1, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0xd4, 0x3, 0x2, 0x2, 0x2, 0x18, 0xe1, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0xe3, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xe6, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xf3, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x22, 0xfd, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0x107, 0x3, 0x2, 0x2, 0x2, 0x26, 0x10c, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0x111, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x119, 0x3, 0x2, 0x2, 
    0x2, 0x2c, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x127, 0x3, 0x2, 0x2, 0x2, 
    0x30, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x32, 0x131, 0x3, 0x2, 0x2, 0x2, 0x34, 
    0x133, 0x3, 0x2, 0x2, 0x2, 0x36, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x38, 0x13c, 
    0x3, 0x2, 0x2, 0x2, 0x3a, 0x143, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x145, 0x3, 
    0x2, 0x2, 0x2, 0x3e, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x40, 0x152, 0x3, 0x2, 
    0x2, 0x2, 0x42, 0x154, 0x3, 0x2, 0x2, 0x2, 0x44, 0x156, 0x3, 0x2, 0x2, 
    0x2, 0x46, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x48, 0x161, 0x3, 0x2, 0x2, 0x2, 
    0x4a, 0x168, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x4e, 
    0x181, 0x3, 0x2, 0x2, 0x2, 0x50, 0x183, 0x3, 0x2, 0x2, 0x2, 0x52, 0x185, 
    0x3, 0x2, 0x2, 0x2, 0x54, 0x189, 0x3, 0x2, 0x2, 0x2, 0x56, 0x18b, 0x3, 
    0x2, 0x2, 0x2, 0x58, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x18f, 0x3, 0x2, 
    0x2, 0x2, 0x5c, 0x199, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x1a4, 0x3, 0x2, 0x2, 
    0x2, 0x60, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x62, 0x1ba, 0x3, 0x2, 0x2, 0x2, 
    0x64, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x66, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x68, 
    0x1cb, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x1d5, 
    0x3, 0x2, 0x2, 0x2, 0x6e, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x70, 0x1dd, 0x3, 
    0x2, 0x2, 0x2, 0x72, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x74, 0x1ec, 0x3, 0x2, 
    0x2, 0x2, 0x76, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x78, 0x1f6, 0x3, 0x2, 0x2, 
    0x2, 0x7a, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x1fd, 0x3, 0x2, 0x2, 0x2, 
    0x7e, 0x208, 0x3, 0x2, 0x2, 0x2, 0x80, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x82, 
    0x212, 0x3, 0x2, 0x2, 0x2, 0x84, 0x214, 0x3, 0x2, 0x2, 0x2, 0x86, 0x216, 
    0x3, 0x2, 0x2, 0x2, 0x88, 0x218, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x21a, 0x3, 
    0x2, 0x2, 0x2, 0x8c, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x221, 0x3, 0x2, 
    0x2, 0x2, 0x90, 0x223, 0x3, 0x2, 0x2, 0x2, 0x92, 0x225, 0x3, 0x2, 0x2, 
    0x2, 0x94, 0x95, 0x5, 0x4, 0x3, 0x2, 0x95, 0x96, 0x5, 0x8, 0x5, 0x2, 
    0x96, 0x97, 0x7, 0xd, 0x2, 0x2, 0x97, 0x98, 0x7, 0x2, 0x2, 0x3, 0x98, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x7, 0x20, 0x2, 0x2, 0x9a, 0x9b, 
    0x5, 0x6, 0x4, 0x2, 0x9b, 0x9c, 0x7, 0xe, 0x2, 0x2, 0x9c, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x9d, 0x9e, 0x7, 0x57, 0x2, 0x2, 0x9e, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x9f, 0xa0, 0x5, 0xa, 0x6, 0x2, 0xa0, 0xa1, 0x5, 0x4a, 0x26, 
    0x2, 0xa1, 0x9, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x5, 0xc, 0x7, 0x2, 
    0xa3, 0xa4, 0x7, 0xe, 0x2, 0x2, 0xa4, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa5, 
    0xa2, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xaa, 
    0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x5, 0x14, 0xb, 0x2, 0xa8, 0xa9, 0x7, 
    0xe, 0x2, 0x2, 0xa9, 0xab, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xa7, 0x3, 0x2, 
    0x2, 0x2, 0xaa, 0xab, 0x3, 0x2, 0x2, 0x2, 0xab, 0xaf, 0x3, 0x2, 0x2, 
    0x2, 0xac, 0xad, 0x5, 0x22, 0x12, 0x2, 0xad, 0xae, 0x7, 0xe, 0x2, 0x2, 
    0xae, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xac, 0x3, 0x2, 0x2, 0x2, 0xaf, 
    0xb0, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 
    0x5, 0x1a, 0xe, 0x2, 0xb2, 0xb3, 0x7, 0xe, 0x2, 0x2, 0xb3, 0xb5, 0x3, 
    0x2, 0x2, 0x2, 0xb4, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 0x3, 0x2, 
    0x2, 0x2, 0xb5, 0xb, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x7, 0x21, 0x2, 
    0x2, 0xb7, 0xb8, 0x5, 0xe, 0x8, 0x2, 0xb8, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0xb9, 0xba, 0x5, 0x10, 0x9, 0x2, 0xba, 0xbb, 0x7, 0x7, 0x2, 0x2, 0xbb, 
    0xc3, 0x5, 0x12, 0xa, 0x2, 0xbc, 0xbd, 0x7, 0xe, 0x2, 0x2, 0xbd, 0xbe, 
    0x5, 0x10, 0x9, 0x2, 0xbe, 0xbf, 0x7, 0x7, 0x2, 0x2, 0xbf, 0xc0, 0x5, 
    0x12, 0xa, 0x2, 0xc0, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xbc, 0x3, 0x2, 
    0x2, 0x2, 0xc2, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc1, 0x3, 0x2, 0x2, 
    0x2, 0xc3, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0xc5, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 0x7, 0x57, 0x2, 0x2, 0xc7, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xca, 0x5, 0x84, 0x43, 0x2, 0xc9, 0xc8, 
    0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x3, 
    0x2, 0x2, 0x2, 0xcb, 0xd0, 0x7, 0x57, 0x2, 0x2, 0xcc, 0xd0, 0x5, 0x8c, 
    0x47, 0x2, 0xcd, 0xd0, 0x5, 0x90, 0x49, 0x2, 0xce, 0xd0, 0x5, 0x92, 
    0x4a, 0x2, 0xcf, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xcc, 0x3, 0x2, 0x2, 
    0x2, 0xcf, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xce, 0x3, 0x2, 0x2, 0x2, 
    0xd0, 0x13, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd2, 0x7, 0x22, 0x2, 0x2, 0xd2, 
    0xd3, 0x5, 0x16, 0xc, 0x2, 0xd3, 0x15, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 
    0x5, 0x18, 0xd, 0x2, 0xd5, 0xd6, 0x7, 0x7, 0x2, 0x2, 0xd6, 0xde, 0x5, 
    0x40, 0x21, 0x2, 0xd7, 0xd8, 0x7, 0xe, 0x2, 0x2, 0xd8, 0xd9, 0x5, 0x18, 
    0xd, 0x2, 0xd9, 0xda, 0x7, 0x7, 0x2, 0x2, 0xda, 0xdb, 0x5, 0x40, 0x21, 
    0x2, 0xdb, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xd7, 0x3, 0x2, 0x2, 0x2, 
    0xdd, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xde, 
    0xdf, 0x3, 0x2, 0x2, 0x2, 0xdf, 0x17, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xde, 
    0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0x7, 0x57, 0x2, 0x2, 0xe2, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0xe3, 0xe4, 0x7, 0x3e, 0x2, 0x2, 0xe4, 0xe5, 0x5, 0x1c, 
    0xf, 0x2, 0xe5, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 0x5, 0x1e, 0x10, 
    0x2, 0xe7, 0xe8, 0x7, 0xb, 0x2, 0x2, 0xe8, 0xf0, 0x5, 0x40, 0x21, 0x2, 
    0xe9, 0xea, 0x7, 0xe, 0x2, 0x2, 0xea, 0xeb, 0x5, 0x1e, 0x10, 0x2, 0xeb, 
    0xec, 0x7, 0xb, 0x2, 0x2, 0xec, 0xed, 0x5, 0x40, 0x21, 0x2, 0xed, 0xef, 
    0x3, 0x2, 0x2, 0x2, 0xee, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf2, 0x3, 
    0x2, 0x2, 0x2, 0xf0, 0xee, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0x3, 0x2, 
    0x2, 0x2, 0xf1, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf0, 0x3, 0x2, 0x2, 
    0x2, 0xf3, 0xf8, 0x5, 0x20, 0x11, 0x2, 0xf4, 0xf5, 0x7, 0xc, 0x2, 0x2, 
    0xf5, 0xf7, 0x5, 0x20, 0x11, 0x2, 0xf6, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf7, 
    0xfa, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 
    0x3, 0x2, 0x2, 0x2, 0xf9, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xf8, 0x3, 
    0x2, 0x2, 0x2, 0xfb, 0xfc, 0x7, 0x57, 0x2, 0x2, 0xfc, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0xfd, 0x102, 0x5, 0x24, 0x13, 0x2, 0xfe, 0xff, 0x7, 0xe, 0x2, 
    0x2, 0xff, 0x101, 0x5, 0x24, 0x13, 0x2, 0x100, 0xfe, 0x3, 0x2, 0x2, 
    0x2, 0x101, 0x104, 0x3, 0x2, 0x2, 0x2, 0x102, 0x100, 0x3, 0x2, 0x2, 
    0x2, 0x102, 0x103, 0x3, 0x2, 0x2, 0x2, 0x103, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0x104, 0x102, 0x3, 0x2, 0x2, 0x2, 0x105, 0x108, 0x5, 0x26, 0x14, 0x2, 
    0x106, 0x108, 0x5, 0x28, 0x15, 0x2, 0x107, 0x105, 0x3, 0x2, 0x2, 0x2, 
    0x107, 0x106, 0x3, 0x2, 0x2, 0x2, 0x108, 0x109, 0x3, 0x2, 0x2, 0x2, 
    0x109, 0x10a, 0x7, 0xe, 0x2, 0x2, 0x10a, 0x10b, 0x5, 0x8, 0x5, 0x2, 
    0x10b, 0x25, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10d, 0x7, 0x55, 0x2, 0x2, 
    0x10d, 0x10f, 0x5, 0x2a, 0x16, 0x2, 0x10e, 0x110, 0x5, 0x2c, 0x17, 0x2, 
    0x10f, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x110, 0x3, 0x2, 0x2, 0x2, 
    0x110, 0x27, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 0x7, 0x56, 0x2, 0x2, 
    0x112, 0x114, 0x5, 0x2a, 0x16, 0x2, 0x113, 0x115, 0x5, 0x2c, 0x17, 0x2, 
    0x114, 0x113, 0x3, 0x2, 0x2, 0x2, 0x114, 0x115, 0x3, 0x2, 0x2, 0x2, 
    0x115, 0x116, 0x3, 0x2, 0x2, 0x2, 0x116, 0x117, 0x7, 0xb, 0x2, 0x2, 
    0x117, 0x118, 0x5, 0x40, 0x21, 0x2, 0x118, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0x119, 0x11a, 0x7, 0x57, 0x2, 0x2, 0x11a, 0x2b, 0x3, 0x2, 0x2, 0x2, 
    0x11b, 0x11c, 0x7, 0xf, 0x2, 0x2, 0x11c, 0x121, 0x5, 0x2e, 0x18, 0x2, 
    0x11d, 0x11e, 0x7, 0xe, 0x2, 0x2, 0x11e, 0x120, 0x5, 0x2e, 0x18, 0x2, 
    0x11f, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x120, 0x123, 0x3, 0x2, 0x2, 0x2, 
    0x121, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 0x3, 0x2, 0x2, 0x2, 
    0x122, 0x124, 0x3, 0x2, 0x2, 0x2, 0x123, 0x121, 0x3, 0x2, 0x2, 0x2, 
    0x124, 0x125, 0x7, 0x10, 0x2, 0x2, 0x125, 0x2d, 0x3, 0x2, 0x2, 0x2, 
    0x126, 0x128, 0x7, 0x3e, 0x2, 0x2, 0x127, 0x126, 0x3, 0x2, 0x2, 0x2, 
    0x127, 0x128, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x3, 0x2, 0x2, 0x2, 
    0x129, 0x12a, 0x5, 0x30, 0x19, 0x2, 0x12a, 0x12b, 0x7, 0xb, 0x2, 0x2, 
    0x12b, 0x12c, 0x5, 0x40, 0x21, 0x2, 0x12c, 0x2f, 0x3, 0x2, 0x2, 0x2, 
    0x12d, 0x12e, 0x5, 0x32, 0x1a, 0x2, 0x12e, 0x12f, 0x7, 0xc, 0x2, 0x2, 
    0x12f, 0x130, 0x5, 0x32, 0x1a, 0x2, 0x130, 0x31, 0x3, 0x2, 0x2, 0x2, 
    0x131, 0x132, 0x7, 0x57, 0x2, 0x2, 0x132, 0x33, 0x3, 0x2, 0x2, 0x2, 
    0x133, 0x134, 0x5, 0x36, 0x1c, 0x2, 0x134, 0x136, 0x7, 0xf, 0x2, 0x2, 
    0x135, 0x137, 0x5, 0x3c, 0x1f, 0x2, 0x136, 0x135, 0x3, 0x2, 0x2, 0x2, 
    0x136, 0x137, 0x3, 0x2, 0x2, 0x2, 0x137, 0x138, 0x3, 0x2, 0x2, 0x2, 
    0x138, 0x139, 0x7, 0x10, 0x2, 0x2, 0x139, 0x35, 0x3, 0x2, 0x2, 0x2, 
    0x13a, 0x13b, 0x7, 0x57, 0x2, 0x2, 0x13b, 0x37, 0x3, 0x2, 0x2, 0x2, 
    0x13c, 0x13d, 0x5, 0x3a, 0x1e, 0x2, 0x13d, 0x13f, 0x7, 0xf, 0x2, 0x2, 
    0x13e, 0x140, 0x5, 0x3c, 0x1f, 0x2, 0x13f, 0x13e, 0x3, 0x2, 0x2, 0x2, 
    0x13f, 0x140, 0x3, 0x2, 0x2, 0x2, 0x140, 0x141, 0x3, 0x2, 0x2, 0x2, 
    0x141, 0x142, 0x7, 0x10, 0x2, 0x2, 0x142, 0x39, 0x3, 0x2, 0x2, 0x2, 
    0x143, 0x144, 0x7, 0x57, 0x2, 0x2, 0x144, 0x3b, 0x3, 0x2, 0x2, 0x2, 
    0x145, 0x14a, 0x5, 0x3e, 0x20, 0x2, 0x146, 0x147, 0x7, 0xc, 0x2, 0x2, 
    0x147, 0x149, 0x5, 0x3e, 0x20, 0x2, 0x148, 0x146, 0x3, 0x2, 0x2, 0x2, 
    0x149, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x148, 0x3, 0x2, 0x2, 0x2, 
    0x14a, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x14c, 
    0x14a, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x14e, 0x5, 0x5a, 0x2e, 0x2, 0x14e, 
    0x3f, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x153, 0x5, 0x42, 0x22, 0x2, 0x150, 
    0x153, 0x5, 0x44, 0x23, 0x2, 0x151, 0x153, 0x5, 0x48, 0x25, 0x2, 0x152, 
    0x14f, 0x3, 0x2, 0x2, 0x2, 0x152, 0x150, 0x3, 0x2, 0x2, 0x2, 0x152, 
    0x151, 0x3, 0x2, 0x2, 0x2, 0x153, 0x41, 0x3, 0x2, 0x2, 0x2, 0x154, 0x155, 
    0x7, 0x57, 0x2, 0x2, 0x155, 0x43, 0x3, 0x2, 0x2, 0x2, 0x156, 0x157, 
    0x7, 0x23, 0x2, 0x2, 0x157, 0x158, 0x7, 0x15, 0x2, 0x2, 0x158, 0x159, 
    0x5, 0x46, 0x24, 0x2, 0x159, 0x15a, 0x7, 0x16, 0x2, 0x2, 0x15a, 0x15b, 
    0x7, 0x3c, 0x2, 0x2, 0x15b, 0x15c, 0x5, 0x40, 0x21, 0x2, 0x15c, 0x45, 
    0x3, 0x2, 0x2, 0x2, 0x15d, 0x15e, 0x7, 0x58, 0x2, 0x2, 0x15e, 0x15f, 
    0x7, 0x1f, 0x2, 0x2, 0x15f, 0x160, 0x7, 0x58, 0x2, 0x2, 0x160, 0x47, 
    0x3, 0x2, 0x2, 0x2, 0x161, 0x162, 0x7, 0x3d, 0x2, 0x2, 0x162, 0x164, 
    0x5, 0x1c, 0xf, 0x2, 0x163, 0x165, 0x7, 0xe, 0x2, 0x2, 0x164, 0x163, 
    0x3, 0x2, 0x2, 0x2, 0x164, 0x165, 0x3, 0x2, 0x2, 0x2, 0x165, 0x166, 
    0x3, 0x2, 0x2, 0x2, 0x166, 0x167, 0x7, 0x40, 0x2, 0x2, 0x167, 0x49, 
    0x3, 0x2, 0x2, 0x2, 0x168, 0x169, 0x7, 0x3f, 0x2, 0x2, 0x169, 0x16a, 
    0x5, 0x4c, 0x27, 0x2, 0x16a, 0x16b, 0x7, 0x40, 0x2, 0x2, 0x16b, 0x4b, 
    0x3, 0x2, 0x2, 0x2, 0x16c, 0x171, 0x5, 0x4e, 0x28, 0x2, 0x16d, 0x16e, 
    0x7, 0xe, 0x2, 0x2, 0x16e, 0x170, 0x5, 0x4e, 0x28, 0x2, 0x16f, 0x16d, 
    0x3, 0x2, 0x2, 0x2, 0x170, 0x173, 0x3, 0x2, 0x2, 0x2, 0x171, 0x16f, 
    0x3, 0x2, 0x2, 0x2, 0x171, 0x172, 0x3, 0x2, 0x2, 0x2, 0x172, 0x175, 
    0x3, 0x2, 0x2, 0x2, 0x173, 0x171, 0x3, 0x2, 0x2, 0x2, 0x174, 0x176, 
    0x7, 0xe, 0x2, 0x2, 0x175, 0x174, 0x3, 0x2, 0x2, 0x2, 0x175, 0x176, 
    0x3, 0x2, 0x2, 0x2, 0x176, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x177, 0x182, 0x5, 
    0x4a, 0x26, 0x2, 0x178, 0x182, 0x5, 0x52, 0x2a, 0x2, 0x179, 0x182, 0x5, 
    0x62, 0x32, 0x2, 0x17a, 0x182, 0x5, 0x64, 0x33, 0x2, 0x17b, 0x182, 0x5, 
    0x66, 0x34, 0x2, 0x17c, 0x182, 0x5, 0x6e, 0x38, 0x2, 0x17d, 0x182, 0x5, 
    0x68, 0x35, 0x2, 0x17e, 0x182, 0x5, 0x78, 0x3d, 0x2, 0x17f, 0x182, 0x5, 
    0x7a, 0x3e, 0x2, 0x180, 0x182, 0x5, 0x34, 0x1b, 0x2, 0x181, 0x177, 0x3, 
    0x2, 0x2, 0x2, 0x181, 0x178, 0x3, 0x2, 0x2, 0x2, 0x181, 0x179, 0x3, 
    0x2, 0x2, 0x2, 0x181, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x181, 0x17b, 0x3, 
    0x2, 0x2, 0x2, 0x181, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x181, 0x17d, 0x3, 
    0x2, 0x2, 0x2, 0x181, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x181, 0x17f, 0x3, 
    0x2, 0x2, 0x2, 0x181, 0x180, 0x3, 0x2, 0x2, 0x2, 0x182, 0x4f, 0x3, 0x2, 
    0x2, 0x2, 0x183, 0x184, 0x3, 0x2, 0x2, 0x2, 0x184, 0x51, 0x3, 0x2, 0x2, 
    0x2, 0x185, 0x186, 0x5, 0x54, 0x2b, 0x2, 0x186, 0x187, 0x7, 0x17, 0x2, 
    0x2, 0x187, 0x188, 0x5, 0x56, 0x2c, 0x2, 0x188, 0x53, 0x3, 0x2, 0x2, 
    0x2, 0x189, 0x18a, 0x5, 0x58, 0x2d, 0x2, 0x18a, 0x55, 0x3, 0x2, 0x2, 
    0x2, 0x18b, 0x18c, 0x5, 0x5a, 0x2e, 0x2, 0x18c, 0x57, 0x3, 0x2, 0x2, 
    0x2, 0x18d, 0x18e, 0x7, 0x57, 0x2, 0x2, 0x18e, 0x59, 0x3, 0x2, 0x2, 
    0x2, 0x18f, 0x195, 0x5, 0x5c, 0x2f, 0x2, 0x190, 0x191, 0x5, 0x86, 0x44, 
    0x2, 0x191, 0x192, 0x5, 0x5c, 0x2f, 0x2, 0x192, 0x194, 0x3, 0x2, 0x2, 
    0x2, 0x193, 0x190, 0x3, 0x2, 0x2, 0x2, 0x194, 0x197, 0x3, 0x2, 0x2, 
    0x2, 0x195, 0x193, 0x3, 0x2, 0x2, 0x2, 0x195, 0x196, 0x3, 0x2, 0x2, 
    0x2, 0x196, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x197, 0x195, 0x3, 0x2, 0x2, 0x2, 
    0x198, 0x19a, 0x5, 0x84, 0x43, 0x2, 0x199, 0x198, 0x3, 0x2, 0x2, 0x2, 
    0x199, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x19b, 0x3, 0x2, 0x2, 0x2, 
    0x19b, 0x1a1, 0x5, 0x5e, 0x30, 0x2, 0x19c, 0x19d, 0x5, 0x88, 0x45, 0x2, 
    0x19d, 0x19e, 0x5, 0x5e, 0x30, 0x2, 0x19e, 0x1a0, 0x3, 0x2, 0x2, 0x2, 
    0x19f, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a3, 0x3, 0x2, 0x2, 0x2, 
    0x1a1, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a2, 0x3, 0x2, 0x2, 0x2, 
    0x1a2, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a4, 
    0x1aa, 0x5, 0x60, 0x31, 0x2, 0x1a5, 0x1a6, 0x5, 0x8a, 0x46, 0x2, 0x1a6, 
    0x1a7, 0x5, 0x60, 0x31, 0x2, 0x1a7, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1a8, 
    0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1aa, 
    0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1ab, 
    0x5f, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1b9, 
    0x5, 0x58, 0x2d, 0x2, 0x1ae, 0x1b9, 0x5, 0x8c, 0x47, 0x2, 0x1af, 0x1b9, 
    0x5, 0x90, 0x49, 0x2, 0x1b0, 0x1b9, 0x5, 0x92, 0x4a, 0x2, 0x1b1, 0x1b2, 
    0x7, 0x45, 0x2, 0x2, 0x1b2, 0x1b9, 0x5, 0x60, 0x31, 0x2, 0x1b3, 0x1b4, 
    0x7, 0xf, 0x2, 0x2, 0x1b4, 0x1b5, 0x5, 0x5a, 0x2e, 0x2, 0x1b5, 0x1b6, 
    0x7, 0x10, 0x2, 0x2, 0x1b6, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1b9, 
    0x5, 0x38, 0x1d, 0x2, 0x1b8, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1ae, 
    0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b0, 
    0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b3, 
    0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x61, 0x3, 
    0x2, 0x2, 0x2, 0x1ba, 0x1bb, 0x7, 0x4e, 0x2, 0x2, 0x1bb, 0x1bc, 0x5, 
    0x52, 0x2a, 0x2, 0x1bc, 0x1bd, 0x9, 0x2, 0x2, 0x2, 0x1bd, 0x1be, 0x5, 
    0x5a, 0x2e, 0x2, 0x1be, 0x1bf, 0x7, 0x4d, 0x2, 0x2, 0x1bf, 0x1c0, 0x5, 
    0x4e, 0x28, 0x2, 0x1c0, 0x63, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1c2, 0x7, 
    0x4c, 0x2, 0x2, 0x1c2, 0x1c3, 0x5, 0x5a, 0x2e, 0x2, 0x1c3, 0x1c4, 0x7, 
    0x4d, 0x2, 0x2, 0x1c4, 0x1c5, 0x5, 0x4e, 0x28, 0x2, 0x1c5, 0x65, 0x3, 
    0x2, 0x2, 0x2, 0x1c6, 0x1c7, 0x7, 0x4a, 0x2, 0x2, 0x1c7, 0x1c8, 0x5, 
    0x4c, 0x27, 0x2, 0x1c8, 0x1c9, 0x7, 0x4b, 0x2, 0x2, 0x1c9, 0x1ca, 0x5, 
    0x5a, 0x2e, 0x2, 0x1ca, 0x67, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1cc, 0x7, 
    0x46, 0x2, 0x2, 0x1cc, 0x1cd, 0x5, 0x5a, 0x2e, 0x2, 0x1cd, 0x1ce, 0x7, 
    0x47, 0x2, 0x2, 0x1ce, 0x1d1, 0x5, 0x6a, 0x36, 0x2, 0x1cf, 0x1d0, 0x7, 
    0x48, 0x2, 0x2, 0x1d0, 0x1d2, 0x5, 0x6c, 0x37, 0x2, 0x1d1, 0x1cf, 0x3, 
    0x2, 0x2, 0x2, 0x1d1, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x69, 0x3, 0x2, 
    0x2, 0x2, 0x1d3, 0x1d4, 0x5, 0x4e, 0x28, 0x2, 0x1d4, 0x6b, 0x3, 0x2, 
    0x2, 0x2, 0x1d5, 0x1d6, 0x5, 0x4e, 0x28, 0x2, 0x1d6, 0x6d, 0x3, 0x2, 
    0x2, 0x2, 0x1d7, 0x1d8, 0x7, 0x49, 0x2, 0x2, 0x1d8, 0x1d9, 0x5, 0x5a, 
    0x2e, 0x2, 0x1d9, 0x1da, 0x7, 0x3c, 0x2, 0x2, 0x1da, 0x1db, 0x5, 0x70, 
    0x39, 0x2, 0x1db, 0x1dc, 0x7, 0x40, 0x2, 0x2, 0x1dc, 0x6f, 0x3, 0x2, 
    0x2, 0x2, 0x1dd, 0x1e2, 0x5, 0x72, 0x3a, 0x2, 0x1de, 0x1df, 0x7, 0xe, 
    0x2, 0x2, 0x1df, 0x1e1, 0x5, 0x72, 0x3a, 0x2, 0x1e0, 0x1de, 0x3, 0x2, 
    0x2, 0x2, 0x1e1, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e0, 0x3, 0x2, 
    0x2, 0x2, 0x1e2, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e6, 0x3, 0x2, 
    0x2, 0x2, 0x1e4, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e7, 0x7, 0xe, 
    0x2, 0x2, 0x1e6, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e7, 0x3, 0x2, 
    0x2, 0x2, 0x1e7, 0x71, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e9, 0x5, 0x74, 
    0x3b, 0x2, 0x1e9, 0x1ea, 0x7, 0xb, 0x2, 0x2, 0x1ea, 0x1eb, 0x5, 0x4e, 
    0x28, 0x2, 0x1eb, 0x73, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1f1, 0x5, 0x76, 
    0x3c, 0x2, 0x1ed, 0x1ee, 0x7, 0xc, 0x2, 0x2, 0x1ee, 0x1f0, 0x5, 0x76, 
    0x3c, 0x2, 0x1ef, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1f3, 0x3, 0x2, 
    0x2, 0x2, 0x1f1, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f2, 0x3, 0x2, 
    0x2, 0x2, 0x1f2, 0x75, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f1, 0x3, 0x2, 0x2, 
    0x2, 0x1f4, 0x1f5, 0x5, 0x12, 0xa, 0x2, 0x1f5, 0x77, 0x3, 0x2, 0x2, 
    0x2, 0x1f6, 0x1f7, 0x7, 0x51, 0x2, 0x2, 0x1f7, 0x1f8, 0x5, 0x7c, 0x3f, 
    0x2, 0x1f8, 0x79, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1fb, 0x7, 0x52, 0x2, 
    0x2, 0x1fa, 0x1fc, 0x5, 0x7c, 0x3f, 0x2, 0x1fb, 0x1fa, 0x3, 0x2, 0x2, 
    0x2, 0x1fb, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x7b, 0x3, 0x2, 0x2, 0x2, 
    0x1fd, 0x1fe, 0x7, 0xf, 0x2, 0x2, 0x1fe, 0x203, 0x5, 0x7e, 0x40, 0x2, 
    0x1ff, 0x200, 0x7, 0xc, 0x2, 0x2, 0x200, 0x202, 0x5, 0x7e, 0x40, 0x2, 
    0x201, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x202, 0x205, 0x3, 0x2, 0x2, 0x2, 
    0x203, 0x201, 0x3, 0x2, 0x2, 0x2, 0x203, 0x204, 0x3, 0x2, 0x2, 0x2, 
    0x204, 0x206, 0x3, 0x2, 0x2, 0x2, 0x205, 0x203, 0x3, 0x2, 0x2, 0x2, 
    0x206, 0x207, 0x7, 0x10, 0x2, 0x2, 0x207, 0x7d, 0x3, 0x2, 0x2, 0x2, 
    0x208, 0x20b, 0x5, 0x5a, 0x2e, 0x2, 0x209, 0x20a, 0x7, 0xb, 0x2, 0x2, 
    0x20a, 0x20c, 0x5, 0x80, 0x41, 0x2, 0x20b, 0x209, 0x3, 0x2, 0x2, 0x2, 
    0x20b, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x20d, 
    0x210, 0x7, 0x58, 0x2, 0x2, 0x20e, 0x20f, 0x7, 0xb, 0x2, 0x2, 0x20f, 
    0x211, 0x5, 0x82, 0x42, 0x2, 0x210, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x210, 
    0x211, 0x3, 0x2, 0x2, 0x2, 0x211, 0x81, 0x3, 0x2, 0x2, 0x2, 0x212, 0x213, 
    0x7, 0x58, 0x2, 0x2, 0x213, 0x83, 0x3, 0x2, 0x2, 0x2, 0x214, 0x215, 
    0x9, 0x3, 0x2, 0x2, 0x215, 0x85, 0x3, 0x2, 0x2, 0x2, 0x216, 0x217, 0x9, 
    0x4, 0x2, 0x2, 0x217, 0x87, 0x3, 0x2, 0x2, 0x2, 0x218, 0x219, 0x9, 0x5, 
    0x2, 0x2, 0x219, 0x89, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x21b, 0x9, 0x6, 0x2, 
    0x2, 0x21b, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x21e, 0x5, 0x84, 0x43, 
    0x2, 0x21d, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x21d, 0x21e, 0x3, 0x2, 0x2, 
    0x2, 0x21e, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x220, 0x5, 0x8e, 0x48, 
    0x2, 0x220, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x221, 0x222, 0x9, 0x7, 0x2, 0x2, 
    0x222, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x223, 0x224, 0x7, 0x5d, 0x2, 0x2, 
    0x224, 0x91, 0x3, 0x2, 0x2, 0x2, 0x225, 0x226, 0x7, 0x5e, 0x2, 0x2, 
    0x226, 0x93, 0x3, 0x2, 0x2, 0x2, 0x28, 0xa5, 0xaa, 0xaf, 0xb4, 0xc3, 
    0xc9, 0xcf, 0xde, 0xf0, 0xf8, 0x102, 0x107, 0x10f, 0x114, 0x121, 0x127, 
    0x136, 0x13f, 0x14a, 0x152, 0x164, 0x171, 0x175, 0x181, 0x195, 0x199, 
    0x1a1, 0x1aa, 0x1b8, 0x1d1, 0x1e2, 0x1e6, 0x1f1, 0x1fb, 0x203, 0x20b, 
    0x210, 0x21d, 
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
