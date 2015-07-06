// vect1.cpp -- vector templates
#include <iostream>
#include <string>
#include <vector>

const int NUM = 5;
int main()
{
    using std::vector;
    using std::string;
    using std::cin;
    using std::cout;
    using std::endl;

    vector<int> ratings(NUM);
    vector<int>::iterator pr;
    pr = ratings.begin();
    vector<string> titles(NUM);
    vector<string>::iterator itt;
    cout <<"Enter  ratings(0-10)\n";
    for (pr = ratings.begin(); pr != ratings.end(); pr++)
        cin >> *pr;
    cout << "Enter books\n";
    for (itt = titles.begin(); itt != titles.end(); itt++)
        cin >> *itt;
    cout << "You entered: \n" << "Rating\tBook\n";
    for (pr = ratings.begin(); pr != ratings.end(); pr++)
    {
        for (itt= titles.begin(); itt != titles.end(); itt++)
        {
            cout << *pr << " " << *itt << endl;

        }
    }

    return 0;
}