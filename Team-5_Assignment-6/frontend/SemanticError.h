#ifndef SEMANTICERROR_H_
#define SEMANTICERROR_H_

#include <string>
#include <map>

#include "antlr4-runtime.h"


using namespace std;


enum class Error
{
    UNDECLARED_IDENTIFIER,
    REDECLARED_IDENTIFIER,
    INVALID_CONSTANT,
    INVALID_SIGN,
    INVALID_TYPE,
    INVALID_VARIABLE,
    TYPE_MISMATCH,
    TYPE_MUST_BE_INTEGER,
    TYPE_MUST_BE_NUMERIC,
    TYPE_MUST_BE_BOOLEAN,
    INCOMPATIBLE_ASSIGNMENT,
    INCOMPATIBLE_COMPARISON,
    INVALID_CONTROL_VARIABLE,
    DUPLICATE_CASE_CONSTANT,
    NAME_MUST_BE_PROCEDURE,
    NAME_MUST_BE_FUNCTION,
    ARGUMENT_COUNT_MISMATCH,
    ARGUMENT_MUST_BE_VARIABLE,
    INVALID_REFERENCE_PARAMETER,
    INVALID_RETURN_TYPE,
    TOO_MANY_SUBSCRIPTS,
    INVALID_FIELD
};

static const string error_message[] ={
    "UNDECLARED IDENTIFIER",
    "REDECLARED IDENTIFIER",
    "INVALID CONSTANT",
    "INVALID SIGN",
    "INVALID TYPE",
    "INVALID VARIABLE",
    "TYPE MISMATCH",
    "TYPE MUST BE INTEGER",
    "TYPE MUST BE NUMERIC",
    "TYPE MUST BE BOOLEAN",
    "INCOMPATIBLE ASSIGNMENT",
    "INCOMPATIBLE COMPARISON",
    "INVALID CONTROL VARIABLE",
    "DUPLICATE CASE CONSTANT",
    "NAME MUST BE PROCEDURE",
    "NAME MUST BE FUNCTION",
    "ARGUMENT COUNT MISMATCH",
    "ARGUMENT MUST BE VARIABLE",
    "INVALID REFERENCE PARAMETER",
    "INVALID RETURN TYPE",
    "TOO MANY SUBSCRIPTS",
    "INVALID FIELD"
};

constexpr Error UNDECLARED_IDENTIFIER       = Error::UNDECLARED_IDENTIFIER;
constexpr Error REDECLARED_IDENTIFIER       = Error::REDECLARED_IDENTIFIER;
constexpr Error INVALID_CONSTANT            = Error::INVALID_CONSTANT;
constexpr Error INVALID_SIGN                = Error::INVALID_SIGN;
constexpr Error INVALID_TYPE                = Error::INVALID_TYPE;
constexpr Error INVALID_VARIABLE            = Error::INVALID_VARIABLE;
constexpr Error TYPE_MISMATCH               = Error::TYPE_MISMATCH;
constexpr Error TYPE_MUST_BE_INTEGER        = Error::TYPE_MUST_BE_INTEGER;
constexpr Error TYPE_MUST_BE_NUMERIC        = Error::TYPE_MUST_BE_NUMERIC;
constexpr Error TYPE_MUST_BE_BOOLEAN        = Error::TYPE_MUST_BE_BOOLEAN;
constexpr Error INCOMPATIBLE_ASSIGNMENT     = Error::INCOMPATIBLE_ASSIGNMENT;
constexpr Error INCOMPATIBLE_COMPARISON     = Error::INCOMPATIBLE_COMPARISON;
constexpr Error INVALID_CONTROL_VARIABLE    = Error::INVALID_CONTROL_VARIABLE;
constexpr Error DUPLICATE_CASE_CONSTANT     = Error::DUPLICATE_CASE_CONSTANT;
constexpr Error NAME_MUST_BE_PROCEDURE      = Error::NAME_MUST_BE_PROCEDURE;
constexpr Error NAME_MUST_BE_FUNCTION       = Error::NAME_MUST_BE_FUNCTION;
constexpr Error ARGUMENT_COUNT_MISMATCH     = Error::ARGUMENT_COUNT_MISMATCH;
constexpr Error ARGUMENT_MUST_BE_VARIABLE   = Error::ARGUMENT_MUST_BE_VARIABLE;
constexpr Error INVALID_REFERENCE_PARAMETER = Error::INVALID_REFERENCE_PARAMETER;
constexpr Error INVALID_RETURN_TYPE         = Error::INVALID_RETURN_TYPE;
constexpr Error TOO_MANY_SUBSCRIPTS         = Error::TOO_MANY_SUBSCRIPTS;
constexpr Error INVALID_FIELD               = Error::INVALID_FIELD;

class SemanticError
{
private:
    int  count;

public:
    SemanticError() : count(0){}

    int getCount() const { return count; }

    void print(Error error, int line, string text){
        printf("%s at line %d (%s)", error_message[(int) error].c_str(), line, text.c_str());
        count++;
    }

    void print(Error error, antlr4::ParserRuleContext *ctx){
        print(error, ctx->getStart()->getLine(), ctx->getText());
    }
};


#endif /* SemanticError_H_ */
