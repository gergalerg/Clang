// valvect.cpp -- comparing vector and valarray
#include <iostream>
#include <valarray>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T, typename U>
void ShowResults(T &t, U &u, int data_size)
{
    int size = data_size; 
    int i = 0;
    for (i = 0; i < size; i++)
    {
        cout.width(8);
        cout << t[i] << ": ";
        cout.width(8);
        cout << u[i] << endl; 
    }
    cout << "done\n";
}
int main()
{
    vector<double> data;
    double temp;

    cout << "Enter numbers (<=0 to Quit):\n";
    while (cin >> temp && temp > 0)
        data.push_back(temp);
    sort(data.begin(), data.end());
    int size = data.size();
    valarray<double> numbers(size);
    int i;
    for (i = 0; i < size; i++)
        numbers[i] = data[i];
    valarray<double> sq_rts(size);
    sq_rts = sqrt(numbers);
    valarray<double> results(size);
    results =  sq_rts;
    cout.setf(ios_base::fixed);
    cout.precision(4);
    ShowResults(numbers, results, size);


    return 0;
}
