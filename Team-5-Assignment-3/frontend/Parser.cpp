#include "Parser.h"
//#define DEBUG
const set<string> Parser::starting_token = {
        "BEGIN", "IDENTIFIER", "REPEAT", "WRITE", "WRITELN", "FOR", "WHILE", "IF", "CASE"
};

const set<string> Parser::follow_token = {
        "SEMICOLON", "END", "UNTIL", "END_OF_FILE", "DO", "TO", "DOWNTO", "THEN", "ELSE", "OF"
};

const set<string> Parser::relation_op_token = {
        "EQUAL", "LT", "GT", "LTEQ", "GTEQ", "NE"
};

const set<string> Parser::expression_op_token = {
        "PLUSOP", "MINUSOP", "MINUSEQUAL", "PLUSEQUAL", "OR"
};

const set<string> Parser::term_op_token = {
        "MULTOP", "DIVOP", "MULTEQUAL", "DIVEQUAL", "AND", "DIV"
};

const set<string> Parser::data_type = {
        "STRING", "INTEGER", "REAL", "CHAR"
};


Node *Parser::parseProgram(){
#ifdef DEBUG
    cout << "Call Parser Program" << endl;
#endif

    Node *program_node = new Node(NodeType::PROGRAM);

    current_token = scanner->next_token();  // get first token

    if (current_token->get_token_type() == "PROGRAM"){
        current_token = scanner->next_token();  // consume PROGRAM
    }
    else syntaxError("Missing PROGRAM"); // Raise error when missing PROGRAM

    if (current_token->get_token_type() == "IDENTIFIER"){
        string programName = current_token->get_text();
        symtab->new_variable(programName, "PROGRAM_NAME");
        program_node->text = programName;

        current_token = scanner->next_token();  // consume program name
    }
    else syntaxError("Expecting program name");

    if (current_token->get_token_type() == "SEMICOLON"){
        current_token = scanner->next_token();  // consume ;
    }
    else syntaxError("Missing ;");

    if (current_token->get_token_type() == "VAR") {
        program_node->adopt(parseVar());
    }

    if (current_token->get_token_type() != "BEGIN") syntaxError("Expecting BEGIN");

    program_node->adopt(parseCompoundStatement());

    if (current_token->get_token_type() != "PERIOD") syntaxError("Expecting .");
    return program_node;
}

Node *Parser::parseVar() {
#ifdef DEBUG
    cout << "Call Parser Var" << endl;
#endif

    Node *var_node = new Node(NodeType::VAR); // Consume Var
    current_token = scanner->next_token();
    while(current_token->get_token_type() != "BEGIN"){
        vector<string> indentifier;
        while(true){
            if (current_token->get_token_type() == "IDENTIFIER") {
                indentifier.push_back(current_token->get_text());
                current_token = scanner->next_token();
            }
            else {
                syntaxError("Expecting variable");
                return nullptr;
            }
            if (current_token->get_token_type() == "COLON"){
                current_token = scanner->next_token(); // Consume :
                break;
            }
            else if (current_token->get_token_type() == "COMMA")
                current_token = scanner->next_token(); // Consume ,
            else {
                syntaxError("Expecting ','");
                return nullptr;
            }
        }
        if (current_token->get_token_type() == "IDENTIFIER" and
            data_type.find(toUpperCase(current_token->get_text())) != data_type.end()){
            for (int i = 0; i < indentifier.size(); ++i) {
                var_node->adopt(declareVariable(indentifier[i]));
            }
        }
        else{
            syntaxError("Expecting data type");
            return nullptr;
        }
        current_token = scanner->next_token();
        if (current_token->get_token_type() != "SEMICOLON"){
            syntaxError("Expecting ';'");
            return nullptr;
        }
        current_token = scanner->next_token(); // Consume ;
    }
    return var_node;
}

Node *Parser::parseStatement(){
#ifdef DEBUG
    cout << "Call Parser Statement" << endl;
#endif

    Node *statement_node = nullptr;
    int savedLineNumber = current_token->get_line_number();
    line_number = savedLineNumber;

    string token_type = current_token->get_token_type();

    if(token_type == "IDENTIFIER")
        statement_node = parseAssignmentStatement();
    else if(token_type == "BEGIN")
        statement_node = parseCompoundStatement();
    else if(token_type == "REPEAT")
        statement_node = parseRepeatStatement();
    else if(token_type == "WRITE")
        statement_node = parseWriteStatement();
    else if(token_type == "WRITELN")
        statement_node = parseWritelnStatement();
    else if(token_type == "WHILE")
        statement_node = parseWhileStatement();
    else if(token_type == "IF")
        statement_node = parseIfStatement();
    else if(token_type == "FOR")
        statement_node = parseForStatement();
    else if(token_type == "CASE")
        statement_node = parseCaseStatement();
    else if(token_type == "SEMICOLON")
        statement_node = nullptr;
    else
        syntaxError("Unexpected token");


    if (statement_node != nullptr) statement_node->line_number = savedLineNumber;
    return statement_node;
}

Node *Parser::parseAssignmentStatement()
{
#ifdef DEBUG
    cout << "Call Parser Assignment Statement" << endl;
#endif
    // Variable := Expression

    Node *assignment_node = new Node(NodeType::ASSIGN);
    assignment_node->line_number = current_token->get_line_number();


    string variable_name = current_token->get_text();
    struct Variable *variable = symtab->find_variable(variable_name);
    if (variable == nullptr) variable = symtab->new_variable(variable_name, "INTEGER");


    Node *left_node  = new Node(NodeType::VARIABLE);
    left_node->text  = variable_name;
    left_node->entry = variable;
    assignment_node->adopt(left_node);

    current_token = scanner->next_token();
    Node *operation_node = nullptr;

    string token_type = current_token->get_token_type();
    if (token_type == "ASSIGN"){
        current_token = scanner->next_token();
    }
    else if (token_type == "PLUSEQUAL"){
        operation_node = new Node(NodeType::ADD);
        current_token = scanner->next_token();
    }
    else if (token_type == "MINUSEQUAL"){
        operation_node = new Node(NodeType::SUBTRACT);
        current_token = scanner->next_token();
    }
    else if (token_type == "MULTOP"){
        operation_node = new Node(NodeType::MULTIPLY);
        current_token = scanner->next_token();
    }
    else if (token_type == "DIVEQUAL"){
        operation_node = new Node(NodeType::DIVIDE);
        current_token = scanner->next_token();
    }
    else syntaxError("Missing :=");

    Node *right_node = parseExpression();
    if (operation_node == nullptr)
        assignment_node->adopt(right_node);
    else {
        operation_node->adopt(left_node);
        operation_node->adopt(right_node);
        assignment_node->adopt(operation_node);
    }

    return assignment_node;
}

Node *Parser::parseCompoundStatement()
{
#ifdef DEBUG
    cout << "Call Parser Compound Statement" << endl;
#endif

    Node *compound_node = new Node(NodeType::COMPOUND);
    compound_node->line_number = current_token->get_line_number();

    current_token = scanner->next_token();  // consume BEGIN
    parseUntilTerminal(compound_node, "END");

    if (current_token->get_token_type().compare("END") == 0)
    {
        current_token = scanner->next_token();  // consume END
    }
    else syntaxError("END");

    return compound_node;
}

void Parser::parseUntilTerminal(Node *parent, string terminal_token){
#ifdef DEBUG
    cout << "Call Parser Statement List" << endl;
#endif

    while ((current_token->get_token_type() != terminal_token)
           && (current_token->get_token_type() != "END_OF_FILE")){
        Node *statement_node = parseStatement();
        if (statement_node != nullptr) parent->adopt(statement_node);

        // A semicolon separates statements.
        if (current_token->get_token_type().compare("SEMICOLON") == 0)
        {
            while (current_token->get_token_type().compare("SEMICOLON") == 0)
            {
                current_token = scanner->next_token();  // consume ;
            }
        }
        else if (starting_token.find(current_token->get_token_type()) != starting_token.end())
        {
            syntaxError("Expecting ;");
            return;
        }
    }
}



Node *Parser::parseRepeatStatement(){
#ifdef DEBUG
    cout << "Call Parser Repeat Statement" << endl;
#endif
    Node *repeat_node = new Node(NodeType::REPEAT_LOOP);
    Node *loop_node = new Node(NodeType::LOOP);
    current_token = scanner->next_token();  // consume REPEAT
    repeat_node->adopt(loop_node);
    parseUntilTerminal(loop_node, "UNTIL");

    if (current_token->get_token_type().compare("UNTIL") == 0)
    {
        Node *testNode = new Node(NodeType::TEST);
        line_number = current_token->get_line_number();
        current_token = scanner->next_token();  // consume UNTIL

        testNode->adopt(parseExpression());

        repeat_node->adopt(testNode);
    }
    else syntaxError("UNTIL");

    return repeat_node;
}

Node *Parser::parseWriteStatement(){
#ifdef DEBUG
    cout << "Call Parser Write Statement" << endl;
#endif

    Node *write_node = new Node(NodeType::WRITE);
    current_token = scanner->next_token();  // consume WRITE

    parseWriteElement(write_node);
    if (write_node->node_container.size() == 0)
    {
        syntaxError("");
    }

    return write_node;
}

Node *Parser::parseWritelnStatement(){
#ifdef DEBUG
    cout << "Call Parser Writeln Statement" << endl;
#endif
    // WRITELN(Element);
    Node *writeln_node = new Node(NodeType::WRITELN);
    current_token = scanner->next_token();  // consume WRITELN

    if (current_token->get_token_type().compare("LPAREN") == 0) parseWriteElement(writeln_node);
    return writeln_node;
}

void Parser::parseWriteElement(Node *node){
#ifdef DEBUG
    cout << "Call Parser Write Arguments" << endl;
#endif
    bool has_element = false;
    if (current_token->get_token_type().compare("LPAREN") == 0){
        current_token = scanner->next_token();  // consume (
    }
    else syntaxError("Missing (");

    while(current_token->get_token_type() != "RPAREN"){
        Node *element_node = new Node(NodeType::WRITE_ELEMENT);
        if ((current_token->get_token_type().compare("CHARACTER") == 0)
            || (current_token->get_token_type().compare("STRING") == 0)){
            element_node->adopt(parseStringConstant());
        }
        else if (current_token->get_token_type().compare("IDENTIFIER") == 0) {
            element_node->adopt(parseVariable());
            if (current_token->get_token_type().compare("COLON") == 0)
            {
                current_token = scanner->next_token();  // consume :

                if (current_token->get_token_type().compare("INTEGER") == 0)
                {
                    element_node->adopt(parseIntegerConstant());

                    if (current_token->get_token_type().compare("COLON") == 0)
                    {
                        current_token = scanner->next_token();  // consume :

                        if (current_token->get_token_type().compare("INTEGER") == 0){
                            element_node->adopt(parseIntegerConstant());
                        }
                        else {
                            syntaxError("Invalid");
                            return;
                        }
                    }
                }
                else {
                    syntaxError("Invalid");
                    return;
                }
            }
        }
        node->adopt(element_node);
        if (current_token->get_token_type() == "COMMA")
            current_token = scanner->next_token();
        else if (current_token->get_token_type() == "RPAREN"){
            current_token = scanner->next_token();
            break;
        }
        else {
            syntaxError("Missing )");
            break;
        }
    }

//    if (current_token->get_token_type().compare("IDENTIFIER") == 0){
//        node->adopt(parseVariable());
//        has_element = true;
//    }
//    else if ((current_token->get_token_type().compare("CHARACTER") == 0)
//             || (current_token->get_token_type().compare("STRING") == 0)){
//        node->adopt(parseStringConstant());
//        has_element = true;
//    }
//    else syntaxError("Invalid WRITE or WRITELN statement");
//
//    if (has_element)
//    {
//        if (current_token->get_token_type().compare("COLON") == 0)
//        {
//            current_token = scanner->next_token();  // consume :
//
//            if (current_token->get_token_type().compare("INTEGER") == 0)
//            {
//                node->adopt(parseIntegerConstant());
//
//                if (current_token->get_token_type().compare("COLON") == 0)
//                {
//                    current_token = scanner->next_token();  // consume :
//
//                    if (current_token->get_token_type().compare("INTEGER") == 0){
//                        node->adopt(parseIntegerConstant());
//                    }
//                    else syntaxError("Invalid");
//                }
//            }
//            else syntaxError("Invalid");
//        }
//    }
//
//    if (current_token->get_token_type().compare("RPAREN") == 0){
//        current_token = scanner->next_token();  // consume )
//    }
//    else syntaxError("Missing )");
}

Node *Parser::parseExpression(){
#ifdef DEBUG
    cout << "Call Parser Expression" << endl;
#endif

    Node *expression_node = parseSimpleExpression();

    if (relation_op_token.find(current_token->get_token_type()) != relation_op_token.end())
    {
        string token_type = current_token->get_token_type();
        line_number = current_token->get_line_number();

        Node *operation_node;

        if (token_type == "EQUAL")
            operation_node = new Node(NodeType::EQUAL);
        else if (token_type == "LT")
            operation_node = new Node(NodeType::LT);
        else if (token_type == "GT")
            operation_node = new Node(NodeType::GT);
        else if (token_type == "GTEQ")
            operation_node = new Node(NodeType::GTEQ);
        else if (token_type == "LTEQ")
            operation_node = new Node(NodeType::LTEQ);
        else if (token_type == "NE")
            operation_node = new Node(NodeType::NE);
        else
            operation_node = nullptr;

        current_token = scanner->next_token();
        if (operation_node != nullptr)
        {
            operation_node->line_number = line_number;
            operation_node->adopt(expression_node);
            operation_node->adopt(parseSimpleExpression());
            expression_node = operation_node;
        }
    }

    return expression_node;
}

Node *Parser::parseSimpleExpression(){
#ifdef DEBUG
    cout << "Call Parser Single Expression" << endl;
#endif
    Node *simple_expression_node = parseTerm();

    while (expression_op_token.find(current_token->get_token_type()) != expression_op_token.end())
    {
        Node *operation_node;
        string token_type = current_token->get_token_type();
        if (token_type == "PLUSOP")
            operation_node = new Node(NodeType::ADD);
        else if (token_type == "MINUSOP")
            operation_node = new Node(NodeType::SUBTRACT);
        else if (token_type == "OR")
            operation_node = new Node(NodeType::OR_NODE);
        else
            operation_node = nullptr;

        operation_node->line_number = current_token->get_line_number();
        current_token = scanner->next_token();  // consume the operator

        operation_node->adopt(simple_expression_node);
        operation_node->adopt(parseTerm());
        simple_expression_node = operation_node;
    }

    return simple_expression_node;
}

Node *Parser::parseTerm(){
#ifdef DEBUG
    cout << "Call Parser Term" << endl;
#endif
    Node *term_node = parseFactor();

    while (term_op_token.find(current_token->get_token_type()) != term_op_token.end())
    {
        Node *operation_node;
        string token_type = current_token->get_token_type();
        if (token_type == "MULTOP")
            operation_node = new Node(NodeType::MULTIPLY);
        else if (token_type == "DIVOP")
            operation_node = new Node(NodeType::DIVIDE);
        else if (token_type == "DIV")
            operation_node = new Node(NodeType::DIVIDE);
        else if (token_type == "AND")
            operation_node = new Node(NodeType::AND_NODE);
        else
            operation_node = nullptr;


        current_token = scanner->next_token();  // consume the operator


        operation_node->adopt(term_node);
        operation_node->adopt(parseFactor());
        term_node = operation_node;
    }

    return term_node;
}

Node *Parser::parseFactor(){
#ifdef DEBUG
    cout << "Call Parser Factor" << endl;
#endif
    // current_token = IDENTIFIER or INTEGER or REAL or NOT or LPAREN or MINUSOP(negative number)
    string token_type = current_token->get_token_type();
    if      (token_type == "IDENTIFIER") return parseVariable();
    else if (token_type == "INTEGER")    return parseIntegerConstant();
    else if (token_type == "REAL")       return parseRealConstant();
    else if (token_type == "NOT")        return parseNot();
    else if (token_type == "LPAREN"){
        current_token = scanner->next_token();  // consume (
        Node *expression_node = parseExpression();

        if (current_token->get_token_type().compare("RPAREN") == 0)
            current_token = scanner->next_token();  // consume )

        else syntaxError("Missing )");

        return expression_node;
    }
    else if (current_token->get_token_type().compare("MINUSOP") == 0){
        current_token = scanner->next_token();
        Node *expression_node = new Node(NodeType::NEGATIVE);
        expression_node->line_number = current_token->get_line_number();
        expression_node->adopt(parseExpression());
        return expression_node;
    }
    else syntaxError("Unexpected token");
    return nullptr;
}

Node *Parser::parseVariable() {
#ifdef DEBUG
    cout << "Call Parser Variable" << endl;
#endif
    // current_token = IDENTIFIER
    // Has the variable been "declared"?
    string variable_name = current_token->get_text();
    struct Variable *variable = symtab->find_variable(variable_name);
    if (variable == nullptr) semanticError("Undeclared identifier");

    Node *node  = new Node(NodeType::VARIABLE);
    node->text  = variable_name;
    node->entry = variable;
    node->line_number = current_token->get_line_number();

    current_token = scanner->next_token();  // consume the identifier
    return node;
}

Node *Parser::parseIntegerConstant(){
#ifdef DEBUG
    cout << "Call Parser Integer Constant" << endl;
#endif
    // current_token = INTEGER
    Node *integerNode = new Node(NodeType::INTEGER_CONSTANT);
    integerNode->value = stoi(current_token->get_text());
    integerNode->line_number = current_token->get_line_number();

    current_token = scanner->next_token();  // consume the number
    return integerNode;
}

Node *Parser::parseRealConstant(){
#ifdef DEBUG
    cout << "Call Parser Real Constant" << endl;
#endif
    // current_token = REAL

    Node *realNode = new Node(NodeType::REAL_CONSTANT);
    realNode->value = stoi(current_token->get_text());
    realNode->line_number = current_token->get_line_number();

    current_token = scanner->next_token();  // consume the number
    return realNode;
}

Node *Parser::parseStringConstant(){
#ifdef DEBUG
    cout << "Call Parser String Constant" << endl;
#endif
    // current_token = STRING or CHARACTER
    Node *stringNode = new Node(NodeType::STRING_CONSTANT);
    stringNode->string_value = current_token->get_text();
    stringNode->line_number = current_token->get_line_number();

    // Consume STRING or CHARACTER token
    current_token = scanner->next_token();
    return stringNode;
}

void Parser::syntaxError(string error){
    error_count++;
    cout << "Error at line " << current_token->get_line_number() << ": " << error << " at " << current_token->get_text() << endl;
    current_token = scanner->next_token();
    // Trying to resume parsing by skipping statement
    while (follow_token.find(current_token->get_token_type()) == follow_token.end()){
        current_token = scanner->next_token();
    }
}

void Parser::semanticError(string message){
    printf("SEMANTIC ERROR at line %d: %s at '%s'\n",
           line_number, message.c_str(), current_token->get_text().c_str());
    error_count++;
}


Node *Parser::parseForStatement(){
#ifdef DEBUG
    cout << "Call Parser For Statement" << endl;
#endif
    // FOR Expression {TO || DOWNTO} DO
    // Statement; || Compound;

    Node *forNode = new Node(NodeType::FOR_LOOP);                                         //Create for loop node
    Node *loop_node = new Node(NodeType::LOOP);                                            //Create loop node
    forNode->line_number = loop_node->line_number = current_token->get_line_number();

    current_token = scanner->next_token();                                        //consume FOR

    forNode->adopt(parseAssignmentStatement());                           //adopt the statement as the first child

    Node *operation_node;
    if (current_token->get_token_type() == "TO")
        operation_node = new Node(NodeType::TO);
    else if (current_token->get_token_type() == "DOWNTO")
        operation_node = new Node(NodeType::DOWN_TO);
    else syntaxError("Missing TO or DOWNTO");
    current_token = scanner->next_token();
    operation_node->adopt(parseIntegerConstant());

    forNode->adopt(operation_node);

    if (current_token->get_token_type().compare("DO") == 0)                               //Chech whether the DO exist
    {
        current_token = scanner->next_token();                    // consume DO
        parseHelper(loop_node);
    }
    else syntaxError("Expecting DO");
    forNode->adopt(loop_node);

    return forNode;

}

Node *Parser::parseWhileStatement(){
#ifdef DEBUG
    cout << "Call Parser While Statement" << endl;
#endif
    // WHILE Expression DO
    // {Statement; || Compound;}

    // current_token = WHILE
    Node *while_node = new Node(NodeType::WHILE_LOOP);
    current_token = scanner->next_token(); // consume WHILE

    // Create a TEST node -> it adopts test expression node
    Node *testNode = new Node(NodeType::TEST);
    line_number = current_token->get_line_number();
    testNode->line_number = line_number;
    testNode->adopt(parseExpression());
    while_node->adopt(testNode);


    Node *loop_node = new Node(NodeType::LOOP);
    if (current_token->get_token_type().compare("DO") == 0){
        current_token = scanner->next_token();                // consume DO
        parseHelper(loop_node);
    }
    else syntaxError("Missing DO");

    while_node->adopt(loop_node);
    return while_node;
}

Node *Parser::parseIfStatement(){
#ifdef DEBUG
    cout << "Call Parser If Statement" << endl;
#endif
    // IF Expression THEN
    // {Statement || Compound(True Statement)}
    // optional: {ELSE statement || Compound(False Statement)}

    // current_token = IF
    Node *if_node = new Node(NodeType::IF);
    current_token = scanner->next_token();                               // consume IF

    // Create a TEST node -> it adopts test expression node
    Node *testNode = new Node(NodeType::TEST);
    line_number = current_token->get_line_number();
    testNode->line_number = line_number;
    testNode->adopt(parseExpression());
    if_node->adopt(testNode);

    if(current_token->get_token_type().compare("THEN") == 0)
    {
        current_token = scanner->next_token();                            // consume THEN
        Node *true_node = new Node(NodeType::TRUE_STATEMENT);
        true_node->line_number = current_token->get_line_number();

        parseHelper(true_node);

        if_node->adopt(true_node);

        if (current_token->get_token_type().compare("ELSE") == 0){                            //Check if the else statement exist
            current_token = scanner->next_token(); // consume ELSE
            Node *false_node = new Node(NodeType::FALSE_STATEMENT);
            false_node->line_number = current_token->get_line_number();

            parseHelper(false_node);

            if_node->adopt(false_node);
        }
    }
    else syntaxError("Expecting THEN");                         //Raise error if missing THEN

    return if_node;
}

Node *Parser::parseNot(){
#ifdef DEBUG
    cout << "Call Parser Not" << endl;
#endif
    // NOT Expression

    // current_token = NOT
    Node *notNode = new Node(NodeType::NOT_NODE);
    notNode->line_number = current_token->get_line_number();
    current_token = scanner->next_token();
    notNode->adopt(parseExpression());
    return notNode;
}

Node *Parser::parseCaseStatement(){
#ifdef DEBUG
    cout << "Call Parser Case Statement" << endl;
#endif
    // CASE Expression OF
    // List(List of condition) : {Statement; || Compound;}
    // List(List of condition) : {Statement; || Compound;}
    // ...
    // END;

    Node *caseNode = new Node(NodeType::CASE_STATEMENT);
    current_token = scanner->next_token();                        //consume CASE
    caseNode->adopt(parseExpression());
    if(current_token->get_token_type().compare("OF") == 0){
        current_token = scanner->next_token();                    //Consume OF
        while(current_token->get_token_type().compare("END") != 0)   {                     //Read until meet the END of CASE
            Node *listNode = new Node(NodeType::LIST);                    //Create list node
            listNode->line_number = current_token->get_line_number();
            while(current_token->get_token_type().compare("COLON") != 0){
                listNode->adopt(parseFactor());            //adopt all the integer of the case
                if(current_token->get_token_type().compare("COLON") == 0)                 //reach COLON, fishish reading all number of the case
                    break;
                else
                    current_token = scanner->next_token();
            }
            current_token = scanner->next_token();                    //Consume COLON

            parseHelper(listNode);

            if(current_token->get_token_type().compare("SEMICOLON") == 0)
                current_token = scanner->next_token();
            caseNode->adopt(listNode);
        }

        if (current_token->get_token_type().compare("END") == 0)                              //Check if END exist as the end of CASE statement
            current_token = scanner->next_token();                        // consume END
        else syntaxError("Expecting END");                  // if not raise error
    }
    else syntaxError("Expecting OF");
    return caseNode;
}

void Parser::parseHelper(Node *parent) {
    if (current_token->get_token_type() == "BEGIN")
        parent->adopt(parseCompoundStatement());
    else
        parent->adopt(parseStatement());
}

Node *Parser::declareVariable(std::string variable_name) {
    struct Variable *variable = symtab->find_variable(variable_name);
    if (variable == nullptr) variable = symtab->new_variable(variable_name, "INTEGER");
    Node *variable_node  = new Node(NodeType::VARIABLE);
    variable_node->text  = variable_name;
    variable_node->entry = variable;
    return variable_node;
}
