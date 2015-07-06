// ilist.cpp - use initializer_list (C++11 feature)
#include <iostream>
#include <initializer_list>

template <typename T>
T sum(std::initializer_list<T> il);
template <typename T>
T average(const std::initializer_list<T> & ril);
template <typename T>
void show(const std::initializer_list<T> & ril);

int main()
{
    using std::cout;

    cout << "List 1: sum = " << sum({2,3,4})
       << ", ave = " << average({2,3,4}) << '\n';
    std::initializer_list<double> dl = {1.1, 2.2, 3.3, 4.4, 5.5};
    cout << "List 2: sum = " << sum(dl)
        << ", ave = " << average(dl) << '\n';
    dl = {16.0, 25.0, 36.0, 40.0, 64.0};
    cout << "List 3: sum = " << sum(dl)
            << ", ave = " << average(dl) << '\n';
    show(dl);
    return 0;
}

template <typename T>
T sum(std::initializer_list<T> il)
{
    T tot = 0;
    for (auto x: il) 
        tot += x;
    return tot;
}

template <typename T>
T average(const std::initializer_list<T> & ril)
{
    T tot = 0;
    int n = ril.size();
    T ave = 0.0;
    if (n > 0)
    {
        for (auto p: ril)
            tot += p;
        ave = tot / n;
    }
    return ave;
}

template <typename T>
void show(const std::initializer_list<T> & ril)
{
    for (auto x: ril)
        std::cout << x << " ";
    std::cout << std::endl;
}