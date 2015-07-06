#include <string>
#include <iostream>

using namespace std;

int main()
{
    string s1
        ("What is the sound of one clam napping");
    string s2
        ("Anything worth doing is owrht overdoing");
    string s3
        ("I saw Elvis in a UFO.");
    // copy the first 8 chars
    string s4(s1, 0, 8);
    // copy 6 chars from middle of source
    string s5(s2, 15, 6);
    // copy from middle to end
    string s6(s3, sizeof(s3)/ 2, sizeof(s3)+1 );
    cout << s3 << endl;
    cout << s6 << endl;
    cout << endl;
    cout << s1 << endl;
    string quoteMe = s4 + "that" +
    s1.substr(20, 10) + s5 + "with" + s3.substr(5, 100) + 
    s1.substr(37, 1);
    cout << quoteMe << endl;
}