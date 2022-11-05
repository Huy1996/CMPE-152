
    #include <map>
    #include "intermediate/symtab/Symtab.h"
    #include "intermediate/type/Typespec.h"
    using namespace intermediate::symtab;
    using namespace intermediate::type;


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

    virtual antlrcpp::Any visitConstant_list(ExprParser::Constant_listContext *context) = 0;

    virtual antlrcpp::Any visitConstant_definition(ExprParser::Constant_definitionContext *context) = 0;

    virtual antlrcpp::Any visitConstant_name(ExprParser::Constant_nameContext *context) = 0;

    virtual antlrcpp::Any visitConstant(ExprParser::ConstantContext *context) = 0;

    virtual antlrcpp::Any visitTypes_section(ExprParser::Types_sectionContext *context) = 0;

    virtual antlrcpp::Any visitType_declaration_list(ExprParser::Type_declaration_listContext *context) = 0;

    virtual antlrcpp::Any visitType_declaration(ExprParser::Type_declarationContext *context) = 0;

    virtual antlrcpp::Any visitType_identifier(ExprParser::Type_identifierContext *context) = 0;

    virtual antlrcpp::Any visitSimple_type_spec(ExprParser::Simple_type_specContext *context) = 0;

    virtual antlrcpp::Any visitArray_type_spec(ExprParser::Array_type_specContext *context) = 0;

    virtual antlrcpp::Any visitType_identifier_type_spec(ExprParser::Type_identifier_type_specContext *context) = 0;

    virtual antlrcpp::Any visitSubrange_type_spec(ExprParser::Subrange_type_specContext *context) = 0;

    virtual antlrcpp::Any visitVariable_section(ExprParser::Variable_sectionContext *context) = 0;

    virtual antlrcpp::Any visitVariable_declaration_list(ExprParser::Variable_declaration_listContext *context) = 0;

    virtual antlrcpp::Any visitVariable_declaration(ExprParser::Variable_declarationContext *context) = 0;

    virtual antlrcpp::Any visitVariable_name_list(ExprParser::Variable_name_listContext *context) = 0;

    virtual antlrcpp::Any visitVariable_name(ExprParser::Variable_nameContext *context) = 0;

    virtual antlrcpp::Any visitSubrange_type(ExprParser::Subrange_typeContext *context) = 0;

    virtual antlrcpp::Any visitArray_type(ExprParser::Array_typeContext *context) = 0;

    virtual antlrcpp::Any visitArray_declaration(ExprParser::Array_declarationContext *context) = 0;

    virtual antlrcpp::Any visitRoutine_section(ExprParser::Routine_sectionContext *context) = 0;

    virtual antlrcpp::Any visitRoutine_declaration(ExprParser::Routine_declarationContext *context) = 0;

    virtual antlrcpp::Any visitProcedure(ExprParser::ProcedureContext *context) = 0;

    virtual antlrcpp::Any visitFunction(ExprParser::FunctionContext *context) = 0;

    virtual antlrcpp::Any visitRoutine_name(ExprParser::Routine_nameContext *context) = 0;

    virtual antlrcpp::Any visitParameters(ExprParser::ParametersContext *context) = 0;

    virtual antlrcpp::Any visitParameter_list(ExprParser::Parameter_listContext *context) = 0;

    virtual antlrcpp::Any visitParameter_declaration(ExprParser::Parameter_declarationContext *context) = 0;

    virtual antlrcpp::Any visitParameter_name_list(ExprParser::Parameter_name_listContext *context) = 0;

    virtual antlrcpp::Any visitParameter_name(ExprParser::Parameter_nameContext *context) = 0;

    virtual antlrcpp::Any visitProcedure_call(ExprParser::Procedure_callContext *context) = 0;

    virtual antlrcpp::Any visitProcedure_name(ExprParser::Procedure_nameContext *context) = 0;

    virtual antlrcpp::Any visitFunction_call(ExprParser::Function_callContext *context) = 0;

    virtual antlrcpp::Any visitFunction_name(ExprParser::Function_nameContext *context) = 0;

    virtual antlrcpp::Any visitArgument_list(ExprParser::Argument_listContext *context) = 0;

    virtual antlrcpp::Any visitArgument(ExprParser::ArgumentContext *context) = 0;

    virtual antlrcpp::Any visitStatement(ExprParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitCompound_statement(ExprParser::Compound_statementContext *context) = 0;

    virtual antlrcpp::Any visitStatement_list(ExprParser::Statement_listContext *context) = 0;

    virtual antlrcpp::Any visitAssign_statement(ExprParser::Assign_statementContext *context) = 0;

    virtual antlrcpp::Any visitLhs(ExprParser::LhsContext *context) = 0;

    virtual antlrcpp::Any visitRhs(ExprParser::RhsContext *context) = 0;

    virtual antlrcpp::Any visitIf_statement(ExprParser::If_statementContext *context) = 0;

    virtual antlrcpp::Any visitTrue_statement(ExprParser::True_statementContext *context) = 0;

    virtual antlrcpp::Any visitFalse_statement(ExprParser::False_statementContext *context) = 0;

    virtual antlrcpp::Any visitCase_statement(ExprParser::Case_statementContext *context) = 0;

    virtual antlrcpp::Any visitCase_branch_list(ExprParser::Case_branch_listContext *context) = 0;

    virtual antlrcpp::Any visitCase_branch(ExprParser::Case_branchContext *context) = 0;

    virtual antlrcpp::Any visitCase_constant_list(ExprParser::Case_constant_listContext *context) = 0;

    virtual antlrcpp::Any visitCase_constant(ExprParser::Case_constantContext *context) = 0;

    virtual antlrcpp::Any visitRepeat_statement(ExprParser::Repeat_statementContext *context) = 0;

    virtual antlrcpp::Any visitWhile_statement(ExprParser::While_statementContext *context) = 0;

    virtual antlrcpp::Any visitFor_statement(ExprParser::For_statementContext *context) = 0;

    virtual antlrcpp::Any visitWrite_statement(ExprParser::Write_statementContext *context) = 0;

    virtual antlrcpp::Any visitWriteln_statement(ExprParser::Writeln_statementContext *context) = 0;

    virtual antlrcpp::Any visitWrite_argument_list(ExprParser::Write_argument_listContext *context) = 0;

    virtual antlrcpp::Any visitWrite_argument(ExprParser::Write_argumentContext *context) = 0;

    virtual antlrcpp::Any visitWidth(ExprParser::WidthContext *context) = 0;

    virtual antlrcpp::Any visitDecimal_place(ExprParser::Decimal_placeContext *context) = 0;

    virtual antlrcpp::Any visitExpression(ExprParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExpression(ExprParser::SimpleExpressionContext *context) = 0;

    virtual antlrcpp::Any visitTerm(ExprParser::TermContext *context) = 0;

    virtual antlrcpp::Any visitVariable_factor(ExprParser::Variable_factorContext *context) = 0;

    virtual antlrcpp::Any visitNumber_factor(ExprParser::Number_factorContext *context) = 0;

    virtual antlrcpp::Any visitCharacter_factor(ExprParser::Character_factorContext *context) = 0;

    virtual antlrcpp::Any visitString_factor(ExprParser::String_factorContext *context) = 0;

    virtual antlrcpp::Any visitFunction_call_factor(ExprParser::Function_call_factorContext *context) = 0;

    virtual antlrcpp::Any visitNot_factor(ExprParser::Not_factorContext *context) = 0;

    virtual antlrcpp::Any visitParenthesized_factor(ExprParser::Parenthesized_factorContext *context) = 0;

    virtual antlrcpp::Any visitVariable(ExprParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitModifier(ExprParser::ModifierContext *context) = 0;

    virtual antlrcpp::Any visitIndex_list(ExprParser::Index_listContext *context) = 0;

    virtual antlrcpp::Any visitIndex(ExprParser::IndexContext *context) = 0;

    virtual antlrcpp::Any visitField(ExprParser::FieldContext *context) = 0;

    virtual antlrcpp::Any visitNumber(ExprParser::NumberContext *context) = 0;

    virtual antlrcpp::Any visitUnsigned_number(ExprParser::Unsigned_numberContext *context) = 0;

    virtual antlrcpp::Any visitInteger_constant(ExprParser::Integer_constantContext *context) = 0;

    virtual antlrcpp::Any visitReal_constant(ExprParser::Real_constantContext *context) = 0;

    virtual antlrcpp::Any visitCharacter_constant(ExprParser::Character_constantContext *context) = 0;

    virtual antlrcpp::Any visitString_constant(ExprParser::String_constantContext *context) = 0;

    virtual antlrcpp::Any visitSign(ExprParser::SignContext *context) = 0;

    virtual antlrcpp::Any visitRelational_operator(ExprParser::Relational_operatorContext *context) = 0;

    virtual antlrcpp::Any visitExpression_operator(ExprParser::Expression_operatorContext *context) = 0;

    virtual antlrcpp::Any visitTerm_operator(ExprParser::Term_operatorContext *context) = 0;


};

