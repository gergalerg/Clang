#include <iostream>
#include <fstream>

int main()

{
    using namespace std;
    ifstream fin("alice.txt");
    char firstline[80];
    fin.getline(firstline, 80);
    cout << firstline << endl;


    return 0;
}