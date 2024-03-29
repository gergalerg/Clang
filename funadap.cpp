// funadap.cpp === using function adapters
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <functional>

void Show(double);
const int LIM = 6;
int main()
{
    using namespace std;

    srand(time(NULL));
    double arr1[LIM];
    double arr2[LIM];
    for (int i = 0; i < LIM; i++)
         arr1[i] = (rand() % 100); 
    for (int i = 0; i < LIM; i++)
         arr2[i] = (rand() % 100); 
    vector<double> gr8(arr1, arr1 + LIM);
    vector<double> m8(arr2, arr2 + LIM);
    cout.setf(ios_base::fixed);
    cout.precision(1);
    cout << "gr8:\t";
    for_each(gr8.begin(), gr8.end(), Show);
    cout << endl;
    cout << "m8: \t";
    for_each(m8.begin(), m8.end(), Show);
    cout << endl;

    vector<double> sum(LIM);
    transform(gr8.begin(), gr8.end(), sum.begin(),
        bind1st(plus<double>(), 2.5));
    cout << "sum:\t";
    for_each(sum.begin(), sum.end(), Show);
    cout << endl;

    vector<double> prod(LIM);
    transform(gr8.begin(), gr8.end(), prod.begin(),
        bind1st(multiplies<double>(), 2.5));
    cout << "prod:\t";
    for_each(prod.begin(), prod.end(), Show);
    cout << endl;
    return 0;
}

void Show(double v)
{
    std::cout.width(6);
    std::cout << v << ' ';
}