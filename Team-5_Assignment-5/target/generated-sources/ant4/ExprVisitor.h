
// Generated from Expr.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "ExprParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ExprParser.
 */
class  ExprVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ExprParser.
   */
    virtual antlrcpp::Any visitProgram(ExprParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitProgram_header(ExprParser::Program_headerContext *context) = 0;

    virtual antlrcpp::Any visitProgram_name(ExprParser::Program_nameContext *context) = 0;

    virtual antlrcpp::Any visitProgram_body(ExprParser::Program_bodyContext *context) = 0;

    virtual antlrcpp::Any visitCompound_statement(ExprParser::Compound_statementContext *context) = 0;

    virtual antlrcpp::Any visitStatement_list(ExprParser::Statement_listContext *context) = 0;

    virtual antlrcpp::Any visitStatement(ExprParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitFor_statement(ExprParser::For_statementContext *context) = 0;


};

