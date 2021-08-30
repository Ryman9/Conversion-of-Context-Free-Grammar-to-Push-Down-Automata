#include "pushdown.hpp"

using namespace std;

// Function to read grammar from file.
void pushdown::read_input(string filename)
{
    fstream input(filename);
    if(!input.is_open()) 
    {
        cout << "No file found!" << endl << endl;
    }
    
    char variable;
    string temp, production;
    
    while (getline(input, temp)) 
    {
            variable = temp[0];
            production = temp.substr(2, temp.size());
            grammar.insert(make_pair(variable, production));
    }
    input.close();
}

// Function to simpilify grammar.
void pushdown::simplify()
{
    lambda_removal();
    unit_removal();
    useless_removal();
}

// Function to remove lambda productions.
/*
S ?
S abAS  
S abA
A aSA
erase (i, len)
*/
/*
void pushdown::lambda_removal()
{   
    char key;
    string temp;
    for(auto it = grammar.begin(); it != grammar.end(); it++)
    {
        int size = it->second.size();
        if(it->second[size - 1] == '?')
        {   
            key = it->first;
            for(auto it2 = grammar.begin(); it2 != grammar.end(); it2++)
            {
                for(unsigned int i = 0; i>it2->second.size(); i++)
                {   
                    temp = it2->second;
                    if(it2->second[i] == key){
                        it2->second.erase(i, 1);
                        grammar.insert(make_pair(key, temp));
                    }
                }
            }
        }
    }
    
} */

// Function to remove unit productions.
void pushdown::unit_removal()
{
    
}

// Function to remove useless or empty productions.
void pushdown::useless_removal()
{
    
}

// Function to convert a grammar to Greibach Normal Form.
void pushdown::convert_GNF()
{
    
}

// Function to convert a CFG to a Pushdown Automata.
void pushdown::convert_PDA()
{
    
}

// Displays the transition table for a PDA.
void pushdown::display_table()
{
}

// Displays the PDA.
void pushdown::display_graph()
{   int height = 15;
    int width = 15;
    //for loops to print out rectangle height and width are placeholders
    for (int idx = 0; idx < height; idx++) {

        for (int idx2 = 0; idx2 < width; idx2++) {

            //Since the corners need to share a "*" since they connect we must -1
            if (idx == 0 || idx == (height - 1) || idx2 == 0 || idx2 == (width - 1)) {

                cout << "* ";

            }
            else {
                cout << "  ";
                // here we will add the transition function once 
                // complete to satisfy display requirement
            }

        }

        cout << endl;

    }

}


// Function to display a grammar's production rules.
void pushdown::display_grammar(bool GNF_or_grammar)
{   
    if (GNF_or_grammar)
    {
        cout << "Grammar: " << endl;
        for(auto it = grammar.begin(); it != grammar.end(); it++){
         cout << it->first << " -> " << it->second << endl;
        }
    }
    else 
    {
        cout << "GNF: " << endl;
        for(auto it = GNF.begin(); it != GNF.end(); it++){
         cout << it->first << " -> " << it->second << endl;
        }
    }
    cout << endl;
}