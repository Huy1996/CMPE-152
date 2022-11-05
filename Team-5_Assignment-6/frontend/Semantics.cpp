#include <vector>
#include <set>

#include "antlr4-runtime.h"

#include "intermediate/symtab/SymtabStack.h"
#include "intermediate/symtab/Symtab.h"
#include "intermediate/symtab/SymtabEntry.h"
#include "intermediate/symtab/Predefined.h"
#include "intermediate/type/Typespec.h"
#include "intermediate/type/TypeChecker.h"
#include "intermediate/util/CrossReferencer.h"
#include "Semantics.h"

//#define DEBUG

namespace intermediate { namespace symtab {
    int Symtab::unnamedIndex = 0;
}}


using namespace std;
using namespace intermediate::symtab;
using namespace intermediate::type;
using namespace intermediate::util;

Object Semantics::visitProgram(ExprParser::ProgramContext *ctx){
    #ifdef DEBUG
        cout << "Visiting program" << endl;
    #endif
    visit(ctx->program_header());
    visit(ctx->program_body()->program_declaration());
    visit(ctx->program_body()->compound_statement());
    #ifdef DEBUG
        cout << "Exiting program" << endl;
    #endif
    return nullptr;
}

Object Semantics::visitProgram_header(ExprParser::Program_headerContext *ctx){
    #ifdef DEBUG
        cout << "Visiting program header" << endl;
    #endif
    ExprParser::Program_nameContext *id_ctx = ctx->program_name();
    string program_name = id_ctx->IDENTIFIER()->getText();  // don't shift case

    program_id = symtab_stack->enterLocal(program_name, PROGRAM);
    program_id->setRoutineSymtab(symtab_stack->push());

    symtab_stack->setProgramId(program_id);
    symtab_stack->getLocalSymtab()->setOwner(program_id);

    id_ctx->entry = program_id;
    #ifdef DEBUG
        cout << "Exiting program header" << endl;
    #endif
    return nullptr;
}

Object Semantics::visitConstant_definition(ExprParser::Constant_definitionContext *ctx){
    #ifdef DEBUG
        cout << "Visiting constant definition" << endl;
    #endif
    ExprParser::Constant_nameContext *id_ctx = ctx->constant_name();
    string constant_name = toLowerCase(id_ctx->IDENTIFIER()->getText());
    SymtabEntry *constant_id = symtab_stack->lookupLocal(constant_name);

    if (constant_id == nullptr){
        ExprParser::ConstantContext *const_ctx = ctx->constant();
        Object constValue = visit(const_ctx);

        constant_id = symtab_stack->enterLocal(constant_name, CONSTANT);
        constant_id->setValue(constValue);
        constant_id->setType(const_ctx->type);

        id_ctx->entry = constant_id;
        id_ctx->type  = const_ctx->type;
    }
    else{
        error.print(ERROR::REDECLARED_IDENTIFIER, ctx);

        id_ctx->entry = constant_id;
        id_ctx->type  = Predefined::integerType;
    }

    constant_id->appendLineNumber(ctx->getStart()->getLine());
    #ifdef DEBUG
        cout << "Exiting constant definition" << endl;
    #endif
    return nullptr;
}

Object Semantics::visitConstant(ExprParser::ConstantContext *ctx){
    #ifdef DEBUG
        cout << "Visiting constant" << endl;
    #endif
    if (ctx->IDENTIFIER() != nullptr){
        string constant_name = toLowerCase(ctx->IDENTIFIER()->getText());
        SymtabEntry *constant_id = symtab_stack->lookup(constant_name);

        if (constant_id != nullptr){
            Kind kind = constant_id->getKind();
            if ((kind != CONSTANT) && (kind != ENUMERATION_CONSTANT))
                error.print(ERROR::INVALID_CONSTANT, ctx);

            ctx->type  = constant_id->getType();
            ctx->value = constant_id->getValue();

            constant_id->appendLineNumber(ctx->getStart()->getLine());
        }
        else{
            error.print(ERROR::UNDECLARED_IDENTIFIER, ctx);
            ctx->type = Predefined::integerType;
            ctx->value = 0;
        }
    }
    else if (ctx->character_constant() != nullptr){
        ctx->type = Predefined::charType;
        ctx->value = ctx->getText()[1];
    }
    else if (ctx->string_constant() != nullptr){
        string ExprString = ctx->string_constant()->STRING()->getText();
        string unquoted = ExprString.substr(1, ExprString.length()-2);

        size_t pos = 0;
        while ((pos = unquoted.find("''", pos)) != string::npos)
        {
            unquoted.replace(pos++, 2, "'");
        }

        pos = 0;
        while ((pos = unquoted.find("\"", pos)) != string::npos)
        {
            unquoted.replace(pos++, 2, "\\\"");
        }

        ctx->type = Predefined::stringType;
        ctx->value = new string(unquoted);
    }
    else{
        ExprParser::Unsigned_numberContext *unsigned_ctx = ctx->unsigned_number();

        if (unsigned_ctx->integer_constant() != nullptr)
        {
            ctx->type = Predefined::integerType;
            ctx->value = stoi(ctx->getText());
        }
        else
        {
            ctx->type = Predefined::realType;
            ctx->value = stod(ctx->getText());
        }
    }
    #ifdef DEBUG
        cout << "Exiting constant" << endl;
    #endif

    return ctx->value;
}

Object Semantics::visitType_declaration(ExprParser::Type_declarationContext *ctx){
    #ifdef DEBUG
        cout << "Visiting type declaration" << endl;
    #endif
    ExprParser::Type_identifierContext *id_ctx = ctx->type_identifier();
    string type_name = toLowerCase(id_ctx->IDENTIFIER()->getText());
    SymtabEntry *type_id = symtab_stack->lookupLocal(type_name);

    ExprParser::Data_typeContext *typespec_ctx = ctx->data_type();

    if (type_id == nullptr){
        ExprParser::Data_typeContext *type_ctx = ctx->data_type();
        visit(type_ctx);
        type_id = symtab_stack->enterLocal(type_name, TYPE);
        type_id->setType(type_ctx->type);
        type_ctx->type->setIdentifier(type_id);
    }
    else{
        error.print(ERROR::REDECLARED_IDENTIFIER, ctx);
    }

    id_ctx->entry = type_id;
    id_ctx->type  = typespec_ctx->type;

    type_id->appendLineNumber(ctx->getStart()->getLine());
    #ifdef DEBUG
        cout << "Exiting type declaration" << endl;
    #endif
    return nullptr;
}


Object Semantics::visitSimple_type_spec(ExprParser::Simple_type_specContext *ctx){
    #ifdef DEBUG
        cout << "Visiting simple type spec" << endl;
    #endif
    visit(ctx->simple_type());
    ctx->type = ctx->simple_type()->type;
    #ifdef DEBUG
        cout << "Exiting simple type spec" << endl;
    #endif
    return nullptr;
}

Object Semantics::visitType_identifier_type_spec(ExprParser::Type_identifier_type_specContext *ctx){
    #ifdef DEBUG
        cout << "Visiting type identifier type spec" << endl;
    #endif
    visit(ctx->type_identifier());
    ctx->type = ctx->type_identifier()->type;
    #ifdef DEBUG
        cout << "Exiting type identifier type spec" << endl;
    #endif
    return nullptr;
}

Object Semantics::visitType_identifier(ExprParser::Type_identifierContext *ctx){
    #ifdef DEBUG
        cout << "Visiting type identifier" << endl;
    #endif
    string type_name = toLowerCase(ctx->IDENTIFIER()->getText());
    SymtabEntry *type_id = symtab_stack->lookup(type_name);

    if (type_id != nullptr){
        if (type_id->getKind() != TYPE){
            error.print(ERROR::INVALID_TYPE, ctx);
            ctx->type = Predefined::integerType;
        }
        else{
            ctx->type = type_id->getType();
        }

        type_id->appendLineNumber(ctx->start->getLine());
    }
    else{
        error.print(ERROR::UNDECLARED_IDENTIFIER, ctx);
        ctx->type = Predefined::integerType;
    }
    ctx->entry = type_id;
    #ifdef DEBUG
        cout << "Exiting type identifier" << endl;
    #endif
    return nullptr;
}


Object Semantics::visitSubrange_type_spec(ExprParser::Subrange_type_specContext *ctx){
    #ifdef DEBUG
        cout << "Visiting subrange type spec" << endl;
    #endif
    Typespec *type = new Typespec(SUBRANGE);
    ExprParser::Subrange_typeContext *sub_ctx = ctx->subrange_type();
    ExprParser::ConstantContext *min_ctx = sub_ctx->constant()[0];
    ExprParser::ConstantContext *max_ctx = sub_ctx->constant()[1];

    Object minObj = visit(min_ctx);
    Object maxObj = visit(max_ctx);

    Typespec *minType = min_ctx->type;
    Typespec *maxType = max_ctx->type;

    if (   (minType->getForm() != SCALAR) || (minType == Predefined::realType) || (minType == Predefined::stringType)){
        error.print(ERROR::INVALID_CONSTANT, min_ctx);
        minType = Predefined::integerType;
        minObj  = 0;
    }

    int minValue;
    int maxValue;

    if (minType == Predefined::integerType){
    	minValue = minObj.as<int>();
    	maxValue = maxObj.as<int>();
    }
    else if (minType == Predefined::charType){
    	minValue = minObj.as<char>();
    	maxValue = maxObj.as<char>();
    }

    if ((maxType != minType) || (minValue > maxValue)){
        error.print(ERROR::INVALID_CONSTANT, max_ctx);
        maxType = minType;
        maxObj  = minObj;
    }

    type->setSubrangeBaseType(minType);
    type->setSubrangeMinValue(minValue);
    type->setSubrangeMaxValue(maxValue);

    ctx->type = type;
    #ifdef DEBUG
        cout << "Exiting subrange type spec" << endl;
    #endif
    return nullptr;
}

Object Semantics::visitArray_type_spec(ExprParser::Array_type_specContext *ctx){
    #ifdef DEBUG
        cout << "Visiting array type spec" << endl;
    #endif
    Typespec *array_type = new Typespec(ARRAY);
    ExprParser::Array_typeContext *array_ctx = ctx->array_type();
    ExprParser::Array_declarationContext *list_ctx = array_ctx->array_declaration();

    ctx->type = array_type;

    int count = list_ctx->simple_type().size();
    for (int i = 0; i < count; i++){
        ExprParser::Simple_typeContext *simple_ctx = list_ctx->simple_type()[i];
        visit(simple_ctx);
        array_type->setArrayIndexType(simple_ctx->type);
        array_type->setArrayElementCount(typeCount(simple_ctx->type));

        if (i < count-1){
            Typespec *element_type = new Typespec(ARRAY);
            array_type->setArrayElementType(element_type);
            array_type = element_type;
        }
    }

    visit(array_ctx->data_type());
    Typespec *element_type = array_ctx->data_type()->type;
    array_type->setArrayElementType(element_type);
    #ifdef DEBUG
        cout << "Exiting array type spec" << endl;
    #endif

    return nullptr;
}

int Semantics::typeCount(Typespec *type){
    #ifdef DEBUG
        cout << "Type count" << endl;
    #endif
    int count = 0;
    int minValue = type->getSubrangeMinValue();
    int maxValue = type->getSubrangeMaxValue();
    count = maxValue - minValue + 1;

    #ifdef DEBUG
        cout << "Exiting type count" << endl;
    #endif
    return count;
}

Object Semantics::visitVariable_declaration(ExprParser::Variable_declarationContext *ctx){
    #ifdef DEBUG
        cout << "Visiting variable declaration" << endl;
    #endif
    ExprParser::Data_typeContext *type_ctx = ctx->data_type();
    visit(type_ctx);
    ExprParser::Variable_name_listContext *list_ctx = ctx->variable_name_list();
    for (ExprParser::Variable_nameContext *id_ctx : list_ctx->variable_name()){
        int line_number = id_ctx->getStart()->getLine();
        string variable_name = toLowerCase(id_ctx->IDENTIFIER()->getText());
        SymtabEntry *variable_id = symtab_stack->lookupLocal(variable_name);

        if (variable_id == nullptr){
            variable_id = symtab_stack->enterLocal(variable_name, VARIABLE);
            variable_id->setType(type_ctx->type);

            Symtab *symtab = variable_id->getSymtab();
            if (symtab->getNestingLevel() > 1){
                variable_id->setSlotNumber(symtab->nextSlotNumber());
            }

            id_ctx->entry = variable_id;
        }
        else{
            error.print(ERROR::REDECLARED_IDENTIFIER, ctx);
        }
        variable_id->appendLineNumber(line_number);
    }
    #ifdef DEBUG
        cout << "Exiting variable declaration" << endl;
    #endif

    return nullptr;
}

Object Semantics::visitRoutine_declaration(ExprParser::Routine_declarationContext *ctx){
    #ifdef DEBUG
        cout << "Visiting routine declaration" << endl;
    #endif
    ExprParser::FunctionContext  *func_ctx = ctx->function();
    ExprParser::ProcedureContext *proc_ctx = ctx->procedure();
    ExprParser::Routine_nameContext *id_ctx = nullptr;
    ExprParser::ParametersContext *parameters = nullptr;
    bool functionDefinition = func_ctx != nullptr;
    Typespec *returnType = nullptr;
    string routine_name;

    if (functionDefinition){
        id_ctx = func_ctx->routine_name();
        parameters = func_ctx->parameters();
    }
    else{
        id_ctx = proc_ctx->routine_name();
        parameters = proc_ctx->parameters();
    }

    routine_name = toLowerCase(id_ctx->IDENTIFIER()->getText());
    SymtabEntry *routine_id = symtab_stack->lookupLocal(routine_name);

    if (routine_id != nullptr){
        error.print(ERROR::REDECLARED_IDENTIFIER, ctx->getStart()->getLine(), routine_name);
        return nullptr;
    }

    routine_id = symtab_stack->enterLocal(routine_name, functionDefinition ? FUNCTION : PROCEDURE);
    routine_id->setRoutineCode(DECLARED);
    id_ctx->entry = routine_id;

    SymtabEntry *parent_id = symtab_stack->getLocalSymtab()->getOwner();
    parent_id->appendSubroutine(routine_id);

    routine_id->setRoutineSymtab(symtab_stack->push());
    id_ctx->entry = routine_id;

    Symtab *symtab = symtab_stack->getLocalSymtab();
    symtab->setOwner(routine_id);

    if (parameters != nullptr){
        vector<SymtabEntry *> *parameter_ids = visit(parameters->parameter_list()).as<vector<SymtabEntry *>*>();
        routine_id->setRoutineParameters(parameter_ids);

        for (SymtabEntry *parm_id : *parameter_ids)
            parm_id->setSlotNumber(symtab->nextSlotNumber());
    }

    if (functionDefinition){
        ExprParser::Type_identifierContext *type_id_ctx = func_ctx->type_identifier();
        visit(type_id_ctx);
        returnType = type_id_ctx->type;

        if (returnType->getForm() != SCALAR){
            error.print(ERROR::INVALID_RETURN_TYPE, type_id_ctx);
            returnType = Predefined::integerType;
        }

        routine_id->setType(returnType);
        id_ctx->type = returnType;
    }
    else
    {
        id_ctx->type = nullptr;
    }

    visit(ctx->program_body()->program_declaration());

    if (functionDefinition){
        SymtabEntry *assocVar_id = symtab_stack->enterLocal(routine_name, VARIABLE);
        assocVar_id->setSlotNumber(symtab->nextSlotNumber());
        assocVar_id->setType(returnType);
    }

    visit(ctx->program_body()->compound_statement());
    routine_id->setExecutable(ctx->program_body()->compound_statement());

    symtab_stack->pop();
    #ifdef DEBUG
        cout << "Exiting routine declaration" << endl;
    #endif
    return nullptr;
}

Object Semantics::visitParameter_list(ExprParser::Parameter_listContext *ctx){
    #ifdef DEBUG
        cout << "Visiting parameter list" << endl;
    #endif
    vector<SymtabEntry *> *parameterList = new vector<SymtabEntry *>();

    for (ExprParser::Parameter_declarationContext *dcl_ctx : ctx->parameter_declaration()){
        vector<SymtabEntry *> parameter_sub_list = visit(dcl_ctx).as<vector<SymtabEntry *>>();
        for (SymtabEntry *id : parameter_sub_list) 
            parameterList->push_back(id);
    }

    #ifdef DEBUG
        cout << "Exiting parameter list" << endl;
    #endif
    return parameterList;
}

Object Semantics::visitParameter_declaration(ExprParser::Parameter_declarationContext *ctx){
    #ifdef DEBUG
        cout << "Visiting parameter declaration" << endl;
    #endif
    Kind kind = ctx->VAR() != nullptr ? REFERENCE_PARAMETER : VALUE_PARAMETER;
    ExprParser::Type_identifierContext *type_ctx = ctx->type_identifier();

    visit(type_ctx);
    Typespec *parm_type = type_ctx->type;

    vector<SymtabEntry *> parameter_sub_list;

    ExprParser::Parameter_name_listContext *list_ctx = ctx->parameter_name_list();
    for (ExprParser::Parameter_nameContext *id_ctx : list_ctx->parameter_name()){
        int line_number = id_ctx->getStart()->getLine();
        string parm_name = toLowerCase(id_ctx->IDENTIFIER()->getText());
        SymtabEntry *parm_id = symtab_stack->lookupLocal(parm_name);

        if (parm_id == nullptr){
            parm_id = symtab_stack->enterLocal(parm_name, kind);
            parm_id->setType(parm_type);
        }
        else{
            error.print(ERROR::REDECLARED_IDENTIFIER, id_ctx);
        }

        id_ctx->entry = parm_id;
        id_ctx->type  = parm_type;

        parameter_sub_list.push_back(parm_id);
        parm_id->appendLineNumber(line_number);
    }

    #ifdef DEBUG
        cout << "Exiting parameter declaration" << endl;
    #endif

    return parameter_sub_list;
}

Object Semantics::visitAssign_statement(ExprParser::Assign_statementContext *ctx){
    #ifdef DEBUG
        cout << "Visiting assign statement" << endl;
    #endif
    ExprParser::LhsContext *lhs_ctx = ctx->lhs();
    ExprParser::RhsContext *rhs_ctx = ctx->rhs();

    visitChildren(ctx);

    Typespec *lhsType = lhs_ctx->type;
    Typespec *rhsType = rhs_ctx->expression()->type;

    if (!TypeChecker::areAssignmentCompatible(lhsType, rhsType))
        error.print(ERROR::INCOMPATIBLE_ASSIGNMENT, ctx);

    #ifdef DEBUG
        cout << "Exiting assign statement" << endl;
    #endif
    return nullptr;
}

Object Semantics::visitLhs(ExprParser::LhsContext *ctx){
    #ifdef DEBUG
        cout << "Visiting lhs" << endl;
    #endif
    ExprParser::VariableContext *var_ctx = ctx->variable();
    visit(var_ctx);
    ctx->type = var_ctx->type;

    #ifdef DEBUG
        cout << "Exiting lhs" << endl;
    #endif
    return nullptr;
}

Object Semantics::visitIf_statement(ExprParser::If_statementContext *ctx){
    #ifdef DEBUG
        cout << "Visiting if statement" << endl;
    #endif
    ExprParser::ExpressionContext     *expr_ctx  = ctx->expression();
    ExprParser::True_statementContext  *true_ctx  = ctx->true_statement();
    ExprParser::False_statementContext *false_ctx = ctx->false_statement();

    visit(expr_ctx);
    Typespec *expr_type = expr_ctx->type;
    
    if (!TypeChecker::isBoolean(expr_type))    {
        error.print(ERROR::TYPE_MUST_BE_BOOLEAN, expr_ctx);
    }
    
    visit(true_ctx);
    if (false_ctx != nullptr) visit(false_ctx);

    #ifdef DEBUG
        cout << "Exiting if statement" << endl;
    #endif
    return nullptr;
}

Object Semantics::visitCase_statement(ExprParser::Case_statementContext *ctx){
    #ifdef DEBUG
        cout << "Visiting case statement" << endl;
    #endif
    ExprParser::ExpressionContext *expr_ctx = ctx->expression();
    visit(expr_ctx);
    Typespec *exprType = expr_ctx->type;
    Form exprTypeForm = exprType->getForm();

    if (((exprTypeForm != SCALAR) && (exprTypeForm != SUBRANGE))
        || (exprType == Predefined::realType)
        || (exprType == Predefined::stringType)){
        error.print(ERROR::TYPE_MISMATCH, expr_ctx);
        exprType = Predefined::integerType;
    }

    set<int> constants;
    ExprParser::Case_branch_listContext *branchList_ctx = ctx->case_branch_list();

    for (ExprParser::Case_branchContext *branch_ctx : branchList_ctx->case_branch()){
        ExprParser::Case_constant_listContext *constList_ctx = branch_ctx->case_constant_list();
        ExprParser::StatementContext *stmt_ctx = branch_ctx->statement();

        if (constList_ctx != nullptr){
            for (ExprParser::Case_constantContext *caseConst_ctx : constList_ctx->case_constant()){
                ExprParser::ConstantContext *const_ctx = caseConst_ctx->constant();
                Object constValue = visit(const_ctx);

                caseConst_ctx->type  = const_ctx->type;
                caseConst_ctx->value = 0;

                if (const_ctx->type != exprType){
                    error.print(ERROR::TYPE_MISMATCH, const_ctx);
                }
                else if (const_ctx->type == Predefined::integerType){
                    caseConst_ctx->value = constValue.as<int>();
                }
                else if (const_ctx->type == Predefined::charType){
                    caseConst_ctx->value = constValue.as<char>();
                }

                if (constants.find(caseConst_ctx->value) != constants.end()){
                    error.print(ERROR::DUPLICATE_CASE_CONSTANT, const_ctx);
                }
                else{
                    constants.insert(caseConst_ctx->value);
                }
            }
        }

        if (stmt_ctx != nullptr) 
            visit(stmt_ctx);
    }

    #ifdef DEBUG
        cout << "Exiting case statement" << endl;
    #endif
    return nullptr;
}

Object Semantics::visitRepeat_statement(ExprParser::Repeat_statementContext *ctx){
    #ifdef DEBUG
        cout << "Visiting repeat statement" << endl;
    #endif
    ExprParser::ExpressionContext *expr_ctx = ctx->expression();
    visit(expr_ctx);
    Typespec *exprType = expr_ctx->type;

    if (!TypeChecker::isBoolean(exprType)){
        error.print(ERROR::TYPE_MUST_BE_BOOLEAN, expr_ctx);
    }

    visit(ctx->statement_list());
    #ifdef DEBUG
        cout << "Exiting repeat statement" << endl;
    #endif
    return nullptr;
}

Object Semantics::visitWhile_statement(ExprParser::While_statementContext *ctx){
    #ifdef DEBUG
        cout << "Visiting while statement" << endl;
    #endif
    ExprParser::ExpressionContext *expr_ctx = ctx->expression();
    visit(expr_ctx);
    Typespec *exprType = expr_ctx->type;

    if (!TypeChecker::isBoolean(exprType)){
        error.print(ERROR::TYPE_MUST_BE_BOOLEAN, expr_ctx);
    }

    visit(ctx->statement());

    #ifdef DEBUG
        cout << "Exiting while statement" << endl;
    #endif
    return nullptr;
}

Object Semantics::visitFor_statement(ExprParser::For_statementContext *ctx){
    #ifdef DEBUG
        cout << "Visiting for statement" << endl;
    #endif
    ExprParser::VariableContext *var_ctx = ctx->variable();
    visit(var_ctx);

    string control_name = toLowerCase(var_ctx->variable_name()->getText());
    Typespec *controlType = Predefined::integerType;

    if (var_ctx->entry != nullptr){
        controlType = var_ctx->type;
        if ((controlType->getForm() != SCALAR ) || (controlType == Predefined::realType) || (controlType == Predefined::stringType)){
            error.print(ERROR::INVALID_CONTROL_VARIABLE, var_ctx);
        }
    }
    else{
        error.print(ERROR::UNDECLARED_IDENTIFIER, ctx->getStart()->getLine(),
                   control_name);
    }

    ExprParser::ExpressionContext *start_ctx = ctx->expression()[0];
    ExprParser::ExpressionContext *end_ctx   = ctx->expression()[1];

    visit(start_ctx);
    visit(end_ctx);

    if (start_ctx->type != controlType)  
        error.print(ERROR::TYPE_MISMATCH, start_ctx);
    if (start_ctx->type != end_ctx->type) 
        error.print(ERROR::TYPE_MISMATCH, end_ctx);

    visit(ctx->statement());

    #ifdef DEBUG
        cout << "Exiting for statement" << endl;
    #endif
    return nullptr;
}

Object Semantics::visitProcedure_call(ExprParser::Procedure_callContext *ctx){
    #ifdef DEBUG
        cout << "Visiting procedure call" << endl;
    #endif
    ExprParser::Procedure_nameContext *name_ctx = ctx->procedure_name();
    ExprParser::Argument_listContext *list_ctx = ctx->argument_list();
    string name = toLowerCase(ctx->procedure_name()->getText());
    SymtabEntry *procedure_id = symtab_stack->lookup(name);
    bool bad_name = false;

    if (procedure_id == nullptr){
        error.print(ERROR::UNDECLARED_IDENTIFIER, name_ctx);
        bad_name = true;
    }
    else if (procedure_id->getKind() != PROCEDURE){
        error.print(ERROR::NAME_MUST_BE_PROCEDURE, name_ctx);
        bad_name = true;
    }

    if (bad_name){
        for (ExprParser::ArgumentContext *expr_ctx : list_ctx->argument())
        {
            visit(expr_ctx);
        }
    }

    else{
        vector<SymtabEntry *> *parms = procedure_id->getRoutineParameters();
        checkCallArguments(list_ctx, parms);
    }

    name_ctx->entry = procedure_id;
    #ifdef DEBUG
        cout << "Exiting procedure call" << endl;
    #endif
    return nullptr;
}

Object Semantics::visitFunction_call_factor(ExprParser::Function_call_factorContext *ctx){
    #ifdef DEBUG
        cout << "Visiting function call factor" << endl;
    #endif
    ExprParser::Function_callContext *call_ctx = ctx->function_call();
    ExprParser::Function_nameContext *name_ctx = call_ctx->function_name();
    ExprParser::Argument_listContext *list_ctx = call_ctx->argument_list();
    string name = toLowerCase(call_ctx->function_name()->getText());
    SymtabEntry *function_id = symtab_stack->lookup(name);
    bool bad_name = false;

    ctx->type = Predefined::integerType;

    if (function_id == nullptr){
        error.print(ERROR::UNDECLARED_IDENTIFIER, name_ctx);
        bad_name = true;
    }
    else if (function_id->getKind() != FUNCTION){
        error.print(ERROR::NAME_MUST_BE_FUNCTION, name_ctx);
        bad_name = true;
    }

    if (bad_name){
        for (ExprParser::ArgumentContext *expr_ctx : list_ctx->argument()){
            visit(expr_ctx);
        }
    }

    else{
        vector<SymtabEntry *> *parms = function_id->getRoutineParameters();
        checkCallArguments(list_ctx, parms);
        ctx->type = function_id->getType();
    }

    name_ctx->entry = function_id;
    name_ctx->type  = ctx->type;
    #ifdef DEBUG
        cout << "Exiting function call factor" << endl;
    #endif

    return nullptr;
}

void Semantics::checkCallArguments(ExprParser::Argument_listContext *list_ctx, vector<SymtabEntry *> *parms){
    #ifdef DEBUG
        cout << "Visiting call arguments" << endl;
    #endif
    int parmsCount = parms->size();
    int argsCount = list_ctx != nullptr ? list_ctx->argument().size() : 0;

    if (parmsCount != argsCount){
        error.print(ERROR::ARGUMENT_COUNT_MISMATCH, list_ctx);
        return;
    }

    for (int i = 0; i < parmsCount; i++){
        ExprParser::ArgumentContext *arg_ctx = list_ctx->argument()[i];
        ExprParser::ExpressionContext *expr_ctx = arg_ctx->expression();
        visit(expr_ctx);

        SymtabEntry *parm_id = (*parms)[i];
        Typespec *parm_type = parm_id->getType();
        Typespec *argType  = expr_ctx->type;

        if (parm_id->getKind() == REFERENCE_PARAMETER){
            if (expressionIsVariable(expr_ctx)){
                if (parm_type != argType){
                    error.print(ERROR::TYPE_MISMATCH, expr_ctx);
                }
            }
            else{
                error.print(ERROR::ARGUMENT_MUST_BE_VARIABLE, expr_ctx);
            }
        }

        else if (!TypeChecker::areAssignmentCompatible(parm_type, argType)){
            error.print(ERROR::TYPE_MISMATCH, expr_ctx);
        }
    }
    #ifdef DEBUG
        cout << "Exiting call arguments" << endl;
    #endif
}

bool Semantics::expressionIsVariable(ExprParser::ExpressionContext *expr_ctx){
    #ifdef DEBUG
        cout << "Visiting expression is variable" << endl;
    #endif

    if (expr_ctx->simpleExpression().size() == 1){
        ExprParser::SimpleExpressionContext *simple_ctx =expr_ctx->simpleExpression()[0];
        if (simple_ctx->term().size() == 1){
            ExprParser::TermContext *term_ctx = simple_ctx->term()[0];

            if (term_ctx->factor().size() == 1){
                return dynamic_cast<ExprParser::Variable_factorContext *>(term_ctx->factor()[0]) != nullptr;
            }
        }
    }

    #ifdef DEBUG
        cout << "Exiting expression is variable" << endl;
    #endif
    return false;
}

Object Semantics::visitExpression(ExprParser::ExpressionContext *ctx){
    #ifdef DEBUG
        cout << "Visiting expression" << endl;
    #endif
    ExprParser::SimpleExpressionContext *simple_ctx1 = ctx->simpleExpression()[0];
    visit(simple_ctx1);
    Typespec *simpleType1 = simple_ctx1->type;
    ctx->type = simpleType1;

    ExprParser::Relational_operatorContext *relop_ctx = ctx->relational_operator();


    if (relop_ctx != nullptr){
        ExprParser::SimpleExpressionContext *simple_ctx2 = ctx->simpleExpression()[1];
        visit(simple_ctx2);

        Typespec *simpleType2 = simple_ctx2->type;
        if (!TypeChecker::areComparisonCompatible(simpleType1, simpleType2)){
            error.print(ERROR::INCOMPATIBLE_COMPARISON, ctx);
        }

        ctx->type = Predefined::booleanType;
    }
    #ifdef DEBUG
        cout << "Exiting expression" << endl;
    #endif

    return nullptr;
}

Object Semantics::visitSimpleExpression(ExprParser::SimpleExpressionContext *ctx){
    #ifdef DEBUG
        cout << "Visiting simple expression" << endl;
    #endif
    int count = ctx->term().size();
    ExprParser::SignContext *sign_ctx = ctx->sign();
    bool hasSign = sign_ctx != nullptr;
    ExprParser::TermContext *term_ctx1 = ctx->term()[0];

    if (hasSign){
        string sign = sign_ctx->getText();
        if ((sign== "+") && (sign == "-")){
            error.print(ERROR::INVALID_SIGN, sign_ctx);
        }
    }


    visit(term_ctx1);
    Typespec *term_type1 = term_ctx1->type;

    for (int i = 1; i < count; i++){
        string op = toLowerCase(ctx->expression_operator()[i-1]->getText());
        ExprParser::TermContext *term_ctx2 = ctx->term()[i];
        visit(term_ctx2);
        Typespec *term_type2 = term_ctx2->type;

        if (op == "or"){
            if (!TypeChecker::isBoolean(term_type1)){
                error.print(ERROR::TYPE_MUST_BE_BOOLEAN, term_ctx1);
            }
            if (!TypeChecker::isBoolean(term_type2)){
                error.print(ERROR::TYPE_MUST_BE_BOOLEAN, term_ctx2);
            }
            if (hasSign)
            {
                error.print(ERROR::INVALID_SIGN, sign_ctx);
            }

            term_type2 = Predefined::booleanType;
        }
        else if (op == "+"){
            if (TypeChecker::areBothInteger(term_type1, term_type2)){
                term_type2 = Predefined::integerType;
            }
            else if (TypeChecker::isAtLeastOneReal(term_type1, term_type2)){
                term_type2 = Predefined::realType;
            }
            else if (TypeChecker::areBothString(term_type1, term_type2)){
                if (hasSign) 
                    error.print(ERROR::INVALID_SIGN, sign_ctx);
                term_type2 = Predefined::stringType;
            }
            else{
                if (!TypeChecker::isIntegerOrReal(term_type1)){
                    error.print(ERROR::TYPE_MUST_BE_NUMERIC, term_ctx1);
                    term_type2 = Predefined::integerType;
                }
                if (!TypeChecker::isIntegerOrReal(term_type2)){
                    error.print(ERROR::TYPE_MUST_BE_NUMERIC, term_ctx2);
                    term_type2 = Predefined::integerType;
                }
            }
        }
        else{
            if (TypeChecker::areBothInteger(term_type1, term_type2)){
                term_type2 = Predefined::integerType;
            }
            else if (TypeChecker::isAtLeastOneReal(term_type1, term_type2)){
                term_type2 = Predefined::realType;
            }
            else{
                if (!TypeChecker::isIntegerOrReal(term_type1)){
                    error.print(ERROR::TYPE_MUST_BE_NUMERIC, term_ctx1);
                    term_type2 = Predefined::integerType;
                }
                if (!TypeChecker::isIntegerOrReal(term_type2)){
                    error.print(ERROR::TYPE_MUST_BE_NUMERIC, term_ctx2);
                    term_type2 = Predefined::integerType;
                }
            }
        }

        term_type1 = term_type2;
    }

    ctx->type = term_type1;
    #ifdef DEBUG
        cout << "Exiting simple expression" << endl;
    #endif
    return nullptr;
}

Object Semantics::visitTerm(ExprParser::TermContext *ctx){
    #ifdef DEBUG
        cout << "Visiting term" << endl;
    #endif
    int count = ctx->factor().size();
    ExprParser::FactorContext *factor_ctx1 = ctx->factor()[0];

    visit(factor_ctx1);
    Typespec *factor_type1 = factor_ctx1->type;


    for (int i = 1; i < count; i++){
        string op = toLowerCase(ctx->term_operator()[i-1]->getText());
        ExprParser::FactorContext *factor_ctx2 = ctx->factor()[i];
        visit(factor_ctx2);
        Typespec *factor_type2 = factor_ctx2->type;

        if (op == "*"){
            if (TypeChecker::areBothInteger(factor_type1, factor_type2)){
                factor_type2 = Predefined::integerType;
            }
            else if (TypeChecker::isAtLeastOneReal(factor_type1, factor_type2)){
                factor_type2 = Predefined::realType;
            }
            else{
                if (!TypeChecker::isIntegerOrReal(factor_type1)){
                    error.print(ERROR::TYPE_MUST_BE_NUMERIC, factor_ctx1);
                    factor_type2 = Predefined::integerType;
                }
                if (!TypeChecker::isIntegerOrReal(factor_type2)){
                    error.print(ERROR::TYPE_MUST_BE_NUMERIC, factor_ctx2);
                    factor_type2 = Predefined::integerType;
                }
            }
        }
        else if (op == "/"){
            if (   TypeChecker::areBothInteger(factor_type1, factor_type2) || TypeChecker::isAtLeastOneReal(factor_type1, factor_type2)){
                factor_type2 = Predefined::realType;
            }
            else{
                if (!TypeChecker::isIntegerOrReal(factor_type1)){
                    error.print(ERROR::TYPE_MUST_BE_NUMERIC, factor_ctx1);
                    factor_type2 = Predefined::integerType;
                }
                if (!TypeChecker::isIntegerOrReal(factor_type2)){
                    error.print(ERROR::TYPE_MUST_BE_NUMERIC, factor_ctx2);
                    factor_type2 = Predefined::integerType;
                }
            }
        }
        else if ((op == "div") ||(op == "mod")){
            if (!TypeChecker::isInteger(factor_type1)){
                error.print(ERROR::TYPE_MUST_BE_INTEGER, factor_ctx1);
                factor_type2 = Predefined::integerType;
            }
            if (!TypeChecker::isInteger(factor_type2)){
                error.print(ERROR::TYPE_MUST_BE_INTEGER, factor_ctx2);
                factor_type2 = Predefined::integerType;
            }

            ctx->type = Predefined::integerType;
        }
        else if (op == "and"){
            // Both operands bool ==> bool result. Else type mismatch.
            if (!TypeChecker::isBoolean(factor_type1)){
                error.print(ERROR::TYPE_MUST_BE_BOOLEAN, factor_ctx1);
                factor_type2 = Predefined::booleanType;
            }
            if (!TypeChecker::isBoolean(factor_type2)){
                error.print(ERROR::TYPE_MUST_BE_BOOLEAN, factor_ctx2);
                factor_type2 = Predefined::booleanType;
            }
        }

        factor_type1 = factor_type2;
    }

    ctx->type = factor_type1;
    #ifdef DEBUG
        cout << "Exiting term" << endl;
    #endif
    return nullptr;
}

Object Semantics::visitVariable_factor(ExprParser::Variable_factorContext *ctx){
    #ifdef DEBUG
        cout << "Visiting variable factor" << endl;
    #endif
    ExprParser::VariableContext *var_ctx = ctx->variable();
    visit(var_ctx);
    ctx->type = var_ctx->type;
    #ifdef DEBUG
        cout << "Exiting variable factor" << endl;
    #endif

    return nullptr;
}

Object Semantics::visitVariable(ExprParser::VariableContext *ctx){
    #ifdef DEBUG
        cout << "Visiting variable" << endl;
    #endif
    ExprParser::Variable_nameContext *var_id_ctx = ctx->variable_name();

    visit(var_id_ctx);
    ctx->entry = var_id_ctx->entry;
    ctx->type  = variableDatatype(ctx, var_id_ctx->type);

    #ifdef DEBUG
        cout << "Exiting variable" << endl;
    #endif
    return nullptr;
}

Object Semantics::visitVariable_name(ExprParser::Variable_nameContext *ctx){
    #ifdef DEBUG
        cout << "Visiting variable name" << endl;
    #endif
    string variable_name = toLowerCase(ctx->IDENTIFIER()->getText());
    SymtabEntry *variable_id = symtab_stack->lookup(variable_name);

    if (variable_id != nullptr){
        int line_number = ctx->getStart()->getLine();
        ctx->type = variable_id->getType();
        ctx->entry = variable_id;
        variable_id->appendLineNumber(line_number);

        Kind kind = variable_id->getKind();
        switch (kind){
            case TYPE:
            case PROGRAM:
            case PROGRAM_PARAMETER:
            case PROCEDURE:
            case UNDEFINED:
                error.print(ERROR::INVALID_VARIABLE, ctx);
                break;

            default: break;
        }
    }
    else{
        error.print(ERROR::UNDECLARED_IDENTIFIER, ctx);
        ctx->type = Predefined::integerType;
    }
    #ifdef DEBUG
        cout << "Exiting variable name" << endl;
    #endif

    return nullptr;
}

Typespec *Semantics::variableDatatype(ExprParser::VariableContext *var_ctx, Typespec *varType){
    #ifdef DEBUG
        cout << "Visiting data type" << endl;
    #endif
    Typespec *type = varType;

    for (ExprParser::ModifierContext *mod_ctx : var_ctx->modifier()){
        if (mod_ctx->index_list() != nullptr){
            ExprParser::Index_listContext *index_list_ctx = mod_ctx->index_list();
            for (ExprParser::IndexContext *index_ctx : index_list_ctx->index()){
                if (type->getForm() == ARRAY){
                    Typespec *indexType = type->getArrayIndexType();
                    ExprParser::ExpressionContext *expr_ctx = index_ctx->expression();
                    visit(expr_ctx);

                    if (indexType->baseType() != expr_ctx->type->baseType()){
                        error.print(ERROR::TYPE_MISMATCH, expr_ctx);
                    }
                    type = type->getArrayElementType();
                }
                else{
                    error.print(ERROR::TOO_MANY_SUBSCRIPTS, index_ctx);
                }
            }
        }
    }
    #ifdef DEBUG
        cout << "Exiting variable type" << endl;
    #endif

    return type;
}

Object Semantics::visitNumber_factor(ExprParser::Number_factorContext *ctx){
    #ifdef DEBUG
        cout << "Visiting number factor" << endl;
    #endif
    ExprParser::NumberContext          *number_ctx   = ctx->number();
    ExprParser::Unsigned_numberContext  *unsigned_ctx = number_ctx->unsigned_number();
    ExprParser::Integer_constantContext *integer_ctx  = unsigned_ctx->integer_constant();

    ctx->type = (integer_ctx != nullptr) ? Predefined::integerType : Predefined::realType;

    #ifdef DEBUG
        cout << "Exiting number factor" << endl;
    #endif
    return nullptr;
}

Object Semantics::visitCharacter_factor(ExprParser::Character_factorContext *ctx){
    #ifdef DEBUG
        cout << "Visiting character factor" << endl;
    #endif
    ctx->type = Predefined::charType;
    #ifdef DEBUG
        cout << "Exiting character factor" << endl;
    #endif
    return nullptr;
}

Object Semantics::visitString_factor(ExprParser::String_factorContext *ctx){
    #ifdef DEBUG
        cout << "Visiting string factor" << endl;
    #endif
    ctx->type = Predefined::stringType;

    #ifdef DEBUG
        cout << "Exiting string factor" << endl;
    #endif
    return nullptr;
}

Object Semantics::visitNot_factor(ExprParser::Not_factorContext *ctx){
    #ifdef DEBUG
        cout << "Visiting not factor" << endl;
    #endif
    ExprParser::FactorContext *factor_ctx = ctx->factor();
    visit(factor_ctx);

    if (factor_ctx->type != Predefined::booleanType)
    {
        error.print(ERROR::TYPE_MUST_BE_BOOLEAN, factor_ctx);
    }

    ctx->type = Predefined::booleanType;
    #ifdef DEBUG
        cout << "Exiting not factor" << endl;
    #endif
    return nullptr;
}

Object Semantics::visitParenthesized_factor(ExprParser::Parenthesized_factorContext *ctx){
    #ifdef DEBUG
        cout << "Visiting parenthesize factor" << endl;
    #endif
    ExprParser::ExpressionContext *expr_ctx = ctx->expression();
    visit(expr_ctx);
    ctx->type = expr_ctx->type;

    #ifdef DEBUG
        cout << "Exiting parenthesize factor" << endl;
    #endif
    return nullptr;
}
