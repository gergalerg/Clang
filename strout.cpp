#include <iostream>
#include <sstream>
#include <string>

int main()
{
    using namespace std;
    ostringstream outstr; // manages a string

    string hdsk; 
    cout << "What's the name of your hard disk? ";
    getline(cin, hdsk);
    int cap;
    cout << "What's its capacity in GB? ";
    cin >> cap;
    // write formatted information to string stream
    outstr << "The hard disk " << hdsk << " has a capacity  of "
            << cap << "gigabytes.\n";
    string result = outstr.str(); // save result
    cout << result;

    return 0;
}