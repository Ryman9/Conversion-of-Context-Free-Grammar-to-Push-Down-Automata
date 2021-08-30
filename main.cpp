//
// Driver program to run the conversions of CFG to PDA.
//
#include "pushdown.hpp"
#include <iostream>

using namespace std;

int main()
{
    pushdown xd;
    xd.read_input("grammar.txt");
    cout << "Reading file..." << endl;
    xd.display_grammar(true);
    

    return 0;
}