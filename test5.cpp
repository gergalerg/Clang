#include <iostream>
#include <cstdio>
#include <initializer_list>
#include <array>

class Stump
{
private:
    int roots;
    double weight;
public:
    Stump(int r, double w) : roots(r), weight(w) {}
};

double sum (std::initializer_list<double> il);

template <typename T>
using arr12 = std::array<T, 12>;

int main()
{
    using namespace std;

    arr12<double> a1;
    arr12<char> a2;
    a2 = {'a', 'b', 'c', 'd', 'e'};

    cout << sizeof(a2)<< endl;
    for (auto x: a2) cout << x << " ";


    return 0;
}

double sum(std::initializer_list<double> il)
{
    double tot = 0;
    for (auto p = il.begin(); p != il.end(); p++)
        tot += *p;
    return tot;

}