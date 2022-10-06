
// Generated from Expr.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "ExprVisitor.h"


/**
 * This class provides an empty implementation of ExprVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ExprBaseVisitor : public ExprVisitor {
public:

  virtual antlrcpp::Any visitProgram(ExprParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProgram_header(ExprParser::Program_headerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProgram_name(ExprParser::Program_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProgram_body(ExprParser::Program_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProgram_declaration(ExprParser::Program_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstants_section(ExprParser::Constants_sectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConst_list(ExprParser::Const_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConst_name(ExprParser::Const_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant(ExprParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable_section(ExprParser::Variable_sectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar_declaration(ExprParser::Var_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar_list(ExprParser::Var_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar_name(ExprParser::Var_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoutine_section(ExprParser::Routine_sectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoutine_declaration(ExprParser::Routine_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedure(ExprParser::ProcedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction(ExprParser::FunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoutine_name(ExprParser::Routine_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter_list(ExprParser::Parameter_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter_declaration(ExprParser::Parameter_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter_name_list(ExprParser::Parameter_name_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter_name(ExprParser::Parameter_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCall_procedure(ExprParser::Call_procedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedure_name(ExprParser::Procedure_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCall_function(ExprParser::Call_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_name(ExprParser::Function_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgument_list(ExprParser::Argument_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgument(ExprParser::ArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitData_type(ExprParser::Data_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_name(ExprParser::Type_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArray_type(ExprParser::Array_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArray_declaration(ExprParser::Array_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompound_statement(ExprParser::Compound_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement_list(ExprParser::Statement_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(ExprParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmpty_statement(ExprParser::Empty_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssign_statement(ExprParser::Assign_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLhs(ExprParser::LhsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRhs(ExprParser::RhsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(ExprParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(ExprParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingle_expression(ExprParser::Single_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTerm_expression(ExprParser::Term_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFactor(ExprParser::FactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_statement(ExprParser::For_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhile_statement(ExprParser::While_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepeat_statement(ExprParser::Repeat_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_statement(ExprParser::If_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrue_statement(ExprParser::True_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFalse_statment(ExprParser::False_statmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCase_statment(ExprParser::Case_statmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCase_branch_list(ExprParser::Case_branch_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCase_branch(ExprParser::Case_branchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCase_constant_list(ExprParser::Case_constant_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCase_constant(ExprParser::Case_constantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWrite_statement(ExprParser::Write_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWriteln_statement(ExprParser::Writeln_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWrite_argument_list(ExprParser::Write_argument_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWrite_argument(ExprParser::Write_argumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWidth(ExprParser::WidthContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecimal_place(ExprParser::Decimal_placeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSign(ExprParser::SignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelation_operator(ExprParser::Relation_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_operator(ExprParser::Expression_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTerm_operator(ExprParser::Term_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumber(ExprParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnsign_number(ExprParser::Unsign_numberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChar_constant(ExprParser::Char_constantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString_constant(ExprParser::String_constantContext *ctx) override {
    return visitChildren(ctx);
  }


};

