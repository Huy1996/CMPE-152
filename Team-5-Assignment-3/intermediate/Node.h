#ifndef TEAM5_ASSIGNMENT2_NODE_H
#define TEAM5_ASSIGNMENT2_NODE_H

#include <string>
#include <vector>
#include <sstream>
#include "Symtab.h"
using namespace std;

enum class NodeType{
    PROGRAM, COMPOUND, ASSIGN, LOOP, TEST, WRITE, WRITELN,
    ADD, SUBTRACT, MULTIPLY, DIVIDE, EQUAL, LT,
    VARIABLE, INTEGER_CONSTANT, REAL_CONSTANT, STRING_CONSTANT,
    GT, GTEQ, LTEQ, NE, NOT_NODE, IF,
    TRUE_STATEMENT, FALSE_STATEMENT,
    AND_NODE, OR_NODE, DIV_NODE, TO, DOWN_TO, FOR_LOOP, NEGATIVE,
    CASE_STATEMENT, LIST, WHILE_LOOP, REPEAT_LOOP, VAR, WRITE_ELEMENT
};

static const string node_string[] ={
    "PROGRAM", "COMPOUND", "ASSIGN", "LOOP", "TEST", "WRITE", "WRITELN",
    "ADD", "SUBTRACT", "MULTIPLY", "DIVIDE", "EQUAL", "LT",
    "VARIABLE", "INTEGER_CONSTANT", "REAL_CONSTANT", "STRING_CONSTANT",
    "GT", "GTEQ", "LTEQ", "NE", "NOT_NODE", "IF",
    "TRUE_STATEMENT", "FALSE_STATEMENT",
    "AND_NODE", "OR_NODE", "DIV_NODE", "TO", "DOWN_TO", "FOR_LOOP", "NEGATIVE",
    "CASE_STATEMENT", "LIST", "WHILE_LOOP", "REPEAT_LOOP", "VAR", "WRITE_ELEMENT"
};

inline string repeat(int n) {
    std::ostringstream os;
    for(int i = 0; i < n; i++)
        os << "\t";
    return os.str();
}

class Node
{
public:
    NodeType type;
    int line_number;
    int inden_count;
    string text;
    struct Variable *entry;
    int value;
    string to_print = "";
    string string_value;
    vector<Node *> node_container;

    Node(NodeType type)
            : type(type), line_number(1), entry(nullptr) {}

    void adopt(Node *node) {
        node_container.push_back(node);
    }

    static void outputTree(Node *node){
        node->to_print += repeat(node->inden_count);
        node->to_print += "<" + node_string[(int) node->type];

        switch (node->type) {
            case NodeType::PROGRAM:
                node->to_print += " " + node->text + " line=\"" + to_string(node->line_number) + "\"";
                break;
            case NodeType::VARIABLE:
                node->to_print += " id=\"" + node->text + "\" " + "level=\"0\"";
                break;
            case NodeType::INTEGER_CONSTANT:
            case NodeType::REAL_CONSTANT:
                node->to_print += " value=\"" + to_string(node->value) + "\"";
                break;
            case NodeType::STRING_CONSTANT:
                node->to_print += " value='" + node->string_value + "'";
                break;
            case NodeType::LOOP:
            case NodeType::TEST:
            case NodeType::TO:
            case NodeType::DOWN_TO:
            case NodeType::WRITE_ELEMENT:
                break;
            default:
                node->to_print +=  + " line=\"" + to_string(node->line_number) + "\"";

        }

        if (node->node_container.size() > 0)
        {
            node->to_print += ">";
            cout << node->to_print << endl;
            node->to_print = "";
            for(Node *child: node->node_container) {
                child->inden_count = node->inden_count + 1;
                outputTree(child);
            }
            node->to_print += repeat(node->inden_count);
            node->to_print += "</" + node_string[(int) node->type] + ">";
        }

        else node->to_print += " />";

        cout << node->to_print << endl;
        node->to_print = "";
    }
};



#endif //TEAM5_ASSIGNMENT2_NODE_H
