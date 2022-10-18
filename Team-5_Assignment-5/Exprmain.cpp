#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "./target/generated-sources/ant4/ExprLexer.h"
#include "./target/generated-sources/ant4/ExprParser.h"
#include <vector>
#include <sstream>
#include <cstdio>
#include <set>
#include <string>
#include <algorithm>

using namespace antlrcpp;
using namespace antlr4;
using namespace std;



string toUpperCase(string str){
    string upper_case(str);
    transform(upper_case.begin(), upper_case.end(), upper_case.begin(), ::toupper);
    return upper_case;
}

vector<string> token_type;

set<string> op = {
    ";", ",", ")", "(", "[", "]", ":=", ":", ".", "+", "-", "*", "/"
};

set<string> ignore_token = {
    "BEGIN", "END", "<EOF>", "PROGRAM",
    "FOR", "WHILE", "VAR", "TYPE", "UNTIL", "REPEAT", "DO", "THEN", "TO", "DOWNTO"
};

void load_token();
string printTree(tree::ParseTree *t, ExprParser *recog);

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
        cout << endl << "Parse tree (XML format):" << endl;
        //cout << tree->toString() << endl;
        //printTree(tree, &parser);
        cout << printTree(tree, &parser) << endl;
        //cout << tree->toStringTree(&parser) << endl;
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


string printTree(tree::ParseTree *t, ExprParser *recog) {
    const vector<string> &ruleNames = recog->getRuleNames();
    string temp = antlrcpp::escapeWhitespace(tree::Trees::getNodeText(t, ruleNames), false);
    if (t->children.empty()) {
        return temp;
    }

    stringstream ss;
    ss << "< " << temp << " >";

    // Implement the recursive walk as iteration to avoid trouble with deep nesting.
    stack<size_t> _stack;
    stack<string> previous;
    previous.push(temp);
    size_t childIndex = 0;
    tree::ParseTree *run = t;
    while (childIndex < run->children.size()) {
        tree::ParseTree *child = run->children[childIndex];
        temp = antlrcpp::escapeWhitespace(tree::Trees::getNodeText(child, ruleNames), false);
        if (!child->children.empty()) {
            // Go deeper one level.
            _stack.push(childIndex);
            run = child;
            childIndex = 0;
            ss << '\n';
            for (int i = 0; i < _stack.size(); i++)
                ss << "  ";
            ss << "< "<< temp << " ";
            if(!child->children[0]->children.empty() or 
                op.find(child->children[0]->getText()) != op.end() or
                ignore_token.find(toUpperCase(temp)) != ignore_token.end()){
                ss << ">";
            }
            previous.push(temp);
        } else {
            if(op.find(temp) != op.end()){}
            else if(ignore_token.find(toUpperCase(temp)) == ignore_token.end()){
                ss << temp << " />";
                previous.pop();
                previous.push("");
            }
            //previous.pop();
            while (++childIndex == run->children.size()) {
                if (_stack.size() > 0) {
                    // Reached the end of the current level. See if we can step up from here.
                    
                    if (previous.top() != ""){
                        ss << '\n';
                        for (int i = 0; i < _stack.size(); i++)
                        ss << "  ";
                        ss << "</ " << previous.top() << " >";
                        previous.pop(); 
                    }
                    else{
                        previous.pop();
                    }
                    childIndex = _stack.top();
                    _stack.pop();
                    run = run->parent;
                } 
                else {
                    break;
                }
            }
        }
    }

    return ss.str();
}

