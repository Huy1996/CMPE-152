#include <iostream>
#include "frontend/Scanner.h"
#include "frontend/Source.h"
#include "frontend/Parser.h"
#include "intermediate/Node.h"
#include <cstdio>

using namespace std;

void scan(Scanner *scanner);
void parse(Scanner *scanner);

int main(int argc, char *argv[]) {
    if(argc < 3){
        cout << "Missing argument" << endl;
        exit(0);
    }
    string option = argv[1];
    string sourceFileName = argv[2];
    Source *source = new Source(sourceFileName);

    cout << "---------Team 5----------" << endl;
    cout << "Member: " << endl;
    cout << "\t\tChavez, Alberto Francisco" << endl;
    cout << "\t\tDuong, Nguyen Minh Huy" << endl;
    cout << "\t\tFitzgerald, Daniel" << endl << endl;

    Scanner *scanner = new Scanner(source);  // create the scanner
    if (option == "-scan") {
        cout << ">>>>>> Open ScanOut.txt for output. <<<<<<" << endl;
        scan(scanner);
    }
    else if (option == "-parse") {
        cout << ">>>>>> Open ParseOut.txt for output. <<<<<<" << endl;
        parse(scanner);
    }
    else
        cout << "Syntax: ./main.exe <option> <filename>" << endl << "<option>: -scan, -parse" << endl;

    return 0;
}

void scan(Scanner *scanner){
    freopen("ScanOut.txt", "w", stdout);
    cout << "Token" << endl;
    for (Token *token = scanner->next_token();
         token->get_token_type().compare("END_OF_FILE") != 0;
         token = scanner->next_token()){
        cout << "=> " << token->get_token_type() << " : " << token->get_text() << endl;
    }

}

void parse(Scanner *scanner){
    freopen("ParseOut.txt", "w", stdout);
    cout << "Parse Tree" << endl;

    Symtab *symtab = new Symtab();

    Parser *parser = new Parser(scanner, symtab);

    Node *program = parser->parseProgram();

    int error = parser->get_error();

    if(error == 0){
        Node::outputTree(program);
        cout << endl << endl << "Symbol Table" << endl;
        symtab->outputSymbolTable();
    }
    else{
        cout << endl << "There were " << error << " errors." << endl;
    }
}