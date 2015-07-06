// strin.cpp
#include <iostream>
#include <sstream>
#include <string>
int main()
{
    using namespace std;
    string lit = "it was a dark and stormy day, "
           " and the full moon glowed brilliantly. ";
    istringstream instr(lit); // use buf for input
    string word;
    while (instr >> word)
        cout  << word << endl;
    return 0; 
}