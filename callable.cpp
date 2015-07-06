// compile with somedefs.h
#include "somedefs.h"
#include <iostream>


int main()
{
    using namespace std;

    double y = 1.21;
    cout << "Function pointer dub:\n";
    cout << " " << use_f(y, dub) << endl;
    cout << "Function pointer square: \n";
    cout << " " << use_f(y, square) << endl;
    cout << "Fucntion object Fp:\n";
    cout << " " << use_f(y, Fp(5.0)) << endl;
    cout << "Function object Fq: \n";
    cout << " " << use_f(y, Fq(5.0)) << endl;

    cout << "Lambda expression 1:\n";
    cout << " " << use_f(y, [](double u) { return u * u; }) << endl;
    cout << "Lambda expression 2:\n";
    cout << " " << use_f(y, [](double u) { return u + u/2.0;}) << endl; 

}