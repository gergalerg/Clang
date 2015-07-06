#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    // use left just. show plus sign show trailing 0s with 3 prec.
    cout.setf(ios_base::left, ios_base::adjustfield);
    cout.setf(ios_base::showpos);
    cout.setf(ios_base::showpoint);
    cout.precision(3);

    // use enotation and save old format setting
    ios_base::fmtflags old = cout.setf(ios_base::scientific,
            ios_base::floatfield);
    cout << "Left just:\n";
    long n;
    for (n = 1; n <= 41; n += 10)
    {
        cout.width(4);
        cout << n << "|";
        cout.width(12);
        cout<< sqrt(double(n)) << "|\n";
    } 

    // change to internal justification
    cout.setf(ios_base::internal, ios_base::adjustfield);
    // restore default floating point display style
    cout.setf(old, ios_base::floatfield);

    cout << "Internal justification:\n";
    for (n = 1; n <= 41; n += 10)
    {
        cout.width(4);
        cout << n << "|";
        cout.width(12);
        cout << sqrt(double(n)) << "|\n";
    }

    // user right just. fixed nottation
    cout.setf(ios_base::right, ios_base::adjustfield);
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "RIght just.\n";
    for (n = 1; n <= 41; n+= 10)
    {
        cout.width(4);
        cout << n << "|";
        cout.width(12);
        cout << sqrt(double(n)) << "|\n";
        
    }
    return 0;
}