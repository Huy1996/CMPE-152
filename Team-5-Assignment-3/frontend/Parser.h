#ifndef TEAM5_ASSIGNMENT2_PARSER_H
#define TEAM5_ASSIGNMENT2_PARSER_H

#include "Scanner.h"
#include "Token.h"
#include "../intermediate/Symtab.h"
#include "../intermediate/Node.h"
#include <string>
#include <set>
#include <iostream>

using namespace std;

class Parser{
public:
    Parser(Scanner *scanner, Symtab *symtab): scanner(scanner), symtab(symtab),
        current_token(nullptr), line_number(0), error_count(0){}
    int get_error(){ return error_count; }
    Node *parseProgram();

private:
    Scanner *scanner;
    Symtab *symtab;
    Token *current_token;
    int line_number;
    int error_count;

    static const set<string> starting_token;
    static const set<string> follow_token;
    static const set<string> relation_op_token;
    static const set<string> expression_op_token;
    static const set<string> term_op_token;
    static const set<string> data_type;

    /**
     * Parsing Var section if exist
     * @return Var Node
     * <Var>
     *      <Variable id:"" level:"" />
     *      ...
     * </Var>
     */
    Node *parseVar();

    /**
     * Identify statement to call appropriate parsing method
     * @return statement Node
     */
    Node *parseStatement();

    /**
     * Parsing assignment statement
     * @return assign Node
     * <ASSIGN line="">
     *      <VARIABLE id="" level="0" />
     *      <Expression />
     * </ASSIGN>
     */
    Node *parseAssignmentStatement();

    /**
     * Parsing statement list from BEGIN to END
     * @return Compound Node
     * <COMPOUND line="">
     *      <List of statement />
     * </COMPOUND>
     */
    Node *parseCompoundStatement();

    /**
     * Parsing repeat statement
     * 1st child: Loop node contain list of statement to execute until the condition False
     * 2nd child: Condition to test
     * @return Repeat_loop node
     * <REPEAT_LOOP line="">
     *      <LOOP>
     *          <List of statement />
     *      </LOOP>
     *      <TEST>
     *          <Expression />
     *      </TEST>
     * </REPEAT_LOOP>
     */
    Node *parseRepeatStatement();

    /**
     * Parsing write statement
     * @return write node
     * <WRITE line="">
     *      <STRING_CONSTANT value="" /> or <VARIABLE id="" level="0" />
     * </WRITE>
     */
    Node *parseWriteStatement();

    /**
     * Parsing writeln statement
     * @return writeln node
     * <WRITELN line="">
     *      <STRING_CONSTANT value="" /> or <VARIABLE id="" level="0" />
     * </WRITELN>
     */
    Node *parseWritelnStatement();

    /**
     * Parsing Expression (EQUAL{=} / LT{<} / GT{>} / GTEQ{<=} / LTEQ{>=} / NE{!=})
     * @return expression node
     * <(Expression) line="">
     *      <Single Expression /> (LHS)
     *      <Single Expression /> (RHS)
     * </(Expression)>
     */
    Node *parseExpression();

    /**
     * Parsing Single Expression (PLUSOP{+} / MINUSOP{-} / OR)
     * @return single expression node
     * <(Single Expression) line="">
     *      <Term Expression /> (LHS)
     *      <Term Expression /> (RHS)
     * </(Single Expression)>
     */
    Node *parseSimpleExpression();

    /**
     * Parsing Term (MULTOP{*} / DIVOP{/} / AND)
     * @return term node
     * <(Term Expression) line="">
     *      <Factor /> (LHS)
     *      <Factor /> (RHS)
     * </(Term Expression)>
     */
    Node *parseTerm();

    /**
     * Parsing factor (VARIABLE/INTEGER_CONSTANT/REAL_CONSTANT/NOT/(EXPRESSION))
     * @return factor node
     * <VARIABLE id="" level="0" /> or <INTEGER_CONSTANT value="" /> or <REAL_CONSTANT value="" />
     */
    Node *parseFactor();

    /**
     * Parsing variable only the one that in the symbol table
     * semantic error if variable not in the symbol table
     * @return Variable node
     * <VARIABLE id="" level="0" />
     */
    Node *parseVariable();

    /**
     * Parsing integer constant
     * @return Integer Constant node
     * <INTEGER_CONSTANT value="" />
     */
    Node *parseIntegerConstant();

    /**
     * Parsing real constant
     * @return Real Constant node
     * <REAL_CONSTANT value="" />
     */
    Node *parseRealConstant();

    /**
     * Parsing string constant
     * @return String Constant node
     * <STRING_CONSTANT value="" />
     */
    Node *parseStringConstant();

    /**
     * Parsing for loop statement
     * 1st child: Assign statement
     * 2nd child: TO or DOWN_TO node to indicate of up or down
     * 3rd child: Loop node contain all statement to execute until it reach limit
     * @return For loop node
     * <FOR_LOOP line="">
     *      <ASSIGN>
     *          ...
     *      </ASSIGN>
     *      <TO> or <DOWN_TO>
     *          <INTEGER_CONSTANT value="" />
     *      </TO> or </DOWN_TO>
     *      <LOOP>
     *          <COMPOUND>      or <STATEMENT />
     *              ...
     *          </COMPOUND>
     *      </LOOP>
     * </FOR_LOOP>
     */
    Node *parseForStatement();

    /**
     * Parsing while loop statement
     * 1st child: Condition to test
     * 2nd child: Loop node contain all statement to execute if condition is True
     * @return while loop node
     * <WHILE_LOOP line="">
     *      <TEST>
     *          <EXPRESSION />
     *      </TEST>
     *      <LOOP>
     *          <COMPOUND>      or <STATEMENT />
     *              ...
     *          </COMPOUND>
     *      </LOOP>
     * </WHILE_LOOP>
     */
    Node *parseWhileStatement();

    /**
     * Parsing if statement
     * 1st child: condition to test
     * 2nd child: true statement to execute if condition is True
     * 3rd child (optional): false statement ti execute if condition is False
     * @return If node
     * <IF line="">
     *      <TEST>
     *          <EXPRESSION />
     *      </TEST>
     *      <TRUE_STATEMENT line="">
     *          <COMPOUND>      or <STATEMENT />
     *              ...
     *          </COMPOUND>
     *      </TRUE_STATEMENT>
     *      <FALSE_STATEMENT line="">
     *          <COMPOUND>      or <STATEMENT />
     *              ...
     *          </COMPOUND>
     *      </FALSE_STATEMENT>
     * </IF>
     */
    Node *parseIfStatement();

    /**
     * Parsing Not
     * @return return Node node
     * <NOT_NODE line="">
     *      <EXPRESSION />
     * </NOT_NODE>
     */
    Node *parseNot();

    /**
     * Parsing Case Statement
     * 1st child: expression to compare element of list
     * nth child: list of case
     *      contain all factor use to compare with expression
     *      last child are statement to execute if the case matched
     * @return return Case node
     * <CASE_STATEMENT line="">
     *      <EXPRESSION />
     *      <LIST line="">
     *          <FACTOR />
     *          <FACTOR />
     *          ...
     *          <COMPOUND>      or <STATEMENT />
     *              ...
     *          </COMPOUND>
     *      </LIST>
     *      ...
     * </CASE_STATEMENT>
     */
    Node *parseCaseStatement();

    /**
     * Taking parent node and keep adopting statement until meet terminal token
     * @param parent Node that will adopt statement list
     * @param terminal_token Ending token to stop adopting
     */
    void parseUntilTerminal(Node *parent, string terminal_token);

    /**
     * Parsing all element of the write or writeln statement
     * @param node Write or Writeln node
     */
    void parseWriteElement(Node *node);

    /**
     * Parser whether the compound statement or single statement
     * @param parent the node that will adopt statement
     */
    void parseHelper(Node *parent);

    /**
     * Declare new variable to the symbol table and return variable node
     * @param variable_name
     * @return Variable Node
     * <VARIABLE id="" level="0" />
     */
    Node *declareVariable(string variable_name);

    /**
     * Display error when encounter and resume parsing
     * @param error Missing or expect token
     */
    void syntaxError(string error);
    void semanticError(string message);
};

#endif //TEAM5_ASSIGNMENT2_PARSER_H