#include <iostream>

int main()
{
    using namespace std;
    cout << "Enter numbers: ";

    int sum = 0;
    int input;
    while (cin >> input)
    {
        sum += input;
    }
    cout << "Last value entered = " << input << endl;
    cout << "Sum = " << sum << endl;
    if (cin.fail() && !cin.eof() ) // failed because of mismatched input
    {
        cin.clear();  // reset stream state
        while (!isspace(cin.get()))
            continue; // get rid of bad input
    }
    else  // else bail out
    {
        cout << "I cannot go on!\n";
        exit(1);
    }
    cout << "Now enter a new number: ";
    cin >> input;
    return 0;
}
