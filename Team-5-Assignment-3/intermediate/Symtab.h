#ifndef TEAM5_ASSIGNMENT2_SYMTAB_H
#define TEAM5_ASSIGNMENT2_SYMTAB_H

#include <string>
#include <map>
#include <iostream>

using namespace std;

struct Variable{
    string variable_name;
    string data_type;
    int value;
};

class Symtab{
private:
    map<string, Variable*> symbol_table;

public:
    Variable *new_variable(string variable_name, string data_type){
        struct Variable* new_variable = new Variable({variable_name, data_type, 0});
        symbol_table[variable_name] = new_variable;
        return new_variable;
    }

    Variable *find_variable(string variable_name){
        if(symbol_table.find(variable_name) != symbol_table.end()){
            return symbol_table[variable_name];
        }
        return nullptr;
    }

    void outputSymbolTable(){
        for(map<string, Variable*>::iterator it = symbol_table.begin(); it!=symbol_table.end(); it++){
            cout << "Variable name: "<< it->first << "\t\t type: " << it->second->data_type << endl;
        }
    }
};



#endif //TEAM5_ASSIGNMENT2_SYMTAB_H