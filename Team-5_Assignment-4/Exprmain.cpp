#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "./target/generated-sources/ant4/ExprLexer.h"
#include "./target/generated-sources/ant4/ExprParser.h"
#include <vector>
#include <sstream>
#include <cstdio>

using namespace antlrcpp;
using namespace antlr4;
using namespace std;

vector<string> token_type;

void load_token();

int main(int argc, const char *argv[])
{
    if(argc < 3){
        cout << "Missing argument" << endl;
        exit(0);
    }
    string option = argv[1];
    string sourceFileName = argv[2];

    cout << "---------Team 5----------" << endl;
    cout << "Member: " << endl;
    cout << "\t\tChavez, Alberto Francisco" << endl;
    cout << "\t\tDuong, Nguyen Minh Huy" << endl;
    cout << "\t\tFitzgerald, Daniel" << endl << endl;

    load_token();
    ifstream source;
    // Create the input stream.
    source.open(sourceFileName);
    ANTLRInputStream input(source);

    
    // Create a lexer which scans the input stream
    // to create a token stream.
    ExprLexer lexer(&input);

    CommonTokenStream tokens(&lexer);// Print the token stream.
    tokens.fill();
    
    if (option == "-scan") {
        cout << ">>>>>> Open ScanOut.txt for output. <<<<<<" << endl;
        
        freopen("ScanOut.txt", "w", stdout);
        cout << "Token" << endl;
        for (Token *token : tokens.getTokens()){
            //cout << token->toString() << endl;
            cout << ((token->getType() == -1) ? "END_OF_FILE" : token_type[token->getType() - 1]) << " : " << token->getText() << endl;
        }
    }
    else if (option == "-parse"){
        cout << ">>>>>> Open ParseOut.txt for output. <<<<<<" << endl;
        freopen("ParseOut.txt", "w", stdout);
        cout << "Parse Tree" << endl;
        // Create a parser which parses the token stream
        // to create a parse tree.
        ExprParser parser(&tokens);
        tree::ParseTree *tree = parser.program();
        
        // Print the parse tree in Lisp format.
        cout << endl << "Parse tree (Lisp format):" << endl;
        cout << tree->toStringTree(&parser) << endl;
    }
    else
        cout << "Syntax: ./main.exe <option> <filename>" << endl << "<option>: -scan, -parse" << endl;
    
    
    return 0;
}

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
