
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

    virtual antlrcpp::Any visitProgram_declaration(ExprParser::Program_declarationContext *context) = 0;

    virtual antlrcpp::Any visitConstants_section(ExprParser::Constants_sectionContext *context) = 0;

    virtual antlrcpp::Any visitConst_list(ExprParser::Const_listContext *context) = 0;

    virtual antlrcpp::Any visitConst_name(ExprParser::Const_nameContext *context) = 0;

    virtual antlrcpp::Any visitConstant(ExprParser::ConstantContext *context) = 0;

    virtual antlrcpp::Any visitVariable_section(ExprParser::Variable_sectionContext *context) = 0;

    virtual antlrcpp::Any visitVar_declaration(ExprParser::Var_declarationContext *context) = 0;

    virtual antlrcpp::Any visitVar_list(ExprParser::Var_listContext *context) = 0;

    virtual antlrcpp::Any visitVar_name(ExprParser::Var_nameContext *context) = 0;

    virtual antlrcpp::Any visitRoutine_section(ExprParser::Routine_sectionContext *context) = 0;

    virtual antlrcpp::Any visitRoutine_declaration(ExprParser::Routine_declarationContext *context) = 0;

    virtual antlrcpp::Any visitProcedure(ExprParser::ProcedureContext *context) = 0;

    virtual antlrcpp::Any visitFunction(ExprParser::FunctionContext *context) = 0;

    virtual antlrcpp::Any visitRoutine_name(ExprParser::Routine_nameContext *context) = 0;

    virtual antlrcpp::Any visitParameter_list(ExprParser::Parameter_listContext *context) = 0;

    virtual antlrcpp::Any visitParameter_declaration(ExprParser::Parameter_declarationContext *context) = 0;

    virtual antlrcpp::Any visitParameter_name_list(ExprParser::Parameter_name_listContext *context) = 0;

    virtual antlrcpp::Any visitParameter_name(ExprParser::Parameter_nameContext *context) = 0;

    virtual antlrcpp::Any visitCall_procedure(ExprParser::Call_procedureContext *context) = 0;

    virtual antlrcpp::Any visitProcedure_name(ExprParser::Procedure_nameContext *context) = 0;

    virtual antlrcpp::Any visitCall_function(ExprParser::Call_functionContext *context) = 0;

    virtual antlrcpp::Any visitFunction_name(ExprParser::Function_nameContext *context) = 0;

    virtual antlrcpp::Any visitArgument_list(ExprParser::Argument_listContext *context) = 0;

    virtual antlrcpp::Any visitArgument(ExprParser::ArgumentContext *context) = 0;

    virtual antlrcpp::Any visitData_type(ExprParser::Data_typeContext *context) = 0;

    virtual antlrcpp::Any visitType_name(ExprParser::Type_nameContext *context) = 0;

    virtual antlrcpp::Any visitArray_type(ExprParser::Array_typeContext *context) = 0;

    virtual antlrcpp::Any visitArray_declaration(ExprParser::Array_declarationContext *context) = 0;

    virtual antlrcpp::Any visitCompound_statement(ExprParser::Compound_statementContext *context) = 0;

    virtual antlrcpp::Any visitStatement_list(ExprParser::Statement_listContext *context) = 0;

    virtual antlrcpp::Any visitStatement(ExprParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitEmpty_statement(ExprParser::Empty_statementContext *context) = 0;

    virtual antlrcpp::Any visitAssign_statement(ExprParser::Assign_statementContext *context) = 0;

    virtual antlrcpp::Any visitLhs(ExprParser::LhsContext *context) = 0;

    virtual antlrcpp::Any visitRhs(ExprParser::RhsContext *context) = 0;

    virtual antlrcpp::Any visitVariable(ExprParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitExpression(ExprParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitSingle_expression(ExprParser::Single_expressionContext *context) = 0;

    virtual antlrcpp::Any visitTerm_expression(ExprParser::Term_expressionContext *context) = 0;

    virtual antlrcpp::Any visitFactor(ExprParser::FactorContext *context) = 0;

    virtual antlrcpp::Any visitFor_statement(ExprParser::For_statementContext *context) = 0;

    virtual antlrcpp::Any visitWhile_statement(ExprParser::While_statementContext *context) = 0;

    virtual antlrcpp::Any visitRepeat_statement(ExprParser::Repeat_statementContext *context) = 0;

    virtual antlrcpp::Any visitIf_statement(ExprParser::If_statementContext *context) = 0;

    virtual antlrcpp::Any visitTrue_statement(ExprParser::True_statementContext *context) = 0;

    virtual antlrcpp::Any visitFalse_statment(ExprParser::False_statmentContext *context) = 0;

    virtual antlrcpp::Any visitCase_statment(ExprParser::Case_statmentContext *context) = 0;

    virtual antlrcpp::Any visitCase_branch_list(ExprParser::Case_branch_listContext *context) = 0;

    virtual antlrcpp::Any visitCase_branch(ExprParser::Case_branchContext *context) = 0;

    virtual antlrcpp::Any visitCase_constant_list(ExprParser::Case_constant_listContext *context) = 0;

    virtual antlrcpp::Any visitCase_constant(ExprParser::Case_constantContext *context) = 0;

    virtual antlrcpp::Any visitWrite_statement(ExprParser::Write_statementContext *context) = 0;

    virtual antlrcpp::Any visitWriteln_statement(ExprParser::Writeln_statementContext *context) = 0;

    virtual antlrcpp::Any visitWrite_argument_list(ExprParser::Write_argument_listContext *context) = 0;

    virtual antlrcpp::Any visitWrite_argument(ExprParser::Write_argumentContext *context) = 0;

    virtual antlrcpp::Any visitWidth(ExprParser::WidthContext *context) = 0;

    virtual antlrcpp::Any visitDecimal_place(ExprParser::Decimal_placeContext *context) = 0;

    virtual antlrcpp::Any visitSign(ExprParser::SignContext *context) = 0;

    virtual antlrcpp::Any visitRelation_operator(ExprParser::Relation_operatorContext *context) = 0;

    virtual antlrcpp::Any visitExpression_operator(ExprParser::Expression_operatorContext *context) = 0;

    virtual antlrcpp::Any visitTerm_operator(ExprParser::Term_operatorContext *context) = 0;

    virtual antlrcpp::Any visitNumber(ExprParser::NumberContext *context) = 0;

    virtual antlrcpp::Any visitUnsign_number(ExprParser::Unsign_numberContext *context) = 0;

    virtual antlrcpp::Any visitChar_constant(ExprParser::Char_constantContext *context) = 0;

    virtual antlrcpp::Any visitString_constant(ExprParser::String_constantContext *context) = 0;


};

