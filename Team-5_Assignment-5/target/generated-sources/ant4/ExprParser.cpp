
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
    setState(138);
    program_header();
    setState(139);
    program_body();
    setState(140);
    match(ExprParser::PERIOD);
    setState(141);
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
    setState(143);
    match(ExprParser::PROGRAM);
    setState(144);
    program_name();
    setState(145);
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
    setState(147);
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
    setState(149);
    program_declaration();
    setState(150);
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
    setState(155);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::CONST) {
      setState(152);
      constants_section();
      setState(153);
      match(ExprParser::SEMICOLON);
    }
    setState(160);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::PROCEDURE

    || _la == ExprParser::FUNCTION) {
      setState(157);
      routine_section();
      setState(158);
      match(ExprParser::SEMICOLON);
    }
    setState(165);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::VAR) {
      setState(162);
      variable_section();
      setState(163);
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
    setState(167);
    match(ExprParser::CONST);
    setState(168);
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
    setState(170);
    const_name();
    setState(171);
    match(ExprParser::EQUAL);
    setState(172);
    constant();
    setState(180);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(173);
        match(ExprParser::SEMICOLON);
        setState(174);
        const_name();
        setState(175);
        match(ExprParser::EQUAL);
        setState(176);
        constant(); 
      }
      setState(182);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
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
    setState(183);
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
    setState(192);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(186);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ExprParser::PLUSOP

      || _la == ExprParser::MINUSOP) {
        setState(185);
        sign();
      }

      setState(188);
      match(ExprParser::IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(189);
      number();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(190);
      char_constant();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(191);
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
  enterRule(_localctx, 18, ExprParser::RuleVariable_section);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    match(ExprParser::VAR);
    setState(195);
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
  enterRule(_localctx, 20, ExprParser::RuleVar_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(197);
    var_list();
    setState(198);
    match(ExprParser::COLON);
    setState(199);
    data_type();
    setState(207);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(200);
        match(ExprParser::SEMICOLON);
        setState(201);
        var_list();
        setState(202);
        match(ExprParser::COLON);
        setState(203);
        data_type(); 
      }
      setState(209);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
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
  enterRule(_localctx, 22, ExprParser::RuleVar_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(210);
    var_name();
    setState(215);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::COMMA) {
      setState(211);
      match(ExprParser::COMMA);
      setState(212);
      var_name();
      setState(217);
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
  enterRule(_localctx, 24, ExprParser::RuleVar_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(218);
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
  enterRule(_localctx, 26, ExprParser::RuleRoutine_section);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(220);
    routine_declaration();
    setState(225);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(221);
        match(ExprParser::SEMICOLON);
        setState(222);
        routine_declaration(); 
      }
      setState(227);
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
  enterRule(_localctx, 28, ExprParser::RuleRoutine_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(230);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::PROCEDURE: {
        setState(228);
        procedure();
        break;
      }

      case ExprParser::FUNCTION: {
        setState(229);
        function();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(232);
    match(ExprParser::SEMICOLON);
    setState(233);
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
  enterRule(_localctx, 30, ExprParser::RuleProcedure);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(235);
    match(ExprParser::PROCEDURE);
    setState(236);
    routine_name();
    setState(238);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::VAR

    || _la == ExprParser::IDENTIFIER) {
      setState(237);
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
  enterRule(_localctx, 32, ExprParser::RuleFunction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(240);
    match(ExprParser::FUNCTION);
    setState(241);
    routine_name();
    setState(243);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::VAR

    || _la == ExprParser::IDENTIFIER) {
      setState(242);
      parameter_list();
    }
    setState(245);
    match(ExprParser::COLON);
    setState(246);
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
  enterRule(_localctx, 34, ExprParser::RuleRoutine_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(248);
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

std::vector<ExprParser::Parameter_declarationContext *> ExprParser::Parameter_listContext::parameter_declaration() {
  return getRuleContexts<ExprParser::Parameter_declarationContext>();
}

ExprParser::Parameter_declarationContext* ExprParser::Parameter_listContext::parameter_declaration(size_t i) {
  return getRuleContext<ExprParser::Parameter_declarationContext>(i);
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
  enterRule(_localctx, 36, ExprParser::RuleParameter_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(250);
    parameter_declaration();
    setState(255);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(251);
        match(ExprParser::SEMICOLON);
        setState(252);
        parameter_declaration(); 
      }
      setState(257);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
   
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
  enterRule(_localctx, 38, ExprParser::RuleParameter_declaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(259);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::VAR) {
      setState(258);
      match(ExprParser::VAR);
    }
    setState(261);
    parameter_name_list();
    setState(262);
    match(ExprParser::COLON);
    setState(263);
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
  enterRule(_localctx, 40, ExprParser::RuleParameter_name_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(265);
    parameter_name();

    setState(266);
    match(ExprParser::COMMA);
    setState(267);
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
  enterRule(_localctx, 42, ExprParser::RuleParameter_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(269);
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
  enterRule(_localctx, 44, ExprParser::RuleCall_procedure);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(271);
    procedure_name();
    setState(272);
    match(ExprParser::LPAREN);
    setState(274);
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
      setState(273);
      argument_list();
    }
    setState(276);
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
  enterRule(_localctx, 46, ExprParser::RuleProcedure_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(278);
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
  enterRule(_localctx, 48, ExprParser::RuleCall_function);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(280);
    function_name();
    setState(281);
    match(ExprParser::LPAREN);
    setState(283);
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
      setState(282);
      argument_list();
    }
    setState(285);
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
  enterRule(_localctx, 50, ExprParser::RuleFunction_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(287);
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
  enterRule(_localctx, 52, ExprParser::RuleArgument_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(289);
    argument();
    setState(294);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::COMMA) {
      setState(290);
      match(ExprParser::COMMA);
      setState(291);
      argument();
      setState(296);
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
  enterRule(_localctx, 54, ExprParser::RuleArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(297);
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
  enterRule(_localctx, 56, ExprParser::RuleData_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(301);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(299);
        type_name();
        break;
      }

      case ExprParser::ARRAY: {
        enterOuterAlt(_localctx, 2);
        setState(300);
        array_type();
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
  enterRule(_localctx, 58, ExprParser::RuleType_name);

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
  enterRule(_localctx, 60, ExprParser::RuleArray_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(305);
    match(ExprParser::ARRAY);
    setState(306);
    match(ExprParser::LBRACE);
    setState(307);
    array_declaration();
    setState(308);
    match(ExprParser::RBRACE);
    setState(309);
    match(ExprParser::OF);
    setState(310);
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
  enterRule(_localctx, 62, ExprParser::RuleArray_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(312);
    match(ExprParser::INTEGER);
    setState(313);
    match(ExprParser::DOTDOT);
    setState(314);
    match(ExprParser::INTEGER);
   
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
  enterRule(_localctx, 64, ExprParser::RuleCompound_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(316);
    match(ExprParser::BEGIN);
    setState(317);
    statement_list();
    setState(318);
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
  enterRule(_localctx, 66, ExprParser::RuleStatement_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(320);
    statement();
    setState(325);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::SEMICOLON) {
      setState(321);
      match(ExprParser::SEMICOLON);
      setState(322);
      statement();
      setState(327);
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

ExprParser::Empty_statementContext* ExprParser::StatementContext::empty_statement() {
  return getRuleContext<ExprParser::Empty_statementContext>(0);
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
  enterRule(_localctx, 68, ExprParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(339);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(328);
      compound_statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(329);
      assign_statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(330);
      for_statement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(331);
      while_statement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(332);
      repeat_statement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(333);
      case_statment();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(334);
      if_statement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(335);
      write_statement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(336);
      writeln_statement();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(337);
      call_procedure();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(338);
      empty_statement();
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
  enterRule(_localctx, 70, ExprParser::RuleEmpty_statement);

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
  enterRule(_localctx, 72, ExprParser::RuleAssign_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(343);
    lhs();
    setState(344);
    match(ExprParser::ASSIGN);
    setState(345);
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
  enterRule(_localctx, 74, ExprParser::RuleLhs);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(347);
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
  enterRule(_localctx, 76, ExprParser::RuleRhs);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(349);
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
  enterRule(_localctx, 78, ExprParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(351);
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
  enterRule(_localctx, 80, ExprParser::RuleExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(353);
    single_expression();
    setState(359);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::EQUAL)
      | (1ULL << ExprParser::LT)
      | (1ULL << ExprParser::GT)
      | (1ULL << ExprParser::NE)
      | (1ULL << ExprParser::LTEQ)
      | (1ULL << ExprParser::GTEQ))) != 0)) {
      setState(354);
      relation_operator();
      setState(355);
      single_expression();
      setState(361);
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
  enterRule(_localctx, 82, ExprParser::RuleSingle_expression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(363);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      setState(362);
      sign();
      break;
    }

    }
    setState(365);
    term_expression();
    setState(371);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::PLUSOP

    || _la == ExprParser::MINUSOP || _la == ExprParser::OR) {
      setState(366);
      expression_operator();
      setState(367);
      term_expression();
      setState(373);
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
  enterRule(_localctx, 84, ExprParser::RuleTerm_expression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(374);
    factor();
    setState(380);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 3) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 3)) & ((1ULL << (ExprParser::MULTOP - 3))
      | (1ULL << (ExprParser::DIVOP - 3))
      | (1ULL << (ExprParser::DIV - 3))
      | (1ULL << (ExprParser::MOD - 3))
      | (1ULL << (ExprParser::AND - 3)))) != 0)) {
      setState(375);
      term_operator();
      setState(376);
      factor();
      setState(382);
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
  enterRule(_localctx, 86, ExprParser::RuleFactor);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(394);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(383);
      variable();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(384);
      number();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(385);
      char_constant();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(386);
      string_constant();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(387);
      match(ExprParser::NOT);
      setState(388);
      factor();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(389);
      match(ExprParser::LPAREN);
      setState(390);
      expression();
      setState(391);
      match(ExprParser::RPAREN);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(393);
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
  enterRule(_localctx, 88, ExprParser::RuleFor_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(396);
    match(ExprParser::FOR);
    setState(397);
    assign_statement();
    setState(398);
    _la = _input->LA(1);
    if (!(_la == ExprParser::TO

    || _la == ExprParser::DOWNTO)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(399);
    expression();
    setState(400);
    match(ExprParser::DO);
    setState(401);
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
  enterRule(_localctx, 90, ExprParser::RuleWhile_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(403);
    match(ExprParser::WHILE);
    setState(404);
    expression();
    setState(405);
    match(ExprParser::DO);
    setState(406);
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
  enterRule(_localctx, 92, ExprParser::RuleRepeat_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(408);
    match(ExprParser::REPEAT);
    setState(409);
    statement_list();
    setState(410);
    match(ExprParser::UNTIL);
    setState(411);
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
  enterRule(_localctx, 94, ExprParser::RuleIf_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(413);
    match(ExprParser::IF);
    setState(414);
    expression();
    setState(415);
    match(ExprParser::THEN);
    setState(416);
    true_statement();
    setState(419);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      setState(417);
      match(ExprParser::ELSE);
      setState(418);
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
  enterRule(_localctx, 96, ExprParser::RuleTrue_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(421);
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
  enterRule(_localctx, 98, ExprParser::RuleFalse_statment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(423);
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
  enterRule(_localctx, 100, ExprParser::RuleCase_statment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(425);
    match(ExprParser::CASE);
    setState(426);
    expression();
    setState(427);
    match(ExprParser::OF);
    setState(428);
    case_branch_list();
    setState(429);
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
  enterRule(_localctx, 102, ExprParser::RuleCase_branch_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(431);
    case_branch();
    setState(436);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::SEMICOLON) {
      setState(432);
      match(ExprParser::SEMICOLON);
      setState(433);
      case_branch();
      setState(438);
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
  enterRule(_localctx, 104, ExprParser::RuleCase_branch);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(439);
    case_constant_list();
    setState(440);
    match(ExprParser::COLON);
    setState(441);
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
  enterRule(_localctx, 106, ExprParser::RuleCase_constant_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(443);
    case_constant();
    setState(448);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::COMMA) {
      setState(444);
      match(ExprParser::COMMA);
      setState(445);
      case_constant();
      setState(450);
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
  enterRule(_localctx, 108, ExprParser::RuleCase_constant);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(451);
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
  enterRule(_localctx, 110, ExprParser::RuleWrite_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(453);
    match(ExprParser::WRITE);
    setState(454);
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
  enterRule(_localctx, 112, ExprParser::RuleWriteln_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(456);
    match(ExprParser::WRITELN);
    setState(458);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::LPAREN) {
      setState(457);
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
  enterRule(_localctx, 114, ExprParser::RuleWrite_argument_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(460);
    match(ExprParser::LPAREN);
    setState(461);
    write_argument();
    setState(466);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::COMMA) {
      setState(462);
      match(ExprParser::COMMA);
      setState(463);
      write_argument();
      setState(468);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(469);
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
  enterRule(_localctx, 116, ExprParser::RuleWrite_argument);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(471);
    expression();
    setState(474);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::COLON) {
      setState(472);
      match(ExprParser::COLON);
      setState(473);
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
  enterRule(_localctx, 118, ExprParser::RuleWidth);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(476);
    match(ExprParser::INTEGER);
    setState(479);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::COLON) {
      setState(477);
      match(ExprParser::COLON);
      setState(478);
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
  enterRule(_localctx, 120, ExprParser::RuleDecimal_place);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(481);
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
  enterRule(_localctx, 122, ExprParser::RuleSign);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(483);
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
  enterRule(_localctx, 124, ExprParser::RuleRelation_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(485);
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
  enterRule(_localctx, 126, ExprParser::RuleExpression_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(487);
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
  enterRule(_localctx, 128, ExprParser::RuleTerm_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(489);
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
  enterRule(_localctx, 130, ExprParser::RuleNumber);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(492);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::PLUSOP

    || _la == ExprParser::MINUSOP) {
      setState(491);
      sign();
    }
    setState(494);
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
  enterRule(_localctx, 132, ExprParser::RuleUnsign_number);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(496);
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
  enterRule(_localctx, 134, ExprParser::RuleChar_constant);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(498);
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
  enterRule(_localctx, 136, ExprParser::RuleString_constant);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(500);
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
  "constants_section", "const_list", "const_name", "constant", "variable_section", 
  "var_declaration", "var_list", "var_name", "routine_section", "routine_declaration", 
  "procedure", "function", "routine_name", "parameter_list", "parameter_declaration", 
  "parameter_name_list", "parameter_name", "call_procedure", "procedure_name", 
  "call_function", "function_name", "argument_list", "argument", "data_type", 
  "type_name", "array_type", "array_declaration", "compound_statement", 
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
    0x3, 0x5f, 0x1f9, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x46, 0x9, 0x46, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x9e, 0xa, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0xa3, 0xa, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x5, 0x6, 0xa8, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x7, 0x8, 0xb5, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0xb8, 0xb, 0x8, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x5, 0xa, 0xbd, 0xa, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xc3, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0xd0, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0xd3, 
    0xb, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0xd8, 0xa, 0xd, 0xc, 
    0xd, 0xe, 0xd, 0xdb, 0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x7, 0xf, 0xe2, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0xe5, 0xb, 0xf, 
    0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xe9, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xf1, 0xa, 0x11, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xf6, 0xa, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x7, 0x14, 0x100, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x103, 0xb, 
    0x14, 0x3, 0x15, 0x5, 0x15, 0x106, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x115, 
    0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 
    0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x11e, 0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x127, 
    0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0x12a, 0xb, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x130, 0xa, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 
    0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x7, 0x23, 0x146, 
    0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 0x149, 0xb, 0x23, 0x3, 0x24, 0x3, 0x24, 
    0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 
    0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x156, 0xa, 0x24, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 
    0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 
    0x3, 0x2a, 0x3, 0x2a, 0x7, 0x2a, 0x168, 0xa, 0x2a, 0xc, 0x2a, 0xe, 0x2a, 
    0x16b, 0xb, 0x2a, 0x3, 0x2b, 0x5, 0x2b, 0x16e, 0xa, 0x2b, 0x3, 0x2b, 
    0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x7, 0x2b, 0x174, 0xa, 0x2b, 0xc, 0x2b, 
    0xe, 0x2b, 0x177, 0xb, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x7, 0x2c, 0x17d, 0xa, 0x2c, 0xc, 0x2c, 0xe, 0x2c, 0x180, 0xb, 0x2c, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 
    0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x18d, 
    0xa, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
    0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 
    0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 0x3, 
    0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x1a6, 
    0xa, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x34, 0x3, 
    0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 0x3, 0x35, 
    0x3, 0x35, 0x7, 0x35, 0x1b5, 0xa, 0x35, 0xc, 0x35, 0xe, 0x35, 0x1b8, 
    0xb, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 0x3, 
    0x37, 0x3, 0x37, 0x7, 0x37, 0x1c1, 0xa, 0x37, 0xc, 0x37, 0xe, 0x37, 
    0x1c4, 0xb, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 
    0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x1cd, 0xa, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 
    0x3, 0x3b, 0x3, 0x3b, 0x7, 0x3b, 0x1d3, 0xa, 0x3b, 0xc, 0x3b, 0xe, 0x3b, 
    0x1d6, 0xb, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
    0x5, 0x3c, 0x1dd, 0xa, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x5, 0x3d, 
    0x1e2, 0xa, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x40, 
    0x3, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 0x43, 0x5, 
    0x43, 0x1ef, 0xa, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x44, 0x3, 0x44, 
    0x3, 0x45, 0x3, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x2, 0x2, 0x47, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
    0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 
    0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 
    0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 
    0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 
    0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x2, 0x8, 0x3, 0x2, 
    0x4f, 0x50, 0x3, 0x2, 0x3, 0x4, 0x4, 0x2, 0x7, 0x9, 0x1c, 0x1e, 0x4, 
    0x2, 0x3, 0x4, 0x44, 0x44, 0x4, 0x2, 0x5, 0x6, 0x41, 0x43, 0x3, 0x2, 
    0x58, 0x59, 0x2, 0x1e4, 0x2, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x4, 0x91, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0x95, 0x3, 0x2, 0x2, 0x2, 0x8, 0x97, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0x9d, 0x3, 0x2, 0x2, 0x2, 0xc, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0xac, 0x3, 0x2, 0x2, 0x2, 0x10, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x12, 0xc2, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0xc4, 0x3, 0x2, 0x2, 0x2, 0x16, 0xc7, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0xd4, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xdc, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0xde, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xe8, 0x3, 0x2, 0x2, 
    0x2, 0x20, 0xed, 0x3, 0x2, 0x2, 0x2, 0x22, 0xf2, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0xfa, 0x3, 0x2, 0x2, 0x2, 0x26, 0xfc, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0x105, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x10f, 
    0x3, 0x2, 0x2, 0x2, 0x2e, 0x111, 0x3, 0x2, 0x2, 0x2, 0x30, 0x118, 0x3, 
    0x2, 0x2, 0x2, 0x32, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x34, 0x121, 0x3, 0x2, 
    0x2, 0x2, 0x36, 0x123, 0x3, 0x2, 0x2, 0x2, 0x38, 0x12b, 0x3, 0x2, 0x2, 
    0x2, 0x3a, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x131, 0x3, 0x2, 0x2, 0x2, 
    0x3e, 0x133, 0x3, 0x2, 0x2, 0x2, 0x40, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x13e, 0x3, 0x2, 0x2, 0x2, 0x44, 0x142, 0x3, 0x2, 0x2, 0x2, 0x46, 0x155, 
    0x3, 0x2, 0x2, 0x2, 0x48, 0x157, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x159, 0x3, 
    0x2, 0x2, 0x2, 0x4c, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x15f, 0x3, 0x2, 
    0x2, 0x2, 0x50, 0x161, 0x3, 0x2, 0x2, 0x2, 0x52, 0x163, 0x3, 0x2, 0x2, 
    0x2, 0x54, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x56, 0x178, 0x3, 0x2, 0x2, 0x2, 
    0x58, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x5c, 
    0x195, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x60, 0x19f, 
    0x3, 0x2, 0x2, 0x2, 0x62, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x64, 0x1a9, 0x3, 
    0x2, 0x2, 0x2, 0x66, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x68, 0x1b1, 0x3, 0x2, 
    0x2, 0x2, 0x6a, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x1bd, 0x3, 0x2, 0x2, 
    0x2, 0x6e, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x70, 0x1c7, 0x3, 0x2, 0x2, 0x2, 
    0x72, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x74, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x76, 
    0x1d9, 0x3, 0x2, 0x2, 0x2, 0x78, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x1e3, 
    0x3, 0x2, 0x2, 0x2, 0x7c, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x1e7, 0x3, 
    0x2, 0x2, 0x2, 0x80, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x82, 0x1eb, 0x3, 0x2, 
    0x2, 0x2, 0x84, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x86, 0x1f2, 0x3, 0x2, 0x2, 
    0x2, 0x88, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x1f6, 0x3, 0x2, 0x2, 0x2, 
    0x8c, 0x8d, 0x5, 0x4, 0x3, 0x2, 0x8d, 0x8e, 0x5, 0x8, 0x5, 0x2, 0x8e, 
    0x8f, 0x7, 0xd, 0x2, 0x2, 0x8f, 0x90, 0x7, 0x2, 0x2, 0x3, 0x90, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0x7, 0x20, 0x2, 0x2, 0x92, 0x93, 0x5, 
    0x6, 0x4, 0x2, 0x93, 0x94, 0x7, 0xe, 0x2, 0x2, 0x94, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0x95, 0x96, 0x7, 0x57, 0x2, 0x2, 0x96, 0x7, 0x3, 0x2, 0x2, 
    0x2, 0x97, 0x98, 0x5, 0xa, 0x6, 0x2, 0x98, 0x99, 0x5, 0x42, 0x22, 0x2, 
    0x99, 0x9, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x5, 0xc, 0x7, 0x2, 0x9b, 
    0x9c, 0x7, 0xe, 0x2, 0x2, 0x9c, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9a, 
    0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa2, 0x3, 
    0x2, 0x2, 0x2, 0x9f, 0xa0, 0x5, 0x1c, 0xf, 0x2, 0xa0, 0xa1, 0x7, 0xe, 
    0x2, 0x2, 0xa1, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x9f, 0x3, 0x2, 0x2, 
    0x2, 0xa2, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa7, 0x3, 0x2, 0x2, 0x2, 
    0xa4, 0xa5, 0x5, 0x14, 0xb, 0x2, 0xa5, 0xa6, 0x7, 0xe, 0x2, 0x2, 0xa6, 
    0xa8, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 
    0x3, 0x2, 0x2, 0x2, 0xa8, 0xb, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 0x7, 
    0x21, 0x2, 0x2, 0xaa, 0xab, 0x5, 0xe, 0x8, 0x2, 0xab, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0xac, 0xad, 0x5, 0x10, 0x9, 0x2, 0xad, 0xae, 0x7, 0x7, 0x2, 
    0x2, 0xae, 0xb6, 0x5, 0x12, 0xa, 0x2, 0xaf, 0xb0, 0x7, 0xe, 0x2, 0x2, 
    0xb0, 0xb1, 0x5, 0x10, 0x9, 0x2, 0xb1, 0xb2, 0x7, 0x7, 0x2, 0x2, 0xb2, 
    0xb3, 0x5, 0x12, 0xa, 0x2, 0xb3, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xaf, 
    0x3, 0x2, 0x2, 0x2, 0xb5, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb4, 0x3, 
    0x2, 0x2, 0x2, 0xb6, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0xb8, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xba, 0x7, 0x57, 0x2, 
    0x2, 0xba, 0x11, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbd, 0x5, 0x7c, 0x3f, 0x2, 
    0xbc, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbd, 
    0xbe, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xc3, 0x7, 0x57, 0x2, 0x2, 0xbf, 0xc3, 
    0x5, 0x84, 0x43, 0x2, 0xc0, 0xc3, 0x5, 0x88, 0x45, 0x2, 0xc1, 0xc3, 
    0x5, 0x8a, 0x46, 0x2, 0xc2, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xbf, 0x3, 
    0x2, 0x2, 0x2, 0xc2, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc1, 0x3, 0x2, 
    0x2, 0x2, 0xc3, 0x13, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x7, 0x3e, 0x2, 
    0x2, 0xc5, 0xc6, 0x5, 0x16, 0xc, 0x2, 0xc6, 0x15, 0x3, 0x2, 0x2, 0x2, 
    0xc7, 0xc8, 0x5, 0x18, 0xd, 0x2, 0xc8, 0xc9, 0x7, 0xb, 0x2, 0x2, 0xc9, 
    0xd1, 0x5, 0x3a, 0x1e, 0x2, 0xca, 0xcb, 0x7, 0xe, 0x2, 0x2, 0xcb, 0xcc, 
    0x5, 0x18, 0xd, 0x2, 0xcc, 0xcd, 0x7, 0xb, 0x2, 0x2, 0xcd, 0xce, 0x5, 
    0x3a, 0x1e, 0x2, 0xce, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xca, 0x3, 0x2, 
    0x2, 0x2, 0xd0, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xcf, 0x3, 0x2, 0x2, 
    0x2, 0xd1, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd2, 0x17, 0x3, 0x2, 0x2, 0x2, 
    0xd3, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd9, 0x5, 0x1a, 0xe, 0x2, 0xd5, 
    0xd6, 0x7, 0xc, 0x2, 0x2, 0xd6, 0xd8, 0x5, 0x1a, 0xe, 0x2, 0xd7, 0xd5, 
    0x3, 0x2, 0x2, 0x2, 0xd8, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xd7, 0x3, 
    0x2, 0x2, 0x2, 0xd9, 0xda, 0x3, 0x2, 0x2, 0x2, 0xda, 0x19, 0x3, 0x2, 
    0x2, 0x2, 0xdb, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 0x7, 0x57, 0x2, 
    0x2, 0xdd, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xde, 0xe3, 0x5, 0x1e, 0x10, 0x2, 
    0xdf, 0xe0, 0x7, 0xe, 0x2, 0x2, 0xe0, 0xe2, 0x5, 0x1e, 0x10, 0x2, 0xe1, 
    0xdf, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe1, 
    0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe4, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0xe5, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe9, 0x5, 0x20, 
    0x11, 0x2, 0xe7, 0xe9, 0x5, 0x22, 0x12, 0x2, 0xe8, 0xe6, 0x3, 0x2, 0x2, 
    0x2, 0xe8, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0x3, 0x2, 0x2, 0x2, 
    0xea, 0xeb, 0x7, 0xe, 0x2, 0x2, 0xeb, 0xec, 0x5, 0x8, 0x5, 0x2, 0xec, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0xed, 0xee, 0x7, 0x55, 0x2, 0x2, 0xee, 0xf0, 
    0x5, 0x24, 0x13, 0x2, 0xef, 0xf1, 0x5, 0x26, 0x14, 0x2, 0xf0, 0xef, 
    0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf1, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0xf2, 0xf3, 0x7, 0x56, 0x2, 0x2, 0xf3, 0xf5, 0x5, 0x24, 
    0x13, 0x2, 0xf4, 0xf6, 0x5, 0x26, 0x14, 0x2, 0xf5, 0xf4, 0x3, 0x2, 0x2, 
    0x2, 0xf5, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x3, 0x2, 0x2, 0x2, 
    0xf7, 0xf8, 0x7, 0xb, 0x2, 0x2, 0xf8, 0xf9, 0x5, 0x3a, 0x1e, 0x2, 0xf9, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x7, 0x57, 0x2, 0x2, 0xfb, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0xfc, 0x101, 0x5, 0x28, 0x15, 0x2, 0xfd, 0xfe, 0x7, 
    0xe, 0x2, 0x2, 0xfe, 0x100, 0x5, 0x28, 0x15, 0x2, 0xff, 0xfd, 0x3, 0x2, 
    0x2, 0x2, 0x100, 0x103, 0x3, 0x2, 0x2, 0x2, 0x101, 0xff, 0x3, 0x2, 0x2, 
    0x2, 0x101, 0x102, 0x3, 0x2, 0x2, 0x2, 0x102, 0x27, 0x3, 0x2, 0x2, 0x2, 
    0x103, 0x101, 0x3, 0x2, 0x2, 0x2, 0x104, 0x106, 0x7, 0x3e, 0x2, 0x2, 
    0x105, 0x104, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x3, 0x2, 0x2, 0x2, 
    0x106, 0x107, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x5, 0x2a, 0x16, 0x2, 
    0x108, 0x109, 0x7, 0xb, 0x2, 0x2, 0x109, 0x10a, 0x5, 0x3a, 0x1e, 0x2, 
    0x10a, 0x29, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10c, 0x5, 0x2c, 0x17, 0x2, 
    0x10c, 0x10d, 0x7, 0xc, 0x2, 0x2, 0x10d, 0x10e, 0x5, 0x2c, 0x17, 0x2, 
    0x10e, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x110, 0x7, 0x57, 0x2, 0x2, 
    0x110, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 0x5, 0x30, 0x19, 0x2, 
    0x112, 0x114, 0x7, 0xf, 0x2, 0x2, 0x113, 0x115, 0x5, 0x36, 0x1c, 0x2, 
    0x114, 0x113, 0x3, 0x2, 0x2, 0x2, 0x114, 0x115, 0x3, 0x2, 0x2, 0x2, 
    0x115, 0x116, 0x3, 0x2, 0x2, 0x2, 0x116, 0x117, 0x7, 0x10, 0x2, 0x2, 
    0x117, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 0x7, 0x57, 0x2, 0x2, 
    0x119, 0x31, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11b, 0x5, 0x34, 0x1b, 0x2, 
    0x11b, 0x11d, 0x7, 0xf, 0x2, 0x2, 0x11c, 0x11e, 0x5, 0x36, 0x1c, 0x2, 
    0x11d, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 0x3, 0x2, 0x2, 0x2, 
    0x11e, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x120, 0x7, 0x10, 0x2, 0x2, 
    0x120, 0x33, 0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 0x7, 0x57, 0x2, 0x2, 
    0x122, 0x35, 0x3, 0x2, 0x2, 0x2, 0x123, 0x128, 0x5, 0x38, 0x1d, 0x2, 
    0x124, 0x125, 0x7, 0xc, 0x2, 0x2, 0x125, 0x127, 0x5, 0x38, 0x1d, 0x2, 
    0x126, 0x124, 0x3, 0x2, 0x2, 0x2, 0x127, 0x12a, 0x3, 0x2, 0x2, 0x2, 
    0x128, 0x126, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x3, 0x2, 0x2, 0x2, 
    0x129, 0x37, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x128, 0x3, 0x2, 0x2, 0x2, 0x12b, 
    0x12c, 0x5, 0x52, 0x2a, 0x2, 0x12c, 0x39, 0x3, 0x2, 0x2, 0x2, 0x12d, 
    0x130, 0x5, 0x3c, 0x1f, 0x2, 0x12e, 0x130, 0x5, 0x3e, 0x20, 0x2, 0x12f, 
    0x12d, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x130, 
    0x3b, 0x3, 0x2, 0x2, 0x2, 0x131, 0x132, 0x7, 0x57, 0x2, 0x2, 0x132, 
    0x3d, 0x3, 0x2, 0x2, 0x2, 0x133, 0x134, 0x7, 0x23, 0x2, 0x2, 0x134, 
    0x135, 0x7, 0x15, 0x2, 0x2, 0x135, 0x136, 0x5, 0x40, 0x21, 0x2, 0x136, 
    0x137, 0x7, 0x16, 0x2, 0x2, 0x137, 0x138, 0x7, 0x3c, 0x2, 0x2, 0x138, 
    0x139, 0x5, 0x3a, 0x1e, 0x2, 0x139, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x13a, 
    0x13b, 0x7, 0x58, 0x2, 0x2, 0x13b, 0x13c, 0x7, 0x1f, 0x2, 0x2, 0x13c, 
    0x13d, 0x7, 0x58, 0x2, 0x2, 0x13d, 0x41, 0x3, 0x2, 0x2, 0x2, 0x13e, 
    0x13f, 0x7, 0x3f, 0x2, 0x2, 0x13f, 0x140, 0x5, 0x44, 0x23, 0x2, 0x140, 
    0x141, 0x7, 0x40, 0x2, 0x2, 0x141, 0x43, 0x3, 0x2, 0x2, 0x2, 0x142, 
    0x147, 0x5, 0x46, 0x24, 0x2, 0x143, 0x144, 0x7, 0xe, 0x2, 0x2, 0x144, 
    0x146, 0x5, 0x46, 0x24, 0x2, 0x145, 0x143, 0x3, 0x2, 0x2, 0x2, 0x146, 
    0x149, 0x3, 0x2, 0x2, 0x2, 0x147, 0x145, 0x3, 0x2, 0x2, 0x2, 0x147, 
    0x148, 0x3, 0x2, 0x2, 0x2, 0x148, 0x45, 0x3, 0x2, 0x2, 0x2, 0x149, 0x147, 
    0x3, 0x2, 0x2, 0x2, 0x14a, 0x156, 0x5, 0x42, 0x22, 0x2, 0x14b, 0x156, 
    0x5, 0x4a, 0x26, 0x2, 0x14c, 0x156, 0x5, 0x5a, 0x2e, 0x2, 0x14d, 0x156, 
    0x5, 0x5c, 0x2f, 0x2, 0x14e, 0x156, 0x5, 0x5e, 0x30, 0x2, 0x14f, 0x156, 
    0x5, 0x66, 0x34, 0x2, 0x150, 0x156, 0x5, 0x60, 0x31, 0x2, 0x151, 0x156, 
    0x5, 0x70, 0x39, 0x2, 0x152, 0x156, 0x5, 0x72, 0x3a, 0x2, 0x153, 0x156, 
    0x5, 0x2e, 0x18, 0x2, 0x154, 0x156, 0x5, 0x48, 0x25, 0x2, 0x155, 0x14a, 
    0x3, 0x2, 0x2, 0x2, 0x155, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x155, 0x14c, 
    0x3, 0x2, 0x2, 0x2, 0x155, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x155, 0x14e, 
    0x3, 0x2, 0x2, 0x2, 0x155, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x155, 0x150, 
    0x3, 0x2, 0x2, 0x2, 0x155, 0x151, 0x3, 0x2, 0x2, 0x2, 0x155, 0x152, 
    0x3, 0x2, 0x2, 0x2, 0x155, 0x153, 0x3, 0x2, 0x2, 0x2, 0x155, 0x154, 
    0x3, 0x2, 0x2, 0x2, 0x156, 0x47, 0x3, 0x2, 0x2, 0x2, 0x157, 0x158, 0x3, 
    0x2, 0x2, 0x2, 0x158, 0x49, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 0x5, 0x4c, 
    0x27, 0x2, 0x15a, 0x15b, 0x7, 0x17, 0x2, 0x2, 0x15b, 0x15c, 0x5, 0x4e, 
    0x28, 0x2, 0x15c, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x15e, 0x5, 0x50, 
    0x29, 0x2, 0x15e, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x160, 0x5, 0x52, 
    0x2a, 0x2, 0x160, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x161, 0x162, 0x7, 0x57, 
    0x2, 0x2, 0x162, 0x51, 0x3, 0x2, 0x2, 0x2, 0x163, 0x169, 0x5, 0x54, 
    0x2b, 0x2, 0x164, 0x165, 0x5, 0x7e, 0x40, 0x2, 0x165, 0x166, 0x5, 0x54, 
    0x2b, 0x2, 0x166, 0x168, 0x3, 0x2, 0x2, 0x2, 0x167, 0x164, 0x3, 0x2, 
    0x2, 0x2, 0x168, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x169, 0x167, 0x3, 0x2, 
    0x2, 0x2, 0x169, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x53, 0x3, 0x2, 0x2, 
    0x2, 0x16b, 0x169, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16e, 0x5, 0x7c, 0x3f, 
    0x2, 0x16d, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16e, 0x3, 0x2, 0x2, 
    0x2, 0x16e, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x175, 0x5, 0x56, 0x2c, 
    0x2, 0x170, 0x171, 0x5, 0x80, 0x41, 0x2, 0x171, 0x172, 0x5, 0x56, 0x2c, 
    0x2, 0x172, 0x174, 0x3, 0x2, 0x2, 0x2, 0x173, 0x170, 0x3, 0x2, 0x2, 
    0x2, 0x174, 0x177, 0x3, 0x2, 0x2, 0x2, 0x175, 0x173, 0x3, 0x2, 0x2, 
    0x2, 0x175, 0x176, 0x3, 0x2, 0x2, 0x2, 0x176, 0x55, 0x3, 0x2, 0x2, 0x2, 
    0x177, 0x175, 0x3, 0x2, 0x2, 0x2, 0x178, 0x17e, 0x5, 0x58, 0x2d, 0x2, 
    0x179, 0x17a, 0x5, 0x82, 0x42, 0x2, 0x17a, 0x17b, 0x5, 0x58, 0x2d, 0x2, 
    0x17b, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x179, 0x3, 0x2, 0x2, 0x2, 
    0x17d, 0x180, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x17c, 0x3, 0x2, 0x2, 0x2, 
    0x17e, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x57, 0x3, 0x2, 0x2, 0x2, 0x180, 
    0x17e, 0x3, 0x2, 0x2, 0x2, 0x181, 0x18d, 0x5, 0x50, 0x29, 0x2, 0x182, 
    0x18d, 0x5, 0x84, 0x43, 0x2, 0x183, 0x18d, 0x5, 0x88, 0x45, 0x2, 0x184, 
    0x18d, 0x5, 0x8a, 0x46, 0x2, 0x185, 0x186, 0x7, 0x45, 0x2, 0x2, 0x186, 
    0x18d, 0x5, 0x58, 0x2d, 0x2, 0x187, 0x188, 0x7, 0xf, 0x2, 0x2, 0x188, 
    0x189, 0x5, 0x52, 0x2a, 0x2, 0x189, 0x18a, 0x7, 0x10, 0x2, 0x2, 0x18a, 
    0x18d, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x18d, 0x5, 0x32, 0x1a, 0x2, 0x18c, 
    0x181, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x182, 0x3, 0x2, 0x2, 0x2, 0x18c, 
    0x183, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x184, 0x3, 0x2, 0x2, 0x2, 0x18c, 
    0x185, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x187, 0x3, 0x2, 0x2, 0x2, 0x18c, 
    0x18b, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x59, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x18f, 
    0x7, 0x4e, 0x2, 0x2, 0x18f, 0x190, 0x5, 0x4a, 0x26, 0x2, 0x190, 0x191, 
    0x9, 0x2, 0x2, 0x2, 0x191, 0x192, 0x5, 0x52, 0x2a, 0x2, 0x192, 0x193, 
    0x7, 0x4d, 0x2, 0x2, 0x193, 0x194, 0x5, 0x46, 0x24, 0x2, 0x194, 0x5b, 
    0x3, 0x2, 0x2, 0x2, 0x195, 0x196, 0x7, 0x4c, 0x2, 0x2, 0x196, 0x197, 
    0x5, 0x52, 0x2a, 0x2, 0x197, 0x198, 0x7, 0x4d, 0x2, 0x2, 0x198, 0x199, 
    0x5, 0x46, 0x24, 0x2, 0x199, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x19b, 
    0x7, 0x4a, 0x2, 0x2, 0x19b, 0x19c, 0x5, 0x44, 0x23, 0x2, 0x19c, 0x19d, 
    0x7, 0x4b, 0x2, 0x2, 0x19d, 0x19e, 0x5, 0x52, 0x2a, 0x2, 0x19e, 0x5f, 
    0x3, 0x2, 0x2, 0x2, 0x19f, 0x1a0, 0x7, 0x46, 0x2, 0x2, 0x1a0, 0x1a1, 
    0x5, 0x52, 0x2a, 0x2, 0x1a1, 0x1a2, 0x7, 0x47, 0x2, 0x2, 0x1a2, 0x1a5, 
    0x5, 0x62, 0x32, 0x2, 0x1a3, 0x1a4, 0x7, 0x48, 0x2, 0x2, 0x1a4, 0x1a6, 
    0x5, 0x64, 0x33, 0x2, 0x1a5, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a6, 
    0x3, 0x2, 0x2, 0x2, 0x1a6, 0x61, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a8, 0x5, 
    0x46, 0x24, 0x2, 0x1a8, 0x63, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1aa, 0x5, 
    0x46, 0x24, 0x2, 0x1aa, 0x65, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1ac, 0x7, 
    0x49, 0x2, 0x2, 0x1ac, 0x1ad, 0x5, 0x52, 0x2a, 0x2, 0x1ad, 0x1ae, 0x7, 
    0x3c, 0x2, 0x2, 0x1ae, 0x1af, 0x5, 0x68, 0x35, 0x2, 0x1af, 0x1b0, 0x7, 
    0x40, 0x2, 0x2, 0x1b0, 0x67, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b6, 0x5, 
    0x6a, 0x36, 0x2, 0x1b2, 0x1b3, 0x7, 0xe, 0x2, 0x2, 0x1b3, 0x1b5, 0x5, 
    0x6a, 0x36, 0x2, 0x1b4, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b8, 0x3, 
    0x2, 0x2, 0x2, 0x1b6, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b7, 0x3, 
    0x2, 0x2, 0x2, 0x1b7, 0x69, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b6, 0x3, 0x2, 
    0x2, 0x2, 0x1b9, 0x1ba, 0x5, 0x6c, 0x37, 0x2, 0x1ba, 0x1bb, 0x7, 0xb, 
    0x2, 0x2, 0x1bb, 0x1bc, 0x5, 0x46, 0x24, 0x2, 0x1bc, 0x6b, 0x3, 0x2, 
    0x2, 0x2, 0x1bd, 0x1c2, 0x5, 0x6e, 0x38, 0x2, 0x1be, 0x1bf, 0x7, 0xc, 
    0x2, 0x2, 0x1bf, 0x1c1, 0x5, 0x6e, 0x38, 0x2, 0x1c0, 0x1be, 0x3, 0x2, 
    0x2, 0x2, 0x1c1, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c0, 0x3, 0x2, 
    0x2, 0x2, 0x1c2, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x6d, 0x3, 0x2, 0x2, 
    0x2, 0x1c4, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c6, 0x5, 0x12, 0xa, 
    0x2, 0x1c6, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c8, 0x7, 0x51, 0x2, 
    0x2, 0x1c8, 0x1c9, 0x5, 0x74, 0x3b, 0x2, 0x1c9, 0x71, 0x3, 0x2, 0x2, 
    0x2, 0x1ca, 0x1cc, 0x7, 0x52, 0x2, 0x2, 0x1cb, 0x1cd, 0x5, 0x74, 0x3b, 
    0x2, 0x1cc, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x1cd, 0x3, 0x2, 0x2, 
    0x2, 0x1cd, 0x73, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1cf, 0x7, 0xf, 0x2, 0x2, 
    0x1cf, 0x1d4, 0x5, 0x76, 0x3c, 0x2, 0x1d0, 0x1d1, 0x7, 0xc, 0x2, 0x2, 
    0x1d1, 0x1d3, 0x5, 0x76, 0x3c, 0x2, 0x1d2, 0x1d0, 0x3, 0x2, 0x2, 0x2, 
    0x1d3, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d2, 0x3, 0x2, 0x2, 0x2, 
    0x1d4, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d7, 0x3, 0x2, 0x2, 0x2, 
    0x1d6, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d8, 0x7, 0x10, 0x2, 0x2, 
    0x1d8, 0x75, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1dc, 0x5, 0x52, 0x2a, 0x2, 
    0x1da, 0x1db, 0x7, 0xb, 0x2, 0x2, 0x1db, 0x1dd, 0x5, 0x78, 0x3d, 0x2, 
    0x1dc, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1dd, 0x3, 0x2, 0x2, 0x2, 
    0x1dd, 0x77, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1e1, 0x7, 0x58, 0x2, 0x2, 
    0x1df, 0x1e0, 0x7, 0xb, 0x2, 0x2, 0x1e0, 0x1e2, 0x5, 0x7a, 0x3e, 0x2, 
    0x1e1, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1e2, 0x3, 0x2, 0x2, 0x2, 
    0x1e2, 0x79, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e4, 0x7, 0x58, 0x2, 0x2, 
    0x1e4, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e6, 0x9, 0x3, 0x2, 0x2, 0x1e6, 
    0x7d, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e8, 0x9, 0x4, 0x2, 0x2, 0x1e8, 0x7f, 
    0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1ea, 0x9, 0x5, 0x2, 0x2, 0x1ea, 0x81, 0x3, 
    0x2, 0x2, 0x2, 0x1eb, 0x1ec, 0x9, 0x6, 0x2, 0x2, 0x1ec, 0x83, 0x3, 0x2, 
    0x2, 0x2, 0x1ed, 0x1ef, 0x5, 0x7c, 0x3f, 0x2, 0x1ee, 0x1ed, 0x3, 0x2, 
    0x2, 0x2, 0x1ee, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1f0, 0x3, 0x2, 
    0x2, 0x2, 0x1f0, 0x1f1, 0x5, 0x86, 0x44, 0x2, 0x1f1, 0x85, 0x3, 0x2, 
    0x2, 0x2, 0x1f2, 0x1f3, 0x9, 0x7, 0x2, 0x2, 0x1f3, 0x87, 0x3, 0x2, 0x2, 
    0x2, 0x1f4, 0x1f5, 0x7, 0x5d, 0x2, 0x2, 0x1f5, 0x89, 0x3, 0x2, 0x2, 
    0x2, 0x1f6, 0x1f7, 0x7, 0x5e, 0x2, 0x2, 0x1f7, 0x8b, 0x3, 0x2, 0x2, 
    0x2, 0x23, 0x9d, 0xa2, 0xa7, 0xb6, 0xbc, 0xc2, 0xd1, 0xd9, 0xe3, 0xe8, 
    0xf0, 0xf5, 0x101, 0x105, 0x114, 0x11d, 0x128, 0x12f, 0x147, 0x155, 
    0x169, 0x16d, 0x175, 0x17e, 0x18c, 0x1a5, 0x1b6, 0x1c2, 0x1cc, 0x1d4, 
    0x1dc, 0x1e1, 0x1ee, 
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
