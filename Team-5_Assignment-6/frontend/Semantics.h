#ifndef SEMANTICS_H_
#define SEMANTICS_H_

#include <map>

#include "target/generated-sources/ant4/ExprBaseVisitor.h"
#include "antlr4-runtime.h"

#include "intermediate/symtab/SymtabStack.h"
#include "intermediate/symtab/SymtabEntry.h"
#include "intermediate/symtab/Predefined.h"
#include "intermediate/type/Typespec.h"
#include "SemanticError.h"


using namespace std;
using namespace intermediate::symtab;
using namespace intermediate::type;

class Semantics : public ExprBaseVisitor
{
private:
    SymtabStack *symtab_stack;
    SymtabEntry *program_id;
    SemanticError error;

    map<string, Typespec *> *typeTable;
    int typeCount(Typespec *type);
    bool expressionIsVariable(ExprParser::ExpressionContext *exprCtx);
    void checkCallArguments(ExprParser::Argument_listContext *listCtx, vector<SymtabEntry *> *parms);

    Typespec *variableDatatype(ExprParser::VariableContext *varCtx, Typespec *varType);


public:
    Semantics() :program_id(nullptr){
        symtab_stack = new SymtabStack();
        Predefined::initialize(symtab_stack);

        typeTable = new map<string, Typespec *>();
        (*typeTable)["integer"] = Predefined::integerType;
        (*typeTable)["real"]    = Predefined::realType;
        (*typeTable)["boolean"] = Predefined::booleanType;
        (*typeTable)["char"]    = Predefined::charType;
        (*typeTable)["string"]  = Predefined::stringType;
    }

    SymtabEntry *getProgram_id() { return program_id; }
    SymtabStack *get_symtab() { return symtab_stack; }
    int getErrorCount() const { return error.getCount(); }
    static Object defaultValue(Typespec *type);

    Object visitProgram(ExprParser::ProgramContext *ctx) override;
    Object visitProgram_header(ExprParser::Program_headerContext *ctx) override;
    Object visitConstant_definition(ExprParser::Constant_definitionContext *ctx) override;
    Object visitConstant(ExprParser::ConstantContext *ctx) override;
    Object visitType_declaration(ExprParser::Type_declarationContext *ctx) override;
    Object visitSimple_type_spec(ExprParser::Simple_type_specContext *ctx) override;
    Object visitType_identifier_type_spec(ExprParser::Type_identifier_type_specContext *ctx) override;
    Object visitType_identifier(ExprParser::Type_identifierContext *ctx) override;
    Object visitSubrange_type_spec(ExprParser::Subrange_type_specContext *ctx) override;
    Object visitArray_type_spec(ExprParser::Array_type_specContext *ctx) override;
    Object visitVariable_declaration(ExprParser::Variable_declarationContext *ctx) override;
    Object visitRoutine_declaration(ExprParser::Routine_declarationContext *ctx) override;
    Object visitParameter_list(ExprParser::Parameter_listContext *ctx) override;
    Object visitParameter_declaration(ExprParser::Parameter_declarationContext *ctx) override;
    Object visitAssign_statement(ExprParser::Assign_statementContext *ctx) override;
    Object visitLhs(ExprParser::LhsContext *ctx) override;
    Object visitIf_statement(ExprParser::If_statementContext *ctx) override;
    Object visitCase_statement(ExprParser::Case_statementContext *ctx) override;
    Object visitRepeat_statement(ExprParser::Repeat_statementContext *ctx) override;
    Object visitWhile_statement(ExprParser::While_statementContext *ctx) override;
    Object visitFor_statement(ExprParser::For_statementContext *ctx) override;
    Object visitProcedure_call(ExprParser::Procedure_callContext *ctx) override;
    Object visitFunction_call_factor(ExprParser::Function_call_factorContext *ctx) override;
    Object visitExpression(ExprParser::ExpressionContext *ctx) override;
    Object visitSimpleExpression(ExprParser::SimpleExpressionContext *ctx) override;
    Object visitTerm(ExprParser::TermContext *ctx) override;
    Object visitVariable_factor(ExprParser::Variable_factorContext *ctx) override;
    Object visitVariable(ExprParser::VariableContext *ctx) override;
    Object visitVariable_name(ExprParser::Variable_nameContext *ctx) override;
    Object visitNumber_factor(ExprParser::Number_factorContext *ctx) override;
    Object visitCharacter_factor(ExprParser::Character_factorContext *ctx) override;
    Object visitString_factor(ExprParser::String_factorContext *ctx) override;
    Object visitNot_factor(ExprParser::Not_factorContext *ctx) override;
    Object visitParenthesized_factor(ExprParser::Parenthesized_factorContext *ctx) override;
};


#endif /* SEMANTICS_H_ */
