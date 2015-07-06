// str1.cpp -- introducing the string class string class

#include <iostream>
#include <string>
// using string constructors

int main()
{
    using namespace std;
    string one("Lottery Winner!"); // ctor #1
    cout << one << endl;
    string two(20, '$');
    cout << two << endl;
    string three(one);
    one += " Ooops!";
    cout << one << endl;
    two = "Sorry! That was ";
    cout << two << endl;
    three[0] = 'P';
    cout << three << endl;
    string four; // ctor #4
    four = two + three;
    cout << four << endl;
    char alls[] = "All's well that ends well";
    string five(alls,20);
    cout << five << "!\n";
    string six(alls+6, alls + 10);
    cout << six << ", ";
    string seven(&five[6], &five[10]); // ctor #6 again
    cout << seven << "....\n";
    string eight(four, 7, 16); // ctor #7
    cout << eight << " in motion!" << endl; 
    char info[100];
    cin >> info;
    cin.getline(info, 100);
    cout << info << " This is what you entered " << std::endl;

    return 0;
}