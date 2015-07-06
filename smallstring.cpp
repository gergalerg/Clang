#include <string>
#include <iostream>

using namespace std;

int main()
{
    string imBlank;
    string heyMom("Where are my socks");
    string standardReply = "Beamed into deep"
        " space on wide angle dispersion?";
    string useThisOneAgain(standardReply);

    cout << imBlank << endl;
    cout << heyMom << endl;
    cout << standardReply << endl;
    cout << useThisOneAgain << endl;

}