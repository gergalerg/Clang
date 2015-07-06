// Program to test the new C++11 regex syntax
#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()
{
    string input;
    regex rr("((\\+|-)?[[:digit:]]+)(\\.(([[:digit:]]+)?))?((e|E)((\\+|-)?)[[:digit:]]+)?");
    // as long as the input is correct ask for another number
    while (true)
    {
        cout <<"Give me a real number!"<< endl;
        cin>>input;
        if (!cin) 
            break;
        // exit when user inputs q
        if (input == "q")
            break;
        if (regex_match(input,rr))
            cout << "float" << endl;
        else
        {
            cout << "Invalid input " << endl;
        }
    }
}
