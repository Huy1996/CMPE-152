
    #include <map>
    #include "intermediate/symtab/Symtab.h"
    #include "intermediate/type/Typespec.h"
    using namespace intermediate::symtab;
    using namespace intermediate::type;


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
    setState(164);
    program_header();
    setState(165);
    program_body();
    setState(166);
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
    setState(168);
    match(ExprParser::PROGRAM);
    setState(169);
    program_name();
    setState(170);
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
    setState(172);
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
    setState(174);
    program_declaration();
    setState(175);
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

ExprParser::Variable_sectionContext* ExprParser::Program_declarationContext::variable_section() {
  return getRuleContext<ExprParser::Variable_sectionContext>(0);
}

ExprParser::Routine_sectionContext* ExprParser::Program_declarationContext::routine_section() {
  return getRuleContext<ExprParser::Routine_sectionContext>(0);
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
    setState(180);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::CONST) {
      setState(177);
      constants_section();
      setState(178);
      match(ExprParser::SEMICOLON);
    }
    setState(185);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::TYPE) {
      setState(182);
      types_section();
      setState(183);
      match(ExprParser::SEMICOLON);
    }
    setState(190);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::VAR) {
      setState(187);
      variable_section();
      setState(188);
      match(ExprParser::SEMICOLON);
    }
    setState(195);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::PROCEDURE

    || _la == ExprParser::FUNCTION) {
      setState(192);
      routine_section();
      setState(193);
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

ExprParser::Constant_listContext* ExprParser::Constants_sectionContext::constant_list() {
  return getRuleContext<ExprParser::Constant_listContext>(0);
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
    setState(197);
    match(ExprParser::CONST);
    setState(198);
    constant_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Constant_listContext ------------------------------------------------------------------

ExprParser::Constant_listContext::Constant_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::Constant_definitionContext *> ExprParser::Constant_listContext::constant_definition() {
  return getRuleContexts<ExprParser::Constant_definitionContext>();
}

ExprParser::Constant_definitionContext* ExprParser::Constant_listContext::constant_definition(size_t i) {
  return getRuleContext<ExprParser::Constant_definitionContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::Constant_listContext::SEMICOLON() {
  return getTokens(ExprParser::SEMICOLON);
}

tree::TerminalNode* ExprParser::Constant_listContext::SEMICOLON(size_t i) {
  return getToken(ExprParser::SEMICOLON, i);
}


size_t ExprParser::Constant_listContext::getRuleIndex() const {
  return ExprParser::RuleConstant_list;
}


antlrcpp::Any ExprParser::Constant_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitConstant_list(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Constant_listContext* ExprParser::constant_list() {
  Constant_listContext *_localctx = _tracker.createInstance<Constant_listContext>(_ctx, getState());
  enterRule(_localctx, 12, ExprParser::RuleConstant_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(200);
    constant_definition();
    setState(205);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(201);
        match(ExprParser::SEMICOLON);
        setState(202);
        constant_definition(); 
      }
      setState(207);
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

//----------------- Constant_definitionContext ------------------------------------------------------------------

ExprParser::Constant_definitionContext::Constant_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Constant_nameContext* ExprParser::Constant_definitionContext::constant_name() {
  return getRuleContext<ExprParser::Constant_nameContext>(0);
}

tree::TerminalNode* ExprParser::Constant_definitionContext::EQUAL() {
  return getToken(ExprParser::EQUAL, 0);
}

ExprParser::ConstantContext* ExprParser::Constant_definitionContext::constant() {
  return getRuleContext<ExprParser::ConstantContext>(0);
}


size_t ExprParser::Constant_definitionContext::getRuleIndex() const {
  return ExprParser::RuleConstant_definition;
}


antlrcpp::Any ExprParser::Constant_definitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitConstant_definition(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Constant_definitionContext* ExprParser::constant_definition() {
  Constant_definitionContext *_localctx = _tracker.createInstance<Constant_definitionContext>(_ctx, getState());
  enterRule(_localctx, 14, ExprParser::RuleConstant_definition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(208);
    constant_name();
    setState(209);
    match(ExprParser::EQUAL);
    setState(210);
    constant();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Constant_nameContext ------------------------------------------------------------------

ExprParser::Constant_nameContext::Constant_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Constant_nameContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}


size_t ExprParser::Constant_nameContext::getRuleIndex() const {
  return ExprParser::RuleConstant_name;
}


antlrcpp::Any ExprParser::Constant_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitConstant_name(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Constant_nameContext* ExprParser::constant_name() {
  Constant_nameContext *_localctx = _tracker.createInstance<Constant_nameContext>(_ctx, getState());
  enterRule(_localctx, 16, ExprParser::RuleConstant_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(212);
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

ExprParser::Unsigned_numberContext* ExprParser::ConstantContext::unsigned_number() {
  return getRuleContext<ExprParser::Unsigned_numberContext>(0);
}

ExprParser::SignContext* ExprParser::ConstantContext::sign() {
  return getRuleContext<ExprParser::SignContext>(0);
}

ExprParser::Character_constantContext* ExprParser::ConstantContext::character_constant() {
  return getRuleContext<ExprParser::Character_constantContext>(0);
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
  enterRule(_localctx, 18, ExprParser::RuleConstant);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(223);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::PLUSOP:
      case ExprParser::MINUSOP:
      case ExprParser::IDENTIFIER:
      case ExprParser::INTEGER:
      case ExprParser::REAL: {
        enterOuterAlt(_localctx, 1);
        setState(215);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ExprParser::PLUSOP

        || _la == ExprParser::MINUSOP) {
          setState(214);
          sign();
        }
        setState(219);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case ExprParser::IDENTIFIER: {
            setState(217);
            match(ExprParser::IDENTIFIER);
            break;
          }

          case ExprParser::INTEGER:
          case ExprParser::REAL: {
            setState(218);
            unsigned_number();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

      case ExprParser::CHARACTER: {
        enterOuterAlt(_localctx, 2);
        setState(221);
        character_constant();
        break;
      }

      case ExprParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(222);
        string_constant();
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

//----------------- Types_sectionContext ------------------------------------------------------------------

ExprParser::Types_sectionContext::Types_sectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Types_sectionContext::TYPE() {
  return getToken(ExprParser::TYPE, 0);
}

ExprParser::Type_declaration_listContext* ExprParser::Types_sectionContext::type_declaration_list() {
  return getRuleContext<ExprParser::Type_declaration_listContext>(0);
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
  enterRule(_localctx, 20, ExprParser::RuleTypes_section);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(225);
    match(ExprParser::TYPE);
    setState(226);
    type_declaration_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_declaration_listContext ------------------------------------------------------------------

ExprParser::Type_declaration_listContext::Type_declaration_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::Type_declarationContext *> ExprParser::Type_declaration_listContext::type_declaration() {
  return getRuleContexts<ExprParser::Type_declarationContext>();
}

ExprParser::Type_declarationContext* ExprParser::Type_declaration_listContext::type_declaration(size_t i) {
  return getRuleContext<ExprParser::Type_declarationContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::Type_declaration_listContext::SEMICOLON() {
  return getTokens(ExprParser::SEMICOLON);
}

tree::TerminalNode* ExprParser::Type_declaration_listContext::SEMICOLON(size_t i) {
  return getToken(ExprParser::SEMICOLON, i);
}


size_t ExprParser::Type_declaration_listContext::getRuleIndex() const {
  return ExprParser::RuleType_declaration_list;
}


antlrcpp::Any ExprParser::Type_declaration_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitType_declaration_list(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Type_declaration_listContext* ExprParser::type_declaration_list() {
  Type_declaration_listContext *_localctx = _tracker.createInstance<Type_declaration_listContext>(_ctx, getState());
  enterRule(_localctx, 22, ExprParser::RuleType_declaration_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(228);
    type_declaration();
    setState(233);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(229);
        match(ExprParser::SEMICOLON);
        setState(230);
        type_declaration(); 
      }
      setState(235);
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

//----------------- Type_declarationContext ------------------------------------------------------------------

ExprParser::Type_declarationContext::Type_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Type_identifierContext* ExprParser::Type_declarationContext::type_identifier() {
  return getRuleContext<ExprParser::Type_identifierContext>(0);
}

tree::TerminalNode* ExprParser::Type_declarationContext::EQUAL() {
  return getToken(ExprParser::EQUAL, 0);
}

ExprParser::Data_typeContext* ExprParser::Type_declarationContext::data_type() {
  return getRuleContext<ExprParser::Data_typeContext>(0);
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
  enterRule(_localctx, 24, ExprParser::RuleType_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(236);
    type_identifier();
    setState(237);
    match(ExprParser::EQUAL);
    setState(238);
    data_type();
   
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
  enterRule(_localctx, 26, ExprParser::RuleType_identifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(240);
    match(ExprParser::IDENTIFIER);
   
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


size_t ExprParser::Data_typeContext::getRuleIndex() const {
  return ExprParser::RuleData_type;
}

void ExprParser::Data_typeContext::copyFrom(Data_typeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- Array_type_specContext ------------------------------------------------------------------

ExprParser::Array_typeContext* ExprParser::Array_type_specContext::array_type() {
  return getRuleContext<ExprParser::Array_typeContext>(0);
}

ExprParser::Array_type_specContext::Array_type_specContext(Data_typeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Array_type_specContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitArray_type_spec(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Simple_type_specContext ------------------------------------------------------------------

ExprParser::Simple_typeContext* ExprParser::Simple_type_specContext::simple_type() {
  return getRuleContext<ExprParser::Simple_typeContext>(0);
}

ExprParser::Simple_type_specContext::Simple_type_specContext(Data_typeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Simple_type_specContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitSimple_type_spec(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::Data_typeContext* ExprParser::data_type() {
  Data_typeContext *_localctx = _tracker.createInstance<Data_typeContext>(_ctx, getState());
  enterRule(_localctx, 28, ExprParser::RuleData_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(244);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::PLUSOP:
      case ExprParser::MINUSOP:
      case ExprParser::IDENTIFIER:
      case ExprParser::INTEGER:
      case ExprParser::REAL:
      case ExprParser::CHARACTER:
      case ExprParser::STRING: {
        _localctx = dynamic_cast<Data_typeContext *>(_tracker.createInstance<ExprParser::Simple_type_specContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(242);
        simple_type();
        break;
      }

      case ExprParser::ARRAY: {
        _localctx = dynamic_cast<Data_typeContext *>(_tracker.createInstance<ExprParser::Array_type_specContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(243);
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

//----------------- Simple_typeContext ------------------------------------------------------------------

ExprParser::Simple_typeContext::Simple_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::Simple_typeContext::getRuleIndex() const {
  return ExprParser::RuleSimple_type;
}

void ExprParser::Simple_typeContext::copyFrom(Simple_typeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- Type_identifier_type_specContext ------------------------------------------------------------------

ExprParser::Type_identifierContext* ExprParser::Type_identifier_type_specContext::type_identifier() {
  return getRuleContext<ExprParser::Type_identifierContext>(0);
}

ExprParser::Type_identifier_type_specContext::Type_identifier_type_specContext(Simple_typeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Type_identifier_type_specContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitType_identifier_type_spec(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Subrange_type_specContext ------------------------------------------------------------------

ExprParser::Subrange_typeContext* ExprParser::Subrange_type_specContext::subrange_type() {
  return getRuleContext<ExprParser::Subrange_typeContext>(0);
}

ExprParser::Subrange_type_specContext::Subrange_type_specContext(Simple_typeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Subrange_type_specContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitSubrange_type_spec(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::Simple_typeContext* ExprParser::simple_type() {
  Simple_typeContext *_localctx = _tracker.createInstance<Simple_typeContext>(_ctx, getState());
  enterRule(_localctx, 30, ExprParser::RuleSimple_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(248);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Simple_typeContext *>(_tracker.createInstance<ExprParser::Type_identifier_type_specContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(246);
      type_identifier();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Simple_typeContext *>(_tracker.createInstance<ExprParser::Subrange_type_specContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(247);
      subrange_type();
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

ExprParser::Variable_declaration_listContext* ExprParser::Variable_sectionContext::variable_declaration_list() {
  return getRuleContext<ExprParser::Variable_declaration_listContext>(0);
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
  enterRule(_localctx, 32, ExprParser::RuleVariable_section);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(250);
    match(ExprParser::VAR);
    setState(251);
    variable_declaration_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_declaration_listContext ------------------------------------------------------------------

ExprParser::Variable_declaration_listContext::Variable_declaration_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::Variable_declarationContext *> ExprParser::Variable_declaration_listContext::variable_declaration() {
  return getRuleContexts<ExprParser::Variable_declarationContext>();
}

ExprParser::Variable_declarationContext* ExprParser::Variable_declaration_listContext::variable_declaration(size_t i) {
  return getRuleContext<ExprParser::Variable_declarationContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::Variable_declaration_listContext::SEMICOLON() {
  return getTokens(ExprParser::SEMICOLON);
}

tree::TerminalNode* ExprParser::Variable_declaration_listContext::SEMICOLON(size_t i) {
  return getToken(ExprParser::SEMICOLON, i);
}


size_t ExprParser::Variable_declaration_listContext::getRuleIndex() const {
  return ExprParser::RuleVariable_declaration_list;
}


antlrcpp::Any ExprParser::Variable_declaration_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitVariable_declaration_list(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Variable_declaration_listContext* ExprParser::variable_declaration_list() {
  Variable_declaration_listContext *_localctx = _tracker.createInstance<Variable_declaration_listContext>(_ctx, getState());
  enterRule(_localctx, 34, ExprParser::RuleVariable_declaration_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(253);
    variable_declaration();
    setState(258);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(254);
        match(ExprParser::SEMICOLON);
        setState(255);
        variable_declaration(); 
      }
      setState(260);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_declarationContext ------------------------------------------------------------------

ExprParser::Variable_declarationContext::Variable_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Variable_name_listContext* ExprParser::Variable_declarationContext::variable_name_list() {
  return getRuleContext<ExprParser::Variable_name_listContext>(0);
}

tree::TerminalNode* ExprParser::Variable_declarationContext::COLON() {
  return getToken(ExprParser::COLON, 0);
}

ExprParser::Data_typeContext* ExprParser::Variable_declarationContext::data_type() {
  return getRuleContext<ExprParser::Data_typeContext>(0);
}


size_t ExprParser::Variable_declarationContext::getRuleIndex() const {
  return ExprParser::RuleVariable_declaration;
}


antlrcpp::Any ExprParser::Variable_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitVariable_declaration(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Variable_declarationContext* ExprParser::variable_declaration() {
  Variable_declarationContext *_localctx = _tracker.createInstance<Variable_declarationContext>(_ctx, getState());
  enterRule(_localctx, 36, ExprParser::RuleVariable_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(261);
    variable_name_list();
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

//----------------- Variable_name_listContext ------------------------------------------------------------------

ExprParser::Variable_name_listContext::Variable_name_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::Variable_nameContext *> ExprParser::Variable_name_listContext::variable_name() {
  return getRuleContexts<ExprParser::Variable_nameContext>();
}

ExprParser::Variable_nameContext* ExprParser::Variable_name_listContext::variable_name(size_t i) {
  return getRuleContext<ExprParser::Variable_nameContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::Variable_name_listContext::COMMA() {
  return getTokens(ExprParser::COMMA);
}

tree::TerminalNode* ExprParser::Variable_name_listContext::COMMA(size_t i) {
  return getToken(ExprParser::COMMA, i);
}


size_t ExprParser::Variable_name_listContext::getRuleIndex() const {
  return ExprParser::RuleVariable_name_list;
}


antlrcpp::Any ExprParser::Variable_name_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitVariable_name_list(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Variable_name_listContext* ExprParser::variable_name_list() {
  Variable_name_listContext *_localctx = _tracker.createInstance<Variable_name_listContext>(_ctx, getState());
  enterRule(_localctx, 38, ExprParser::RuleVariable_name_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(265);
    variable_name();
    setState(270);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::COMMA) {
      setState(266);
      match(ExprParser::COMMA);
      setState(267);
      variable_name();
      setState(272);
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

//----------------- Variable_nameContext ------------------------------------------------------------------

ExprParser::Variable_nameContext::Variable_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Variable_nameContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}


size_t ExprParser::Variable_nameContext::getRuleIndex() const {
  return ExprParser::RuleVariable_name;
}


antlrcpp::Any ExprParser::Variable_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitVariable_name(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Variable_nameContext* ExprParser::variable_name() {
  Variable_nameContext *_localctx = _tracker.createInstance<Variable_nameContext>(_ctx, getState());
  enterRule(_localctx, 40, ExprParser::RuleVariable_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(273);
    match(ExprParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Subrange_typeContext ------------------------------------------------------------------

ExprParser::Subrange_typeContext::Subrange_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::ConstantContext *> ExprParser::Subrange_typeContext::constant() {
  return getRuleContexts<ExprParser::ConstantContext>();
}

ExprParser::ConstantContext* ExprParser::Subrange_typeContext::constant(size_t i) {
  return getRuleContext<ExprParser::ConstantContext>(i);
}

tree::TerminalNode* ExprParser::Subrange_typeContext::DOTDOT() {
  return getToken(ExprParser::DOTDOT, 0);
}


size_t ExprParser::Subrange_typeContext::getRuleIndex() const {
  return ExprParser::RuleSubrange_type;
}


antlrcpp::Any ExprParser::Subrange_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitSubrange_type(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Subrange_typeContext* ExprParser::subrange_type() {
  Subrange_typeContext *_localctx = _tracker.createInstance<Subrange_typeContext>(_ctx, getState());
  enterRule(_localctx, 42, ExprParser::RuleSubrange_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(275);
    constant();
    setState(276);
    match(ExprParser::DOTDOT);
    setState(277);
    constant();
   
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

tree::TerminalNode* ExprParser::Array_typeContext::LBRACKET() {
  return getToken(ExprParser::LBRACKET, 0);
}

ExprParser::Array_declarationContext* ExprParser::Array_typeContext::array_declaration() {
  return getRuleContext<ExprParser::Array_declarationContext>(0);
}

tree::TerminalNode* ExprParser::Array_typeContext::RBRACKET() {
  return getToken(ExprParser::RBRACKET, 0);
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
  enterRule(_localctx, 44, ExprParser::RuleArray_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(279);
    match(ExprParser::ARRAY);
    setState(280);
    match(ExprParser::LBRACKET);
    setState(281);
    array_declaration();
    setState(282);
    match(ExprParser::RBRACKET);
    setState(283);
    match(ExprParser::OF);
    setState(284);
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

std::vector<ExprParser::Simple_typeContext *> ExprParser::Array_declarationContext::simple_type() {
  return getRuleContexts<ExprParser::Simple_typeContext>();
}

ExprParser::Simple_typeContext* ExprParser::Array_declarationContext::simple_type(size_t i) {
  return getRuleContext<ExprParser::Simple_typeContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::Array_declarationContext::COMMA() {
  return getTokens(ExprParser::COMMA);
}

tree::TerminalNode* ExprParser::Array_declarationContext::COMMA(size_t i) {
  return getToken(ExprParser::COMMA, i);
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
  enterRule(_localctx, 46, ExprParser::RuleArray_declaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(286);
    simple_type();
    setState(291);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::COMMA) {
      setState(287);
      match(ExprParser::COMMA);
      setState(288);
      simple_type();
      setState(293);
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
  enterRule(_localctx, 48, ExprParser::RuleRoutine_section);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(294);
    routine_declaration();
    setState(299);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(295);
        match(ExprParser::SEMICOLON);
        setState(296);
        routine_declaration(); 
      }
      setState(301);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
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
  enterRule(_localctx, 50, ExprParser::RuleRoutine_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(304);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::PROCEDURE: {
        setState(302);
        procedure();
        break;
      }

      case ExprParser::FUNCTION: {
        setState(303);
        function();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(306);
    match(ExprParser::SEMICOLON);
    setState(307);
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

ExprParser::ParametersContext* ExprParser::ProcedureContext::parameters() {
  return getRuleContext<ExprParser::ParametersContext>(0);
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
  enterRule(_localctx, 52, ExprParser::RuleProcedure);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(309);
    match(ExprParser::PROCEDURE);
    setState(310);
    routine_name();
    setState(312);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::LPAREN) {
      setState(311);
      parameters();
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

ExprParser::Type_identifierContext* ExprParser::FunctionContext::type_identifier() {
  return getRuleContext<ExprParser::Type_identifierContext>(0);
}

ExprParser::ParametersContext* ExprParser::FunctionContext::parameters() {
  return getRuleContext<ExprParser::ParametersContext>(0);
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
  enterRule(_localctx, 54, ExprParser::RuleFunction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(314);
    match(ExprParser::FUNCTION);
    setState(315);
    routine_name();
    setState(317);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::LPAREN) {
      setState(316);
      parameters();
    }
    setState(319);
    match(ExprParser::COLON);
    setState(320);
    type_identifier();
   
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
  enterRule(_localctx, 56, ExprParser::RuleRoutine_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(322);
    match(ExprParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametersContext ------------------------------------------------------------------

ExprParser::ParametersContext::ParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::ParametersContext::LPAREN() {
  return getToken(ExprParser::LPAREN, 0);
}

ExprParser::Parameter_listContext* ExprParser::ParametersContext::parameter_list() {
  return getRuleContext<ExprParser::Parameter_listContext>(0);
}

tree::TerminalNode* ExprParser::ParametersContext::RPAREN() {
  return getToken(ExprParser::RPAREN, 0);
}


size_t ExprParser::ParametersContext::getRuleIndex() const {
  return ExprParser::RuleParameters;
}


antlrcpp::Any ExprParser::ParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitParameters(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ParametersContext* ExprParser::parameters() {
  ParametersContext *_localctx = _tracker.createInstance<ParametersContext>(_ctx, getState());
  enterRule(_localctx, 58, ExprParser::RuleParameters);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(324);
    match(ExprParser::LPAREN);
    setState(325);
    parameter_list();
    setState(326);
    match(ExprParser::RPAREN);
   
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
  enterRule(_localctx, 60, ExprParser::RuleParameter_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(328);
    parameter_declaration();
    setState(333);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::SEMICOLON) {
      setState(329);
      match(ExprParser::SEMICOLON);
      setState(330);
      parameter_declaration();
      setState(335);
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

ExprParser::Type_identifierContext* ExprParser::Parameter_declarationContext::type_identifier() {
  return getRuleContext<ExprParser::Type_identifierContext>(0);
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
  enterRule(_localctx, 62, ExprParser::RuleParameter_declaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(337);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::VAR) {
      setState(336);
      match(ExprParser::VAR);
    }
    setState(339);
    parameter_name_list();
    setState(340);
    match(ExprParser::COLON);
    setState(341);
    type_identifier();
   
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

std::vector<tree::TerminalNode *> ExprParser::Parameter_name_listContext::COMMA() {
  return getTokens(ExprParser::COMMA);
}

tree::TerminalNode* ExprParser::Parameter_name_listContext::COMMA(size_t i) {
  return getToken(ExprParser::COMMA, i);
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
  enterRule(_localctx, 64, ExprParser::RuleParameter_name_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(343);
    parameter_name();
    setState(348);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::COMMA) {
      setState(344);
      match(ExprParser::COMMA);
      setState(345);
      parameter_name();
      setState(350);
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
  enterRule(_localctx, 66, ExprParser::RuleParameter_name);

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

ExprParser::If_statementContext* ExprParser::StatementContext::if_statement() {
  return getRuleContext<ExprParser::If_statementContext>(0);
}

ExprParser::Case_statementContext* ExprParser::StatementContext::case_statement() {
  return getRuleContext<ExprParser::Case_statementContext>(0);
}

ExprParser::Repeat_statementContext* ExprParser::StatementContext::repeat_statement() {
  return getRuleContext<ExprParser::Repeat_statementContext>(0);
}

ExprParser::While_statementContext* ExprParser::StatementContext::while_statement() {
  return getRuleContext<ExprParser::While_statementContext>(0);
}

ExprParser::For_statementContext* ExprParser::StatementContext::for_statement() {
  return getRuleContext<ExprParser::For_statementContext>(0);
}

ExprParser::Write_statementContext* ExprParser::StatementContext::write_statement() {
  return getRuleContext<ExprParser::Write_statementContext>(0);
}

ExprParser::Writeln_statementContext* ExprParser::StatementContext::writeln_statement() {
  return getRuleContext<ExprParser::Writeln_statementContext>(0);
}

ExprParser::Procedure_callContext* ExprParser::StatementContext::procedure_call() {
  return getRuleContext<ExprParser::Procedure_callContext>(0);
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
    setState(363);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(353);
      compound_statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(354);
      assign_statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(355);
      if_statement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(356);
      case_statement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(357);
      repeat_statement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(358);
      while_statement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(359);
      for_statement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(360);
      write_statement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(361);
      writeln_statement();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(362);
      procedure_call();
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
  enterRule(_localctx, 70, ExprParser::RuleCompound_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(365);
    match(ExprParser::BEGIN);
    setState(366);
    statement_list();
    setState(367);
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
  enterRule(_localctx, 72, ExprParser::RuleStatement_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(369);
    statement();
    setState(374);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(370);
        match(ExprParser::SEMICOLON);
        setState(371);
        statement(); 
      }
      setState(376);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    }
    setState(378);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::SEMICOLON) {
      setState(377);
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
  enterRule(_localctx, 74, ExprParser::RuleAssign_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(380);
    lhs();
    setState(381);
    match(ExprParser::ASSIGN);
    setState(382);
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
  enterRule(_localctx, 76, ExprParser::RuleLhs);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(384);
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
  enterRule(_localctx, 78, ExprParser::RuleRhs);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(386);
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

ExprParser::False_statementContext* ExprParser::If_statementContext::false_statement() {
  return getRuleContext<ExprParser::False_statementContext>(0);
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
  enterRule(_localctx, 80, ExprParser::RuleIf_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(388);
    match(ExprParser::IF);
    setState(389);
    expression();
    setState(390);
    match(ExprParser::THEN);
    setState(391);
    true_statement();
    setState(394);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      setState(392);
      match(ExprParser::ELSE);
      setState(393);
      false_statement();
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
  enterRule(_localctx, 82, ExprParser::RuleTrue_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(396);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- False_statementContext ------------------------------------------------------------------

ExprParser::False_statementContext::False_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::StatementContext* ExprParser::False_statementContext::statement() {
  return getRuleContext<ExprParser::StatementContext>(0);
}


size_t ExprParser::False_statementContext::getRuleIndex() const {
  return ExprParser::RuleFalse_statement;
}


antlrcpp::Any ExprParser::False_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitFalse_statement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::False_statementContext* ExprParser::false_statement() {
  False_statementContext *_localctx = _tracker.createInstance<False_statementContext>(_ctx, getState());
  enterRule(_localctx, 84, ExprParser::RuleFalse_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(398);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Case_statementContext ------------------------------------------------------------------

ExprParser::Case_statementContext::Case_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Case_statementContext::CASE() {
  return getToken(ExprParser::CASE, 0);
}

ExprParser::ExpressionContext* ExprParser::Case_statementContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

tree::TerminalNode* ExprParser::Case_statementContext::OF() {
  return getToken(ExprParser::OF, 0);
}

ExprParser::Case_branch_listContext* ExprParser::Case_statementContext::case_branch_list() {
  return getRuleContext<ExprParser::Case_branch_listContext>(0);
}

tree::TerminalNode* ExprParser::Case_statementContext::END() {
  return getToken(ExprParser::END, 0);
}


size_t ExprParser::Case_statementContext::getRuleIndex() const {
  return ExprParser::RuleCase_statement;
}


antlrcpp::Any ExprParser::Case_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitCase_statement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Case_statementContext* ExprParser::case_statement() {
  Case_statementContext *_localctx = _tracker.createInstance<Case_statementContext>(_ctx, getState());
  enterRule(_localctx, 86, ExprParser::RuleCase_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(400);
    match(ExprParser::CASE);
    setState(401);
    expression();
    setState(402);
    match(ExprParser::OF);
    setState(403);
    case_branch_list();
    setState(404);
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
  enterRule(_localctx, 88, ExprParser::RuleCase_branch_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(406);
    case_branch();
    setState(411);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::SEMICOLON) {
      setState(407);
      match(ExprParser::SEMICOLON);
      setState(408);
      case_branch();
      setState(413);
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
  enterRule(_localctx, 90, ExprParser::RuleCase_branch);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(419);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::PLUSOP:
      case ExprParser::MINUSOP:
      case ExprParser::IDENTIFIER:
      case ExprParser::INTEGER:
      case ExprParser::REAL:
      case ExprParser::CHARACTER:
      case ExprParser::STRING: {
        enterOuterAlt(_localctx, 1);
        setState(414);
        case_constant_list();
        setState(415);
        match(ExprParser::COLON);
        setState(416);
        statement();
        break;
      }

      case ExprParser::SEMICOLON:
      case ExprParser::END: {
        enterOuterAlt(_localctx, 2);

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
  enterRule(_localctx, 92, ExprParser::RuleCase_constant_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(421);
    case_constant();
    setState(426);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::COMMA) {
      setState(422);
      match(ExprParser::COMMA);
      setState(423);
      case_constant();
      setState(428);
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
  enterRule(_localctx, 94, ExprParser::RuleCase_constant);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(429);
    constant();
   
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
  enterRule(_localctx, 96, ExprParser::RuleRepeat_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(431);
    match(ExprParser::REPEAT);
    setState(432);
    statement_list();
    setState(433);
    match(ExprParser::UNTIL);
    setState(434);
    expression();
   
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
    setState(436);
    match(ExprParser::WHILE);
    setState(437);
    expression();
    setState(438);
    match(ExprParser::DO);
    setState(439);
    statement();
   
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

ExprParser::VariableContext* ExprParser::For_statementContext::variable() {
  return getRuleContext<ExprParser::VariableContext>(0);
}

tree::TerminalNode* ExprParser::For_statementContext::ASSIGN() {
  return getToken(ExprParser::ASSIGN, 0);
}

std::vector<ExprParser::ExpressionContext *> ExprParser::For_statementContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::For_statementContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
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
  enterRule(_localctx, 100, ExprParser::RuleFor_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(441);
    match(ExprParser::FOR);
    setState(442);
    variable();
    setState(443);
    match(ExprParser::ASSIGN);
    setState(444);
    expression();
    setState(445);
    _la = _input->LA(1);
    if (!(_la == ExprParser::TO

    || _la == ExprParser::DOWNTO)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(446);
    expression();
    setState(447);
    match(ExprParser::DO);
    setState(448);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Procedure_callContext ------------------------------------------------------------------

ExprParser::Procedure_callContext::Procedure_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Procedure_nameContext* ExprParser::Procedure_callContext::procedure_name() {
  return getRuleContext<ExprParser::Procedure_nameContext>(0);
}

tree::TerminalNode* ExprParser::Procedure_callContext::LPAREN() {
  return getToken(ExprParser::LPAREN, 0);
}

tree::TerminalNode* ExprParser::Procedure_callContext::RPAREN() {
  return getToken(ExprParser::RPAREN, 0);
}

ExprParser::Argument_listContext* ExprParser::Procedure_callContext::argument_list() {
  return getRuleContext<ExprParser::Argument_listContext>(0);
}


size_t ExprParser::Procedure_callContext::getRuleIndex() const {
  return ExprParser::RuleProcedure_call;
}


antlrcpp::Any ExprParser::Procedure_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitProcedure_call(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Procedure_callContext* ExprParser::procedure_call() {
  Procedure_callContext *_localctx = _tracker.createInstance<Procedure_callContext>(_ctx, getState());
  enterRule(_localctx, 102, ExprParser::RuleProcedure_call);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(450);
    procedure_name();
    setState(451);
    match(ExprParser::LPAREN);
    setState(453);
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
      setState(452);
      argument_list();
    }
    setState(455);
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
  enterRule(_localctx, 104, ExprParser::RuleProcedure_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(457);
    match(ExprParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_callContext ------------------------------------------------------------------

ExprParser::Function_callContext::Function_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Function_nameContext* ExprParser::Function_callContext::function_name() {
  return getRuleContext<ExprParser::Function_nameContext>(0);
}

tree::TerminalNode* ExprParser::Function_callContext::LPAREN() {
  return getToken(ExprParser::LPAREN, 0);
}

tree::TerminalNode* ExprParser::Function_callContext::RPAREN() {
  return getToken(ExprParser::RPAREN, 0);
}

ExprParser::Argument_listContext* ExprParser::Function_callContext::argument_list() {
  return getRuleContext<ExprParser::Argument_listContext>(0);
}


size_t ExprParser::Function_callContext::getRuleIndex() const {
  return ExprParser::RuleFunction_call;
}


antlrcpp::Any ExprParser::Function_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitFunction_call(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Function_callContext* ExprParser::function_call() {
  Function_callContext *_localctx = _tracker.createInstance<Function_callContext>(_ctx, getState());
  enterRule(_localctx, 106, ExprParser::RuleFunction_call);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(459);
    function_name();
    setState(460);
    match(ExprParser::LPAREN);
    setState(462);
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
      setState(461);
      argument_list();
    }
    setState(464);
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
  enterRule(_localctx, 108, ExprParser::RuleFunction_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(466);
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
  enterRule(_localctx, 110, ExprParser::RuleArgument_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(468);
    argument();
    setState(473);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::COMMA) {
      setState(469);
      match(ExprParser::COMMA);
      setState(470);
      argument();
      setState(475);
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
  enterRule(_localctx, 112, ExprParser::RuleArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(476);
    expression();
   
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
  enterRule(_localctx, 114, ExprParser::RuleWrite_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(478);
    match(ExprParser::WRITE);
    setState(479);
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
  enterRule(_localctx, 116, ExprParser::RuleWriteln_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(481);
    match(ExprParser::WRITELN);
    setState(483);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::LPAREN) {
      setState(482);
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
  enterRule(_localctx, 118, ExprParser::RuleWrite_argument_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(485);
    match(ExprParser::LPAREN);
    setState(486);
    write_argument();
    setState(491);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::COMMA) {
      setState(487);
      match(ExprParser::COMMA);
      setState(488);
      write_argument();
      setState(493);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(494);
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
  enterRule(_localctx, 120, ExprParser::RuleWrite_argument);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(496);
    expression();
    setState(499);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::COLON) {
      setState(497);
      match(ExprParser::COLON);
      setState(498);
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

ExprParser::Integer_constantContext* ExprParser::WidthContext::integer_constant() {
  return getRuleContext<ExprParser::Integer_constantContext>(0);
}

ExprParser::SignContext* ExprParser::WidthContext::sign() {
  return getRuleContext<ExprParser::SignContext>(0);
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
  enterRule(_localctx, 122, ExprParser::RuleWidth);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(502);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::PLUSOP

    || _la == ExprParser::MINUSOP) {
      setState(501);
      sign();
    }
    setState(504);
    integer_constant();
    setState(507);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::COLON) {
      setState(505);
      match(ExprParser::COLON);
      setState(506);
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

ExprParser::Integer_constantContext* ExprParser::Decimal_placeContext::integer_constant() {
  return getRuleContext<ExprParser::Integer_constantContext>(0);
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
  enterRule(_localctx, 124, ExprParser::RuleDecimal_place);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(509);
    integer_constant();
   
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

std::vector<ExprParser::SimpleExpressionContext *> ExprParser::ExpressionContext::simpleExpression() {
  return getRuleContexts<ExprParser::SimpleExpressionContext>();
}

ExprParser::SimpleExpressionContext* ExprParser::ExpressionContext::simpleExpression(size_t i) {
  return getRuleContext<ExprParser::SimpleExpressionContext>(i);
}

ExprParser::Relational_operatorContext* ExprParser::ExpressionContext::relational_operator() {
  return getRuleContext<ExprParser::Relational_operatorContext>(0);
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
  enterRule(_localctx, 126, ExprParser::RuleExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(511);
    simpleExpression();
    setState(515);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::EQUAL)
      | (1ULL << ExprParser::LT)
      | (1ULL << ExprParser::GT)
      | (1ULL << ExprParser::NE)
      | (1ULL << ExprParser::LTEQ)
      | (1ULL << ExprParser::GTEQ))) != 0)) {
      setState(512);
      relational_operator();
      setState(513);
      simpleExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleExpressionContext ------------------------------------------------------------------

ExprParser::SimpleExpressionContext::SimpleExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::TermContext *> ExprParser::SimpleExpressionContext::term() {
  return getRuleContexts<ExprParser::TermContext>();
}

ExprParser::TermContext* ExprParser::SimpleExpressionContext::term(size_t i) {
  return getRuleContext<ExprParser::TermContext>(i);
}

ExprParser::SignContext* ExprParser::SimpleExpressionContext::sign() {
  return getRuleContext<ExprParser::SignContext>(0);
}

std::vector<ExprParser::Expression_operatorContext *> ExprParser::SimpleExpressionContext::expression_operator() {
  return getRuleContexts<ExprParser::Expression_operatorContext>();
}

ExprParser::Expression_operatorContext* ExprParser::SimpleExpressionContext::expression_operator(size_t i) {
  return getRuleContext<ExprParser::Expression_operatorContext>(i);
}


size_t ExprParser::SimpleExpressionContext::getRuleIndex() const {
  return ExprParser::RuleSimpleExpression;
}


antlrcpp::Any ExprParser::SimpleExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitSimpleExpression(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::SimpleExpressionContext* ExprParser::simpleExpression() {
  SimpleExpressionContext *_localctx = _tracker.createInstance<SimpleExpressionContext>(_ctx, getState());
  enterRule(_localctx, 128, ExprParser::RuleSimpleExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(518);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      setState(517);
      sign();
      break;
    }

    }
    setState(520);
    term();
    setState(526);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::PLUSOP

    || _la == ExprParser::MINUSOP || _la == ExprParser::OR) {
      setState(521);
      expression_operator();
      setState(522);
      term();
      setState(528);
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

//----------------- TermContext ------------------------------------------------------------------

ExprParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::FactorContext *> ExprParser::TermContext::factor() {
  return getRuleContexts<ExprParser::FactorContext>();
}

ExprParser::FactorContext* ExprParser::TermContext::factor(size_t i) {
  return getRuleContext<ExprParser::FactorContext>(i);
}

std::vector<ExprParser::Term_operatorContext *> ExprParser::TermContext::term_operator() {
  return getRuleContexts<ExprParser::Term_operatorContext>();
}

ExprParser::Term_operatorContext* ExprParser::TermContext::term_operator(size_t i) {
  return getRuleContext<ExprParser::Term_operatorContext>(i);
}


size_t ExprParser::TermContext::getRuleIndex() const {
  return ExprParser::RuleTerm;
}


antlrcpp::Any ExprParser::TermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitTerm(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::TermContext* ExprParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 130, ExprParser::RuleTerm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(529);
    factor();
    setState(535);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 3) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 3)) & ((1ULL << (ExprParser::MULTOP - 3))
      | (1ULL << (ExprParser::DIVOP - 3))
      | (1ULL << (ExprParser::DIV - 3))
      | (1ULL << (ExprParser::MOD - 3))
      | (1ULL << (ExprParser::AND - 3)))) != 0)) {
      setState(530);
      term_operator();
      setState(531);
      factor();
      setState(537);
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


size_t ExprParser::FactorContext::getRuleIndex() const {
  return ExprParser::RuleFactor;
}

void ExprParser::FactorContext::copyFrom(FactorContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- Number_factorContext ------------------------------------------------------------------

ExprParser::NumberContext* ExprParser::Number_factorContext::number() {
  return getRuleContext<ExprParser::NumberContext>(0);
}

ExprParser::Number_factorContext::Number_factorContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Number_factorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitNumber_factor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Variable_factorContext ------------------------------------------------------------------

ExprParser::VariableContext* ExprParser::Variable_factorContext::variable() {
  return getRuleContext<ExprParser::VariableContext>(0);
}

ExprParser::Variable_factorContext::Variable_factorContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Variable_factorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitVariable_factor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Function_call_factorContext ------------------------------------------------------------------

ExprParser::Function_callContext* ExprParser::Function_call_factorContext::function_call() {
  return getRuleContext<ExprParser::Function_callContext>(0);
}

ExprParser::Function_call_factorContext::Function_call_factorContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Function_call_factorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitFunction_call_factor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Parenthesized_factorContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::Parenthesized_factorContext::LPAREN() {
  return getToken(ExprParser::LPAREN, 0);
}

ExprParser::ExpressionContext* ExprParser::Parenthesized_factorContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

tree::TerminalNode* ExprParser::Parenthesized_factorContext::RPAREN() {
  return getToken(ExprParser::RPAREN, 0);
}

ExprParser::Parenthesized_factorContext::Parenthesized_factorContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Parenthesized_factorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitParenthesized_factor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Character_factorContext ------------------------------------------------------------------

ExprParser::Character_constantContext* ExprParser::Character_factorContext::character_constant() {
  return getRuleContext<ExprParser::Character_constantContext>(0);
}

ExprParser::Character_factorContext::Character_factorContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Character_factorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitCharacter_factor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- String_factorContext ------------------------------------------------------------------

ExprParser::String_constantContext* ExprParser::String_factorContext::string_constant() {
  return getRuleContext<ExprParser::String_constantContext>(0);
}

ExprParser::String_factorContext::String_factorContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::String_factorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitString_factor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Not_factorContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::Not_factorContext::NOT() {
  return getToken(ExprParser::NOT, 0);
}

ExprParser::FactorContext* ExprParser::Not_factorContext::factor() {
  return getRuleContext<ExprParser::FactorContext>(0);
}

ExprParser::Not_factorContext::Not_factorContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Not_factorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitNot_factor(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::FactorContext* ExprParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 132, ExprParser::RuleFactor);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(549);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<FactorContext *>(_tracker.createInstance<ExprParser::Variable_factorContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(538);
      variable();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<FactorContext *>(_tracker.createInstance<ExprParser::Number_factorContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(539);
      number();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<FactorContext *>(_tracker.createInstance<ExprParser::Character_factorContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(540);
      character_constant();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<FactorContext *>(_tracker.createInstance<ExprParser::String_factorContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(541);
      string_constant();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<FactorContext *>(_tracker.createInstance<ExprParser::Function_call_factorContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(542);
      function_call();
      break;
    }

    case 6: {
      _localctx = dynamic_cast<FactorContext *>(_tracker.createInstance<ExprParser::Not_factorContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(543);
      match(ExprParser::NOT);
      setState(544);
      factor();
      break;
    }

    case 7: {
      _localctx = dynamic_cast<FactorContext *>(_tracker.createInstance<ExprParser::Parenthesized_factorContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(545);
      match(ExprParser::LPAREN);
      setState(546);
      expression();
      setState(547);
      match(ExprParser::RPAREN);
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

//----------------- VariableContext ------------------------------------------------------------------

ExprParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Variable_nameContext* ExprParser::VariableContext::variable_name() {
  return getRuleContext<ExprParser::Variable_nameContext>(0);
}

std::vector<ExprParser::ModifierContext *> ExprParser::VariableContext::modifier() {
  return getRuleContexts<ExprParser::ModifierContext>();
}

ExprParser::ModifierContext* ExprParser::VariableContext::modifier(size_t i) {
  return getRuleContext<ExprParser::ModifierContext>(i);
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
  enterRule(_localctx, 134, ExprParser::RuleVariable);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(551);
    variable_name();
    setState(555);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::PERIOD

    || _la == ExprParser::LBRACKET) {
      setState(552);
      modifier();
      setState(557);
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

//----------------- ModifierContext ------------------------------------------------------------------

ExprParser::ModifierContext::ModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::ModifierContext::LBRACKET() {
  return getToken(ExprParser::LBRACKET, 0);
}

ExprParser::Index_listContext* ExprParser::ModifierContext::index_list() {
  return getRuleContext<ExprParser::Index_listContext>(0);
}

tree::TerminalNode* ExprParser::ModifierContext::RBRACKET() {
  return getToken(ExprParser::RBRACKET, 0);
}

tree::TerminalNode* ExprParser::ModifierContext::PERIOD() {
  return getToken(ExprParser::PERIOD, 0);
}

ExprParser::FieldContext* ExprParser::ModifierContext::field() {
  return getRuleContext<ExprParser::FieldContext>(0);
}


size_t ExprParser::ModifierContext::getRuleIndex() const {
  return ExprParser::RuleModifier;
}


antlrcpp::Any ExprParser::ModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitModifier(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ModifierContext* ExprParser::modifier() {
  ModifierContext *_localctx = _tracker.createInstance<ModifierContext>(_ctx, getState());
  enterRule(_localctx, 136, ExprParser::RuleModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(564);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::LBRACKET: {
        enterOuterAlt(_localctx, 1);
        setState(558);
        match(ExprParser::LBRACKET);
        setState(559);
        index_list();
        setState(560);
        match(ExprParser::RBRACKET);
        break;
      }

      case ExprParser::PERIOD: {
        enterOuterAlt(_localctx, 2);
        setState(562);
        match(ExprParser::PERIOD);
        setState(563);
        field();
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

//----------------- Index_listContext ------------------------------------------------------------------

ExprParser::Index_listContext::Index_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::IndexContext *> ExprParser::Index_listContext::index() {
  return getRuleContexts<ExprParser::IndexContext>();
}

ExprParser::IndexContext* ExprParser::Index_listContext::index(size_t i) {
  return getRuleContext<ExprParser::IndexContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::Index_listContext::COMMA() {
  return getTokens(ExprParser::COMMA);
}

tree::TerminalNode* ExprParser::Index_listContext::COMMA(size_t i) {
  return getToken(ExprParser::COMMA, i);
}


size_t ExprParser::Index_listContext::getRuleIndex() const {
  return ExprParser::RuleIndex_list;
}


antlrcpp::Any ExprParser::Index_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitIndex_list(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Index_listContext* ExprParser::index_list() {
  Index_listContext *_localctx = _tracker.createInstance<Index_listContext>(_ctx, getState());
  enterRule(_localctx, 138, ExprParser::RuleIndex_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(566);
    index();
    setState(571);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::COMMA) {
      setState(567);
      match(ExprParser::COMMA);
      setState(568);
      index();
      setState(573);
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

//----------------- IndexContext ------------------------------------------------------------------

ExprParser::IndexContext::IndexContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::ExpressionContext* ExprParser::IndexContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}


size_t ExprParser::IndexContext::getRuleIndex() const {
  return ExprParser::RuleIndex;
}


antlrcpp::Any ExprParser::IndexContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitIndex(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::IndexContext* ExprParser::index() {
  IndexContext *_localctx = _tracker.createInstance<IndexContext>(_ctx, getState());
  enterRule(_localctx, 140, ExprParser::RuleIndex);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(574);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldContext ------------------------------------------------------------------

ExprParser::FieldContext::FieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::FieldContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}


size_t ExprParser::FieldContext::getRuleIndex() const {
  return ExprParser::RuleField;
}


antlrcpp::Any ExprParser::FieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitField(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::FieldContext* ExprParser::field() {
  FieldContext *_localctx = _tracker.createInstance<FieldContext>(_ctx, getState());
  enterRule(_localctx, 142, ExprParser::RuleField);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(576);
    match(ExprParser::IDENTIFIER);
   
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

ExprParser::Unsigned_numberContext* ExprParser::NumberContext::unsigned_number() {
  return getRuleContext<ExprParser::Unsigned_numberContext>(0);
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
  enterRule(_localctx, 144, ExprParser::RuleNumber);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(579);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::PLUSOP

    || _la == ExprParser::MINUSOP) {
      setState(578);
      sign();
    }
    setState(581);
    unsigned_number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unsigned_numberContext ------------------------------------------------------------------

ExprParser::Unsigned_numberContext::Unsigned_numberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Integer_constantContext* ExprParser::Unsigned_numberContext::integer_constant() {
  return getRuleContext<ExprParser::Integer_constantContext>(0);
}

ExprParser::Real_constantContext* ExprParser::Unsigned_numberContext::real_constant() {
  return getRuleContext<ExprParser::Real_constantContext>(0);
}


size_t ExprParser::Unsigned_numberContext::getRuleIndex() const {
  return ExprParser::RuleUnsigned_number;
}


antlrcpp::Any ExprParser::Unsigned_numberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitUnsigned_number(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Unsigned_numberContext* ExprParser::unsigned_number() {
  Unsigned_numberContext *_localctx = _tracker.createInstance<Unsigned_numberContext>(_ctx, getState());
  enterRule(_localctx, 146, ExprParser::RuleUnsigned_number);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(585);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::INTEGER: {
        enterOuterAlt(_localctx, 1);
        setState(583);
        integer_constant();
        break;
      }

      case ExprParser::REAL: {
        enterOuterAlt(_localctx, 2);
        setState(584);
        real_constant();
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

//----------------- Integer_constantContext ------------------------------------------------------------------

ExprParser::Integer_constantContext::Integer_constantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Integer_constantContext::INTEGER() {
  return getToken(ExprParser::INTEGER, 0);
}


size_t ExprParser::Integer_constantContext::getRuleIndex() const {
  return ExprParser::RuleInteger_constant;
}


antlrcpp::Any ExprParser::Integer_constantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitInteger_constant(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Integer_constantContext* ExprParser::integer_constant() {
  Integer_constantContext *_localctx = _tracker.createInstance<Integer_constantContext>(_ctx, getState());
  enterRule(_localctx, 148, ExprParser::RuleInteger_constant);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(587);
    match(ExprParser::INTEGER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Real_constantContext ------------------------------------------------------------------

ExprParser::Real_constantContext::Real_constantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Real_constantContext::REAL() {
  return getToken(ExprParser::REAL, 0);
}


size_t ExprParser::Real_constantContext::getRuleIndex() const {
  return ExprParser::RuleReal_constant;
}


antlrcpp::Any ExprParser::Real_constantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitReal_constant(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Real_constantContext* ExprParser::real_constant() {
  Real_constantContext *_localctx = _tracker.createInstance<Real_constantContext>(_ctx, getState());
  enterRule(_localctx, 150, ExprParser::RuleReal_constant);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(589);
    match(ExprParser::REAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Character_constantContext ------------------------------------------------------------------

ExprParser::Character_constantContext::Character_constantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Character_constantContext::CHARACTER() {
  return getToken(ExprParser::CHARACTER, 0);
}


size_t ExprParser::Character_constantContext::getRuleIndex() const {
  return ExprParser::RuleCharacter_constant;
}


antlrcpp::Any ExprParser::Character_constantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitCharacter_constant(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Character_constantContext* ExprParser::character_constant() {
  Character_constantContext *_localctx = _tracker.createInstance<Character_constantContext>(_ctx, getState());
  enterRule(_localctx, 152, ExprParser::RuleCharacter_constant);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(591);
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
  enterRule(_localctx, 154, ExprParser::RuleString_constant);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(593);
    match(ExprParser::STRING);
   
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
  enterRule(_localctx, 156, ExprParser::RuleSign);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(595);
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

//----------------- Relational_operatorContext ------------------------------------------------------------------

ExprParser::Relational_operatorContext::Relational_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Relational_operatorContext::EQUAL() {
  return getToken(ExprParser::EQUAL, 0);
}

tree::TerminalNode* ExprParser::Relational_operatorContext::NE() {
  return getToken(ExprParser::NE, 0);
}

tree::TerminalNode* ExprParser::Relational_operatorContext::LT() {
  return getToken(ExprParser::LT, 0);
}

tree::TerminalNode* ExprParser::Relational_operatorContext::GT() {
  return getToken(ExprParser::GT, 0);
}

tree::TerminalNode* ExprParser::Relational_operatorContext::LTEQ() {
  return getToken(ExprParser::LTEQ, 0);
}

tree::TerminalNode* ExprParser::Relational_operatorContext::GTEQ() {
  return getToken(ExprParser::GTEQ, 0);
}


size_t ExprParser::Relational_operatorContext::getRuleIndex() const {
  return ExprParser::RuleRelational_operator;
}


antlrcpp::Any ExprParser::Relational_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitRelational_operator(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Relational_operatorContext* ExprParser::relational_operator() {
  Relational_operatorContext *_localctx = _tracker.createInstance<Relational_operatorContext>(_ctx, getState());
  enterRule(_localctx, 158, ExprParser::RuleRelational_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(597);
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
  enterRule(_localctx, 160, ExprParser::RuleExpression_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(599);
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
  enterRule(_localctx, 162, ExprParser::RuleTerm_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(601);
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

// Static vars and initialization.
std::vector<dfa::DFA> ExprParser::_decisionToDFA;
atn::PredictionContextCache ExprParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ExprParser::_atn;
std::vector<uint16_t> ExprParser::_serializedATN;

std::vector<std::string> ExprParser::_ruleNames = {
  "program", "program_header", "program_name", "program_body", "program_declaration", 
  "constants_section", "constant_list", "constant_definition", "constant_name", 
  "constant", "types_section", "type_declaration_list", "type_declaration", 
  "type_identifier", "data_type", "simple_type", "variable_section", "variable_declaration_list", 
  "variable_declaration", "variable_name_list", "variable_name", "subrange_type", 
  "array_type", "array_declaration", "routine_section", "routine_declaration", 
  "procedure", "function", "routine_name", "parameters", "parameter_list", 
  "parameter_declaration", "parameter_name_list", "parameter_name", "statement", 
  "compound_statement", "statement_list", "assign_statement", "lhs", "rhs", 
  "if_statement", "true_statement", "false_statement", "case_statement", 
  "case_branch_list", "case_branch", "case_constant_list", "case_constant", 
  "repeat_statement", "while_statement", "for_statement", "procedure_call", 
  "procedure_name", "function_call", "function_name", "argument_list", "argument", 
  "write_statement", "writeln_statement", "write_argument_list", "write_argument", 
  "width", "decimal_place", "expression", "simpleExpression", "term", "factor", 
  "variable", "modifier", "index_list", "index", "field", "number", "unsigned_number", 
  "integer_constant", "real_constant", "character_constant", "string_constant", 
  "sign", "relational_operator", "expression_operator", "term_operator"
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
    0x3, 0x5f, 0x25e, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x4, 0x50, 0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 
    0x53, 0x9, 0x53, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0xb7, 0xa, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0xbc, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x5, 0x6, 0xc1, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 
    0xc6, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x7, 0x8, 0xce, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0xd1, 0xb, 0x8, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x5, 
    0xb, 0xda, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0xde, 0xa, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x5, 0xb, 0xe2, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0xea, 0xa, 0xd, 0xc, 0xd, 0xe, 
    0xd, 0xed, 0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xf7, 0xa, 0x10, 0x3, 0x11, 
    0x3, 0x11, 0x5, 0x11, 0xfb, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0x103, 0xa, 0x13, 0xc, 0x13, 
    0xe, 0x13, 0x106, 0xb, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0x10f, 0xa, 0x15, 0xc, 0x15, 
    0xe, 0x15, 0x112, 0xb, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 
    0x124, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x127, 0xb, 0x19, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 0x12c, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 
    0x12f, 0xb, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x133, 0xa, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 
    0x1c, 0x13b, 0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 
    0x140, 0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 
    0x20, 0x7, 0x20, 0x14e, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x151, 0xb, 
    0x20, 0x3, 0x21, 0x5, 0x21, 0x154, 0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x7, 0x22, 0x15d, 
    0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x160, 0xb, 0x22, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 
    0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x16e, 0xa, 0x24, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 
    0x26, 0x7, 0x26, 0x177, 0xa, 0x26, 0xc, 0x26, 0xe, 0x26, 0x17a, 0xb, 
    0x26, 0x3, 0x26, 0x5, 0x26, 0x17d, 0xa, 0x26, 0x3, 0x27, 0x3, 0x27, 
    0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 
    0x18d, 0xa, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 
    0x2e, 0x3, 0x2e, 0x7, 0x2e, 0x19c, 0xa, 0x2e, 0xc, 0x2e, 0xe, 0x2e, 
    0x19f, 0xb, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 
    0x5, 0x2f, 0x1a6, 0xa, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x7, 0x30, 
    0x1ab, 0xa, 0x30, 0xc, 0x30, 0xe, 0x30, 0x1ae, 0xb, 0x30, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 
    0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 
    0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 
    0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x5, 0x35, 0x1c8, 0xa, 0x35, 
    0x3, 0x35, 0x3, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 
    0x37, 0x5, 0x37, 0x1d1, 0xa, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x38, 
    0x3, 0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x7, 0x39, 0x1da, 0xa, 0x39, 
    0xc, 0x39, 0xe, 0x39, 0x1dd, 0xb, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3b, 
    0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x1e6, 0xa, 0x3c, 
    0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x7, 0x3d, 0x1ec, 0xa, 0x3d, 
    0xc, 0x3d, 0xe, 0x3d, 0x1ef, 0xb, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3e, 
    0x3, 0x3e, 0x3, 0x3e, 0x5, 0x3e, 0x1f6, 0xa, 0x3e, 0x3, 0x3f, 0x5, 0x3f, 
    0x1f9, 0xa, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x1fe, 
    0xa, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 
    0x41, 0x5, 0x41, 0x206, 0xa, 0x41, 0x3, 0x42, 0x5, 0x42, 0x209, 0xa, 
    0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x7, 0x42, 0x20f, 
    0xa, 0x42, 0xc, 0x42, 0xe, 0x42, 0x212, 0xb, 0x42, 0x3, 0x43, 0x3, 0x43, 
    0x3, 0x43, 0x3, 0x43, 0x7, 0x43, 0x218, 0xa, 0x43, 0xc, 0x43, 0xe, 0x43, 
    0x21b, 0xb, 0x43, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 
    0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x5, 
    0x44, 0x228, 0xa, 0x44, 0x3, 0x45, 0x3, 0x45, 0x7, 0x45, 0x22c, 0xa, 
    0x45, 0xc, 0x45, 0xe, 0x45, 0x22f, 0xb, 0x45, 0x3, 0x46, 0x3, 0x46, 
    0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x5, 0x46, 0x237, 0xa, 0x46, 
    0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x7, 0x47, 0x23c, 0xa, 0x47, 0xc, 0x47, 
    0xe, 0x47, 0x23f, 0xb, 0x47, 0x3, 0x48, 0x3, 0x48, 0x3, 0x49, 0x3, 0x49, 
    0x3, 0x4a, 0x5, 0x4a, 0x246, 0xa, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4b, 
    0x3, 0x4b, 0x5, 0x4b, 0x24c, 0xa, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4d, 
    0x3, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x50, 0x3, 
    0x50, 0x3, 0x51, 0x3, 0x51, 0x3, 0x52, 0x3, 0x52, 0x3, 0x53, 0x3, 0x53, 
    0x3, 0x53, 0x2, 0x2, 0x54, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
    0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 
    0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 
    0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 
    0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 
    0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 
    0xa2, 0xa4, 0x2, 0x7, 0x3, 0x2, 0x4f, 0x50, 0x3, 0x2, 0x3, 0x4, 0x4, 
    0x2, 0x7, 0x9, 0x1c, 0x1e, 0x4, 0x2, 0x3, 0x4, 0x44, 0x44, 0x4, 0x2, 
    0x5, 0x6, 0x41, 0x43, 0x2, 0x247, 0x2, 0xa6, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0xaa, 0x3, 0x2, 0x2, 0x2, 0x6, 0xae, 0x3, 0x2, 0x2, 0x2, 0x8, 0xb0, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xc, 0xc7, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0xca, 0x3, 0x2, 0x2, 0x2, 0x10, 0xd2, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0xd6, 0x3, 0x2, 0x2, 0x2, 0x14, 0xe1, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x18, 0xe6, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0xee, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xf2, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xf6, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0xfa, 0x3, 0x2, 0x2, 0x2, 0x22, 0xfc, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0xff, 0x3, 0x2, 0x2, 0x2, 0x26, 0x107, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x113, 0x3, 0x2, 0x2, 
    0x2, 0x2c, 0x115, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x119, 0x3, 0x2, 0x2, 0x2, 
    0x30, 0x120, 0x3, 0x2, 0x2, 0x2, 0x32, 0x128, 0x3, 0x2, 0x2, 0x2, 0x34, 
    0x132, 0x3, 0x2, 0x2, 0x2, 0x36, 0x137, 0x3, 0x2, 0x2, 0x2, 0x38, 0x13c, 
    0x3, 0x2, 0x2, 0x2, 0x3a, 0x144, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x146, 0x3, 
    0x2, 0x2, 0x2, 0x3e, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x40, 0x153, 0x3, 0x2, 
    0x2, 0x2, 0x42, 0x159, 0x3, 0x2, 0x2, 0x2, 0x44, 0x161, 0x3, 0x2, 0x2, 
    0x2, 0x46, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x48, 0x16f, 0x3, 0x2, 0x2, 0x2, 
    0x4a, 0x173, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x4e, 
    0x182, 0x3, 0x2, 0x2, 0x2, 0x50, 0x184, 0x3, 0x2, 0x2, 0x2, 0x52, 0x186, 
    0x3, 0x2, 0x2, 0x2, 0x54, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x56, 0x190, 0x3, 
    0x2, 0x2, 0x2, 0x58, 0x192, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x198, 0x3, 0x2, 
    0x2, 0x2, 0x5c, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x1a7, 0x3, 0x2, 0x2, 
    0x2, 0x60, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x62, 0x1b1, 0x3, 0x2, 0x2, 0x2, 
    0x64, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x66, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x68, 
    0x1c4, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x1cd, 
    0x3, 0x2, 0x2, 0x2, 0x6e, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x70, 0x1d6, 0x3, 
    0x2, 0x2, 0x2, 0x72, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x74, 0x1e0, 0x3, 0x2, 
    0x2, 0x2, 0x76, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x78, 0x1e7, 0x3, 0x2, 0x2, 
    0x2, 0x7a, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x1f8, 0x3, 0x2, 0x2, 0x2, 
    0x7e, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x80, 0x201, 0x3, 0x2, 0x2, 0x2, 0x82, 
    0x208, 0x3, 0x2, 0x2, 0x2, 0x84, 0x213, 0x3, 0x2, 0x2, 0x2, 0x86, 0x227, 
    0x3, 0x2, 0x2, 0x2, 0x88, 0x229, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x236, 0x3, 
    0x2, 0x2, 0x2, 0x8c, 0x238, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x240, 0x3, 0x2, 
    0x2, 0x2, 0x90, 0x242, 0x3, 0x2, 0x2, 0x2, 0x92, 0x245, 0x3, 0x2, 0x2, 
    0x2, 0x94, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x96, 0x24d, 0x3, 0x2, 0x2, 0x2, 
    0x98, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x251, 0x3, 0x2, 0x2, 0x2, 0x9c, 
    0x253, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x255, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x257, 
    0x3, 0x2, 0x2, 0x2, 0xa2, 0x259, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x25b, 0x3, 
    0x2, 0x2, 0x2, 0xa6, 0xa7, 0x5, 0x4, 0x3, 0x2, 0xa7, 0xa8, 0x5, 0x8, 
    0x5, 0x2, 0xa8, 0xa9, 0x7, 0xd, 0x2, 0x2, 0xa9, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0xaa, 0xab, 0x7, 0x20, 0x2, 0x2, 0xab, 0xac, 0x5, 0x6, 0x4, 0x2, 
    0xac, 0xad, 0x7, 0xe, 0x2, 0x2, 0xad, 0x5, 0x3, 0x2, 0x2, 0x2, 0xae, 
    0xaf, 0x7, 0x57, 0x2, 0x2, 0xaf, 0x7, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 
    0x5, 0xa, 0x6, 0x2, 0xb1, 0xb2, 0x5, 0x48, 0x25, 0x2, 0xb2, 0x9, 0x3, 
    0x2, 0x2, 0x2, 0xb3, 0xb4, 0x5, 0xc, 0x7, 0x2, 0xb4, 0xb5, 0x7, 0xe, 
    0x2, 0x2, 0xb5, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb3, 0x3, 0x2, 0x2, 
    0x2, 0xb6, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xbb, 0x3, 0x2, 0x2, 0x2, 
    0xb8, 0xb9, 0x5, 0x16, 0xc, 0x2, 0xb9, 0xba, 0x7, 0xe, 0x2, 0x2, 0xba, 
    0xbc, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 
    0x3, 0x2, 0x2, 0x2, 0xbc, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 0x5, 
    0x22, 0x12, 0x2, 0xbe, 0xbf, 0x7, 0xe, 0x2, 0x2, 0xbf, 0xc1, 0x3, 0x2, 
    0x2, 0x2, 0xc0, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0x3, 0x2, 0x2, 
    0x2, 0xc1, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x5, 0x32, 0x1a, 0x2, 
    0xc3, 0xc4, 0x7, 0xe, 0x2, 0x2, 0xc4, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc5, 
    0xc2, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x7, 0x21, 0x2, 0x2, 0xc8, 0xc9, 0x5, 
    0xe, 0x8, 0x2, 0xc9, 0xd, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcf, 0x5, 0x10, 
    0x9, 0x2, 0xcb, 0xcc, 0x7, 0xe, 0x2, 0x2, 0xcc, 0xce, 0x5, 0x10, 0x9, 
    0x2, 0xcd, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xce, 0xd1, 0x3, 0x2, 0x2, 0x2, 
    0xcf, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd0, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 
    0x5, 0x12, 0xa, 0x2, 0xd3, 0xd4, 0x7, 0x7, 0x2, 0x2, 0xd4, 0xd5, 0x5, 
    0x14, 0xb, 0x2, 0xd5, 0x11, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x7, 0x57, 
    0x2, 0x2, 0xd7, 0x13, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xda, 0x5, 0x9e, 0x50, 
    0x2, 0xd9, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 0x3, 0x2, 0x2, 0x2, 
    0xda, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xde, 0x7, 0x57, 0x2, 0x2, 0xdc, 
    0xde, 0x5, 0x94, 0x4b, 0x2, 0xdd, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xdc, 
    0x3, 0x2, 0x2, 0x2, 0xde, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe2, 0x5, 
    0x9a, 0x4e, 0x2, 0xe0, 0xe2, 0x5, 0x9c, 0x4f, 0x2, 0xe1, 0xd9, 0x3, 
    0x2, 0x2, 0x2, 0xe1, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe0, 0x3, 0x2, 
    0x2, 0x2, 0xe2, 0x15, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 0x7, 0x22, 0x2, 
    0x2, 0xe4, 0xe5, 0x5, 0x18, 0xd, 0x2, 0xe5, 0x17, 0x3, 0x2, 0x2, 0x2, 
    0xe6, 0xeb, 0x5, 0x1a, 0xe, 0x2, 0xe7, 0xe8, 0x7, 0xe, 0x2, 0x2, 0xe8, 
    0xea, 0x5, 0x1a, 0xe, 0x2, 0xe9, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xea, 0xed, 
    0x3, 0x2, 0x2, 0x2, 0xeb, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 0x3, 
    0x2, 0x2, 0x2, 0xec, 0x19, 0x3, 0x2, 0x2, 0x2, 0xed, 0xeb, 0x3, 0x2, 
    0x2, 0x2, 0xee, 0xef, 0x5, 0x1c, 0xf, 0x2, 0xef, 0xf0, 0x7, 0x7, 0x2, 
    0x2, 0xf0, 0xf1, 0x5, 0x1e, 0x10, 0x2, 0xf1, 0x1b, 0x3, 0x2, 0x2, 0x2, 
    0xf2, 0xf3, 0x7, 0x57, 0x2, 0x2, 0xf3, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xf4, 
    0xf7, 0x5, 0x20, 0x11, 0x2, 0xf5, 0xf7, 0x5, 0x2e, 0x18, 0x2, 0xf6, 
    0xf4, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf7, 0x1f, 
    0x3, 0x2, 0x2, 0x2, 0xf8, 0xfb, 0x5, 0x1c, 0xf, 0x2, 0xf9, 0xfb, 0x5, 
    0x2c, 0x17, 0x2, 0xfa, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xf9, 0x3, 0x2, 
    0x2, 0x2, 0xfb, 0x21, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 0x7, 0x3e, 0x2, 
    0x2, 0xfd, 0xfe, 0x5, 0x24, 0x13, 0x2, 0xfe, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0xff, 0x104, 0x5, 0x26, 0x14, 0x2, 0x100, 0x101, 0x7, 0xe, 0x2, 0x2, 
    0x101, 0x103, 0x5, 0x26, 0x14, 0x2, 0x102, 0x100, 0x3, 0x2, 0x2, 0x2, 
    0x103, 0x106, 0x3, 0x2, 0x2, 0x2, 0x104, 0x102, 0x3, 0x2, 0x2, 0x2, 
    0x104, 0x105, 0x3, 0x2, 0x2, 0x2, 0x105, 0x25, 0x3, 0x2, 0x2, 0x2, 0x106, 
    0x104, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x5, 0x28, 0x15, 0x2, 0x108, 
    0x109, 0x7, 0xb, 0x2, 0x2, 0x109, 0x10a, 0x5, 0x1e, 0x10, 0x2, 0x10a, 
    0x27, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x110, 0x5, 0x2a, 0x16, 0x2, 0x10c, 
    0x10d, 0x7, 0xc, 0x2, 0x2, 0x10d, 0x10f, 0x5, 0x2a, 0x16, 0x2, 0x10e, 
    0x10c, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x112, 0x3, 0x2, 0x2, 0x2, 0x110, 
    0x10e, 0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 0x3, 0x2, 0x2, 0x2, 0x111, 
    0x29, 0x3, 0x2, 0x2, 0x2, 0x112, 0x110, 0x3, 0x2, 0x2, 0x2, 0x113, 0x114, 
    0x7, 0x57, 0x2, 0x2, 0x114, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x115, 0x116, 
    0x5, 0x14, 0xb, 0x2, 0x116, 0x117, 0x7, 0x1f, 0x2, 0x2, 0x117, 0x118, 
    0x5, 0x14, 0xb, 0x2, 0x118, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 
    0x7, 0x23, 0x2, 0x2, 0x11a, 0x11b, 0x7, 0x11, 0x2, 0x2, 0x11b, 0x11c, 
    0x5, 0x30, 0x19, 0x2, 0x11c, 0x11d, 0x7, 0x12, 0x2, 0x2, 0x11d, 0x11e, 
    0x7, 0x3c, 0x2, 0x2, 0x11e, 0x11f, 0x5, 0x1e, 0x10, 0x2, 0x11f, 0x2f, 
    0x3, 0x2, 0x2, 0x2, 0x120, 0x125, 0x5, 0x20, 0x11, 0x2, 0x121, 0x122, 
    0x7, 0xc, 0x2, 0x2, 0x122, 0x124, 0x5, 0x20, 0x11, 0x2, 0x123, 0x121, 
    0x3, 0x2, 0x2, 0x2, 0x124, 0x127, 0x3, 0x2, 0x2, 0x2, 0x125, 0x123, 
    0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 0x3, 0x2, 0x2, 0x2, 0x126, 0x31, 0x3, 
    0x2, 0x2, 0x2, 0x127, 0x125, 0x3, 0x2, 0x2, 0x2, 0x128, 0x12d, 0x5, 
    0x34, 0x1b, 0x2, 0x129, 0x12a, 0x7, 0xe, 0x2, 0x2, 0x12a, 0x12c, 0x5, 
    0x34, 0x1b, 0x2, 0x12b, 0x129, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12f, 0x3, 
    0x2, 0x2, 0x2, 0x12d, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12e, 0x3, 
    0x2, 0x2, 0x2, 0x12e, 0x33, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x12d, 0x3, 0x2, 
    0x2, 0x2, 0x130, 0x133, 0x5, 0x36, 0x1c, 0x2, 0x131, 0x133, 0x5, 0x38, 
    0x1d, 0x2, 0x132, 0x130, 0x3, 0x2, 0x2, 0x2, 0x132, 0x131, 0x3, 0x2, 
    0x2, 0x2, 0x133, 0x134, 0x3, 0x2, 0x2, 0x2, 0x134, 0x135, 0x7, 0xe, 
    0x2, 0x2, 0x135, 0x136, 0x5, 0x8, 0x5, 0x2, 0x136, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0x137, 0x138, 0x7, 0x55, 0x2, 0x2, 0x138, 0x13a, 0x5, 0x3a, 0x1e, 
    0x2, 0x139, 0x13b, 0x5, 0x3c, 0x1f, 0x2, 0x13a, 0x139, 0x3, 0x2, 0x2, 
    0x2, 0x13a, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x37, 0x3, 0x2, 0x2, 0x2, 
    0x13c, 0x13d, 0x7, 0x56, 0x2, 0x2, 0x13d, 0x13f, 0x5, 0x3a, 0x1e, 0x2, 
    0x13e, 0x140, 0x5, 0x3c, 0x1f, 0x2, 0x13f, 0x13e, 0x3, 0x2, 0x2, 0x2, 
    0x13f, 0x140, 0x3, 0x2, 0x2, 0x2, 0x140, 0x141, 0x3, 0x2, 0x2, 0x2, 
    0x141, 0x142, 0x7, 0xb, 0x2, 0x2, 0x142, 0x143, 0x5, 0x1c, 0xf, 0x2, 
    0x143, 0x39, 0x3, 0x2, 0x2, 0x2, 0x144, 0x145, 0x7, 0x57, 0x2, 0x2, 
    0x145, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x146, 0x147, 0x7, 0xf, 0x2, 0x2, 0x147, 
    0x148, 0x5, 0x3e, 0x20, 0x2, 0x148, 0x149, 0x7, 0x10, 0x2, 0x2, 0x149, 
    0x3d, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x14f, 0x5, 0x40, 0x21, 0x2, 0x14b, 
    0x14c, 0x7, 0xe, 0x2, 0x2, 0x14c, 0x14e, 0x5, 0x40, 0x21, 0x2, 0x14d, 
    0x14b, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x151, 0x3, 0x2, 0x2, 0x2, 0x14f, 
    0x14d, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x150, 0x3, 0x2, 0x2, 0x2, 0x150, 
    0x3f, 0x3, 0x2, 0x2, 0x2, 0x151, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x152, 0x154, 
    0x7, 0x3e, 0x2, 0x2, 0x153, 0x152, 0x3, 0x2, 0x2, 0x2, 0x153, 0x154, 
    0x3, 0x2, 0x2, 0x2, 0x154, 0x155, 0x3, 0x2, 0x2, 0x2, 0x155, 0x156, 
    0x5, 0x42, 0x22, 0x2, 0x156, 0x157, 0x7, 0xb, 0x2, 0x2, 0x157, 0x158, 
    0x5, 0x1c, 0xf, 0x2, 0x158, 0x41, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15e, 
    0x5, 0x44, 0x23, 0x2, 0x15a, 0x15b, 0x7, 0xc, 0x2, 0x2, 0x15b, 0x15d, 
    0x5, 0x44, 0x23, 0x2, 0x15c, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x160, 
    0x3, 0x2, 0x2, 0x2, 0x15e, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15f, 
    0x3, 0x2, 0x2, 0x2, 0x15f, 0x43, 0x3, 0x2, 0x2, 0x2, 0x160, 0x15e, 0x3, 
    0x2, 0x2, 0x2, 0x161, 0x162, 0x7, 0x57, 0x2, 0x2, 0x162, 0x45, 0x3, 
    0x2, 0x2, 0x2, 0x163, 0x16e, 0x5, 0x48, 0x25, 0x2, 0x164, 0x16e, 0x5, 
    0x4c, 0x27, 0x2, 0x165, 0x16e, 0x5, 0x52, 0x2a, 0x2, 0x166, 0x16e, 0x5, 
    0x58, 0x2d, 0x2, 0x167, 0x16e, 0x5, 0x62, 0x32, 0x2, 0x168, 0x16e, 0x5, 
    0x64, 0x33, 0x2, 0x169, 0x16e, 0x5, 0x66, 0x34, 0x2, 0x16a, 0x16e, 0x5, 
    0x74, 0x3b, 0x2, 0x16b, 0x16e, 0x5, 0x76, 0x3c, 0x2, 0x16c, 0x16e, 0x5, 
    0x68, 0x35, 0x2, 0x16d, 0x163, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x164, 0x3, 
    0x2, 0x2, 0x2, 0x16d, 0x165, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x166, 0x3, 
    0x2, 0x2, 0x2, 0x16d, 0x167, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x168, 0x3, 
    0x2, 0x2, 0x2, 0x16d, 0x169, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16a, 0x3, 
    0x2, 0x2, 0x2, 0x16d, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16c, 0x3, 
    0x2, 0x2, 0x2, 0x16e, 0x47, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x170, 0x7, 0x3f, 
    0x2, 0x2, 0x170, 0x171, 0x5, 0x4a, 0x26, 0x2, 0x171, 0x172, 0x7, 0x40, 
    0x2, 0x2, 0x172, 0x49, 0x3, 0x2, 0x2, 0x2, 0x173, 0x178, 0x5, 0x46, 
    0x24, 0x2, 0x174, 0x175, 0x7, 0xe, 0x2, 0x2, 0x175, 0x177, 0x5, 0x46, 
    0x24, 0x2, 0x176, 0x174, 0x3, 0x2, 0x2, 0x2, 0x177, 0x17a, 0x3, 0x2, 
    0x2, 0x2, 0x178, 0x176, 0x3, 0x2, 0x2, 0x2, 0x178, 0x179, 0x3, 0x2, 
    0x2, 0x2, 0x179, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x178, 0x3, 0x2, 
    0x2, 0x2, 0x17b, 0x17d, 0x7, 0xe, 0x2, 0x2, 0x17c, 0x17b, 0x3, 0x2, 
    0x2, 0x2, 0x17c, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x4b, 0x3, 0x2, 0x2, 
    0x2, 0x17e, 0x17f, 0x5, 0x4e, 0x28, 0x2, 0x17f, 0x180, 0x7, 0x17, 0x2, 
    0x2, 0x180, 0x181, 0x5, 0x50, 0x29, 0x2, 0x181, 0x4d, 0x3, 0x2, 0x2, 
    0x2, 0x182, 0x183, 0x5, 0x88, 0x45, 0x2, 0x183, 0x4f, 0x3, 0x2, 0x2, 
    0x2, 0x184, 0x185, 0x5, 0x80, 0x41, 0x2, 0x185, 0x51, 0x3, 0x2, 0x2, 
    0x2, 0x186, 0x187, 0x7, 0x46, 0x2, 0x2, 0x187, 0x188, 0x5, 0x80, 0x41, 
    0x2, 0x188, 0x189, 0x7, 0x47, 0x2, 0x2, 0x189, 0x18c, 0x5, 0x54, 0x2b, 
    0x2, 0x18a, 0x18b, 0x7, 0x48, 0x2, 0x2, 0x18b, 0x18d, 0x5, 0x56, 0x2c, 
    0x2, 0x18c, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18d, 0x3, 0x2, 0x2, 
    0x2, 0x18d, 0x53, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x18f, 0x5, 0x46, 0x24, 
    0x2, 0x18f, 0x55, 0x3, 0x2, 0x2, 0x2, 0x190, 0x191, 0x5, 0x46, 0x24, 
    0x2, 0x191, 0x57, 0x3, 0x2, 0x2, 0x2, 0x192, 0x193, 0x7, 0x49, 0x2, 
    0x2, 0x193, 0x194, 0x5, 0x80, 0x41, 0x2, 0x194, 0x195, 0x7, 0x3c, 0x2, 
    0x2, 0x195, 0x196, 0x5, 0x5a, 0x2e, 0x2, 0x196, 0x197, 0x7, 0x40, 0x2, 
    0x2, 0x197, 0x59, 0x3, 0x2, 0x2, 0x2, 0x198, 0x19d, 0x5, 0x5c, 0x2f, 
    0x2, 0x199, 0x19a, 0x7, 0xe, 0x2, 0x2, 0x19a, 0x19c, 0x5, 0x5c, 0x2f, 
    0x2, 0x19b, 0x199, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x19f, 0x3, 0x2, 0x2, 
    0x2, 0x19d, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19e, 0x3, 0x2, 0x2, 
    0x2, 0x19e, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x19d, 0x3, 0x2, 0x2, 0x2, 
    0x1a0, 0x1a1, 0x5, 0x5e, 0x30, 0x2, 0x1a1, 0x1a2, 0x7, 0xb, 0x2, 0x2, 
    0x1a2, 0x1a3, 0x5, 0x46, 0x24, 0x2, 0x1a3, 0x1a6, 0x3, 0x2, 0x2, 0x2, 
    0x1a4, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a0, 0x3, 0x2, 0x2, 0x2, 
    0x1a5, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x1a7, 
    0x1ac, 0x5, 0x60, 0x31, 0x2, 0x1a8, 0x1a9, 0x7, 0xc, 0x2, 0x2, 0x1a9, 
    0x1ab, 0x5, 0x60, 0x31, 0x2, 0x1aa, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1ab, 
    0x1ae, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1ac, 
    0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1ac, 
    0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b0, 0x5, 0x14, 0xb, 0x2, 0x1b0, 0x61, 
    0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b2, 0x7, 0x4a, 0x2, 0x2, 0x1b2, 0x1b3, 
    0x5, 0x4a, 0x26, 0x2, 0x1b3, 0x1b4, 0x7, 0x4b, 0x2, 0x2, 0x1b4, 0x1b5, 
    0x5, 0x80, 0x41, 0x2, 0x1b5, 0x63, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b7, 
    0x7, 0x4c, 0x2, 0x2, 0x1b7, 0x1b8, 0x5, 0x80, 0x41, 0x2, 0x1b8, 0x1b9, 
    0x7, 0x4d, 0x2, 0x2, 0x1b9, 0x1ba, 0x5, 0x46, 0x24, 0x2, 0x1ba, 0x65, 
    0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1bc, 0x7, 0x4e, 0x2, 0x2, 0x1bc, 0x1bd, 
    0x5, 0x88, 0x45, 0x2, 0x1bd, 0x1be, 0x7, 0x17, 0x2, 0x2, 0x1be, 0x1bf, 
    0x5, 0x80, 0x41, 0x2, 0x1bf, 0x1c0, 0x9, 0x2, 0x2, 0x2, 0x1c0, 0x1c1, 
    0x5, 0x80, 0x41, 0x2, 0x1c1, 0x1c2, 0x7, 0x4d, 0x2, 0x2, 0x1c2, 0x1c3, 
    0x5, 0x46, 0x24, 0x2, 0x1c3, 0x67, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c5, 
    0x5, 0x6a, 0x36, 0x2, 0x1c5, 0x1c7, 0x7, 0xf, 0x2, 0x2, 0x1c6, 0x1c8, 
    0x5, 0x70, 0x39, 0x2, 0x1c7, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c8, 
    0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1ca, 
    0x7, 0x10, 0x2, 0x2, 0x1ca, 0x69, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1cc, 
    0x7, 0x57, 0x2, 0x2, 0x1cc, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1ce, 
    0x5, 0x6e, 0x38, 0x2, 0x1ce, 0x1d0, 0x7, 0xf, 0x2, 0x2, 0x1cf, 0x1d1, 
    0x5, 0x70, 0x39, 0x2, 0x1d0, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1d1, 
    0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d3, 
    0x7, 0x10, 0x2, 0x2, 0x1d3, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d5, 
    0x7, 0x57, 0x2, 0x2, 0x1d5, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1db, 
    0x5, 0x72, 0x3a, 0x2, 0x1d7, 0x1d8, 0x7, 0xc, 0x2, 0x2, 0x1d8, 0x1da, 
    0x5, 0x72, 0x3a, 0x2, 0x1d9, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x1dd, 
    0x3, 0x2, 0x2, 0x2, 0x1db, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1dc, 
    0x3, 0x2, 0x2, 0x2, 0x1dc, 0x71, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1db, 0x3, 
    0x2, 0x2, 0x2, 0x1de, 0x1df, 0x5, 0x80, 0x41, 0x2, 0x1df, 0x73, 0x3, 
    0x2, 0x2, 0x2, 0x1e0, 0x1e1, 0x7, 0x51, 0x2, 0x2, 0x1e1, 0x1e2, 0x5, 
    0x78, 0x3d, 0x2, 0x1e2, 0x75, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e5, 0x7, 
    0x52, 0x2, 0x2, 0x1e4, 0x1e6, 0x5, 0x78, 0x3d, 0x2, 0x1e5, 0x1e4, 0x3, 
    0x2, 0x2, 0x2, 0x1e5, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x77, 0x3, 0x2, 
    0x2, 0x2, 0x1e7, 0x1e8, 0x7, 0xf, 0x2, 0x2, 0x1e8, 0x1ed, 0x5, 0x7a, 
    0x3e, 0x2, 0x1e9, 0x1ea, 0x7, 0xc, 0x2, 0x2, 0x1ea, 0x1ec, 0x5, 0x7a, 
    0x3e, 0x2, 0x1eb, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1ef, 0x3, 0x2, 
    0x2, 0x2, 0x1ed, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1ee, 0x3, 0x2, 
    0x2, 0x2, 0x1ee, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1ed, 0x3, 0x2, 
    0x2, 0x2, 0x1f0, 0x1f1, 0x7, 0x10, 0x2, 0x2, 0x1f1, 0x79, 0x3, 0x2, 
    0x2, 0x2, 0x1f2, 0x1f5, 0x5, 0x80, 0x41, 0x2, 0x1f3, 0x1f4, 0x7, 0xb, 
    0x2, 0x2, 0x1f4, 0x1f6, 0x5, 0x7c, 0x3f, 0x2, 0x1f5, 0x1f3, 0x3, 0x2, 
    0x2, 0x2, 0x1f5, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x7b, 0x3, 0x2, 0x2, 
    0x2, 0x1f7, 0x1f9, 0x5, 0x9e, 0x50, 0x2, 0x1f8, 0x1f7, 0x3, 0x2, 0x2, 
    0x2, 0x1f8, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1fa, 0x3, 0x2, 0x2, 
    0x2, 0x1fa, 0x1fd, 0x5, 0x96, 0x4c, 0x2, 0x1fb, 0x1fc, 0x7, 0xb, 0x2, 
    0x2, 0x1fc, 0x1fe, 0x5, 0x7e, 0x40, 0x2, 0x1fd, 0x1fb, 0x3, 0x2, 0x2, 
    0x2, 0x1fd, 0x1fe, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x7d, 0x3, 0x2, 0x2, 0x2, 
    0x1ff, 0x200, 0x5, 0x96, 0x4c, 0x2, 0x200, 0x7f, 0x3, 0x2, 0x2, 0x2, 
    0x201, 0x205, 0x5, 0x82, 0x42, 0x2, 0x202, 0x203, 0x5, 0xa0, 0x51, 0x2, 
    0x203, 0x204, 0x5, 0x82, 0x42, 0x2, 0x204, 0x206, 0x3, 0x2, 0x2, 0x2, 
    0x205, 0x202, 0x3, 0x2, 0x2, 0x2, 0x205, 0x206, 0x3, 0x2, 0x2, 0x2, 
    0x206, 0x81, 0x3, 0x2, 0x2, 0x2, 0x207, 0x209, 0x5, 0x9e, 0x50, 0x2, 
    0x208, 0x207, 0x3, 0x2, 0x2, 0x2, 0x208, 0x209, 0x3, 0x2, 0x2, 0x2, 
    0x209, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x210, 0x5, 0x84, 0x43, 0x2, 
    0x20b, 0x20c, 0x5, 0xa2, 0x52, 0x2, 0x20c, 0x20d, 0x5, 0x84, 0x43, 0x2, 
    0x20d, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x20b, 0x3, 0x2, 0x2, 0x2, 
    0x20f, 0x212, 0x3, 0x2, 0x2, 0x2, 0x210, 0x20e, 0x3, 0x2, 0x2, 0x2, 
    0x210, 0x211, 0x3, 0x2, 0x2, 0x2, 0x211, 0x83, 0x3, 0x2, 0x2, 0x2, 0x212, 
    0x210, 0x3, 0x2, 0x2, 0x2, 0x213, 0x219, 0x5, 0x86, 0x44, 0x2, 0x214, 
    0x215, 0x5, 0xa4, 0x53, 0x2, 0x215, 0x216, 0x5, 0x86, 0x44, 0x2, 0x216, 
    0x218, 0x3, 0x2, 0x2, 0x2, 0x217, 0x214, 0x3, 0x2, 0x2, 0x2, 0x218, 
    0x21b, 0x3, 0x2, 0x2, 0x2, 0x219, 0x217, 0x3, 0x2, 0x2, 0x2, 0x219, 
    0x21a, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x85, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x219, 
    0x3, 0x2, 0x2, 0x2, 0x21c, 0x228, 0x5, 0x88, 0x45, 0x2, 0x21d, 0x228, 
    0x5, 0x92, 0x4a, 0x2, 0x21e, 0x228, 0x5, 0x9a, 0x4e, 0x2, 0x21f, 0x228, 
    0x5, 0x9c, 0x4f, 0x2, 0x220, 0x228, 0x5, 0x6c, 0x37, 0x2, 0x221, 0x222, 
    0x7, 0x45, 0x2, 0x2, 0x222, 0x228, 0x5, 0x86, 0x44, 0x2, 0x223, 0x224, 
    0x7, 0xf, 0x2, 0x2, 0x224, 0x225, 0x5, 0x80, 0x41, 0x2, 0x225, 0x226, 
    0x7, 0x10, 0x2, 0x2, 0x226, 0x228, 0x3, 0x2, 0x2, 0x2, 0x227, 0x21c, 
    0x3, 0x2, 0x2, 0x2, 0x227, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x227, 0x21e, 
    0x3, 0x2, 0x2, 0x2, 0x227, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x227, 0x220, 
    0x3, 0x2, 0x2, 0x2, 0x227, 0x221, 0x3, 0x2, 0x2, 0x2, 0x227, 0x223, 
    0x3, 0x2, 0x2, 0x2, 0x228, 0x87, 0x3, 0x2, 0x2, 0x2, 0x229, 0x22d, 0x5, 
    0x2a, 0x16, 0x2, 0x22a, 0x22c, 0x5, 0x8a, 0x46, 0x2, 0x22b, 0x22a, 0x3, 
    0x2, 0x2, 0x2, 0x22c, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x22b, 0x3, 
    0x2, 0x2, 0x2, 0x22d, 0x22e, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x89, 0x3, 0x2, 
    0x2, 0x2, 0x22f, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x230, 0x231, 0x7, 0x11, 
    0x2, 0x2, 0x231, 0x232, 0x5, 0x8c, 0x47, 0x2, 0x232, 0x233, 0x7, 0x12, 
    0x2, 0x2, 0x233, 0x237, 0x3, 0x2, 0x2, 0x2, 0x234, 0x235, 0x7, 0xd, 
    0x2, 0x2, 0x235, 0x237, 0x5, 0x90, 0x49, 0x2, 0x236, 0x230, 0x3, 0x2, 
    0x2, 0x2, 0x236, 0x234, 0x3, 0x2, 0x2, 0x2, 0x237, 0x8b, 0x3, 0x2, 0x2, 
    0x2, 0x238, 0x23d, 0x5, 0x8e, 0x48, 0x2, 0x239, 0x23a, 0x7, 0xc, 0x2, 
    0x2, 0x23a, 0x23c, 0x5, 0x8e, 0x48, 0x2, 0x23b, 0x239, 0x3, 0x2, 0x2, 
    0x2, 0x23c, 0x23f, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x23b, 0x3, 0x2, 0x2, 
    0x2, 0x23d, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x8d, 0x3, 0x2, 0x2, 0x2, 
    0x23f, 0x23d, 0x3, 0x2, 0x2, 0x2, 0x240, 0x241, 0x5, 0x80, 0x41, 0x2, 
    0x241, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x242, 0x243, 0x7, 0x57, 0x2, 0x2, 
    0x243, 0x91, 0x3, 0x2, 0x2, 0x2, 0x244, 0x246, 0x5, 0x9e, 0x50, 0x2, 
    0x245, 0x244, 0x3, 0x2, 0x2, 0x2, 0x245, 0x246, 0x3, 0x2, 0x2, 0x2, 
    0x246, 0x247, 0x3, 0x2, 0x2, 0x2, 0x247, 0x248, 0x5, 0x94, 0x4b, 0x2, 
    0x248, 0x93, 0x3, 0x2, 0x2, 0x2, 0x249, 0x24c, 0x5, 0x96, 0x4c, 0x2, 
    0x24a, 0x24c, 0x5, 0x98, 0x4d, 0x2, 0x24b, 0x249, 0x3, 0x2, 0x2, 0x2, 
    0x24b, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x95, 0x3, 0x2, 0x2, 0x2, 0x24d, 
    0x24e, 0x7, 0x58, 0x2, 0x2, 0x24e, 0x97, 0x3, 0x2, 0x2, 0x2, 0x24f, 
    0x250, 0x7, 0x59, 0x2, 0x2, 0x250, 0x99, 0x3, 0x2, 0x2, 0x2, 0x251, 
    0x252, 0x7, 0x5d, 0x2, 0x2, 0x252, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x253, 
    0x254, 0x7, 0x5e, 0x2, 0x2, 0x254, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x255, 
    0x256, 0x9, 0x3, 0x2, 0x2, 0x256, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x257, 0x258, 
    0x9, 0x4, 0x2, 0x2, 0x258, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x259, 0x25a, 0x9, 
    0x5, 0x2, 0x2, 0x25a, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x25c, 0x9, 0x6, 
    0x2, 0x2, 0x25c, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x30, 0xb6, 0xbb, 0xc0, 0xc5, 
    0xcf, 0xd9, 0xdd, 0xe1, 0xeb, 0xf6, 0xfa, 0x104, 0x110, 0x125, 0x12d, 
    0x132, 0x13a, 0x13f, 0x14f, 0x153, 0x15e, 0x16d, 0x178, 0x17c, 0x18c, 
    0x19d, 0x1a5, 0x1ac, 0x1c7, 0x1d0, 0x1db, 0x1e5, 0x1ed, 0x1f5, 0x1f8, 
    0x1fd, 0x205, 0x208, 0x210, 0x219, 0x227, 0x22d, 0x236, 0x23d, 0x245, 
    0x24b, 
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
