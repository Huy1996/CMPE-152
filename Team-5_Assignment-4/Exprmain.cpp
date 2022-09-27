#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "./target/generated-sources/ant4/ExprLexer.h"
#include "./target/generated-sources/ant4/ExprParser.h"
#include <vector>
#include <sstream>

using namespace antlrcpp;
using namespace antlr4;
using namespace std;

vector<string> token_type;

void load_token(){
    ifstream infile;
    infile.open("./target/generated-sources/ant4/Expr.tokens");
    string line;
    while(getline(infile, line)){
        istringstream token(line);
        string type;
        getline(token, type, '=');
        token_type.push_back(type);
    }
}

int main(int argc, const char *args[])
{
    load_token();
    ifstream source;
    // Create the input stream.
    source.open(args[1]);
    ANTLRInputStream input(source);

    
    // Create a lexer which scans the input stream
    // to create a token stream.
    ExprLexer lexer(&input);

    CommonTokenStream tokens(&lexer);// Print the token stream.
    cout << "Tokens:" << endl;
    tokens.fill();
    for (Token *token : tokens.getTokens())
    {
        std::cout << ((token->getType() == -1) ? "END_OF_FILE" : token_type[token->getType() - 1]) << " : " << token->getText() << std::endl;
    }

    
    // Create a parser which parses the token stream
    // to create a parse tree.
    ExprParser parser(&tokens);
    tree::ParseTree *tree = parser.program();
    
    
    // Print the parse tree in Lisp format.
    cout << endl << "Parse tree (Lisp format):" << endl;
    std::cout << tree->toStringTree(&parser) << endl;
    
    return 0;
}