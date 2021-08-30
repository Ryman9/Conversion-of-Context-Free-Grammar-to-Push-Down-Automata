#ifndef PUSHDOWN_H
#define PUSHDOWN_H

#include <vector>
#include <unordered_set>
#include <string>
#include <fstream>
#include <iostream>
#include <cstring>

// Object to hold pushdown automata.
class pushdown
{
    // Data members.
    private:
        std::vector<pair<char, std::string>> PDA;
        std::vector<pair<char, std::string>> GNF;
        std::vector<pair<char,std::string>> grammar;
        std::vector<char> single_terminals;

    // Function decs.
    public:
        void read_input(std::string filename);
        void simplify();
        void lambda_removal();
        void unit_removal();
        void useless_removal();
        void convert_GNF();
        void convert_PDA();
        void display_table();
        void display_graph(); //will incorporate Ryan's rectangles:tm:
        void display_grammar(bool GNF_or_grammar);

};

#endif