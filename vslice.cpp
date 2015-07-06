// vslice.cpp --- using valarray slice
#include <iostream>
#include <valarray>
#include <cstdlib>

const int SIZE = 12;
typedef std::valarray<int> vint; // simplify declarations
void show(const vint & v, int cols);

int main()
{
    using std::slice;
    using std::cout;
    vint valint(SIZE);
    srand(time(NULL));
    int i;
    for (i = 0; i < SIZE; ++i)
        valint[i] = std::rand() % 10;
    cout << "Original array:\n";
    show(valint, 3);
    vint vcol(valint[slice(1,4,3)]);  // extract 2nd column
    cout << "\nSecond column:\n"; 
    show(vcol, 1);
    valint[slice(2,4,3)] = 10; // assign to 2nd column
    cout << "Set last column to 10:\n";
    show(valint, 3);
    cout << "Set first columnt to sum of next two:\n";
    // + not defined for slices, so convert to valarray<int>
    valint[slice(0,4,3)] = vint(valint[slice(1,4,3)]) + 
                            vint(valint[slice(2,4,3)]);
    show(valint, 3);
    return 0;
}

void show(const vint & v, int cols)
{
    using std::cout;
    using std::endl;

    int lim = v.size();
    for (int i = 0; i < lim; ++i)
    {
        cout.width(3);
        cout << v[i];
        if (i % cols == cols - 1)
            cout << endl;
        else
            cout << ' ';
    }
    if (lim % cols != 0)
        cout << endl;
}