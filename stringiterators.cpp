#include <iostream>
#include <string>

int main()
{
    using namespace std;

    string source("xxx");
    string s(source.begin(), source.end());
    cout << s << endl;
}