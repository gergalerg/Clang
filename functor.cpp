// functor.cppp using a functor
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

template <typename T>
class TooBig
{
private:
    T cutoff;
public:
    TooBig(const T & t) : cutoff(t) {}
    bool operator()(const T & v) { return v > cutoff; }
};

void outint(int n ) { std::cout << n << " ";}

int main()
{
    using std::list;
    using std::cout;
    using std::endl;

    TooBig<int> f100(100); // limit = 100
    srand(time(NULL));
    int vals[10];
    for (int i = 0; i< 10; i++)
        vals[i] = rand() % 400;
    list<int> yadayada(vals, vals + 10); // range constructor
    list<int> etcetera(vals, vals + 10);
    cout << "Original lists:  \n";
    for_each(yadayada.begin(), yadayada.end(), outint);
    cout << endl;
    for_each(etcetera.begin(), etcetera.end(), outint);
    cout << endl;
    yadayada.remove_if(f100);  // use a named function object
    etcetera.remove_if(TooBig<int>(200)); // construct a function object
    cout << "Trimmed lists:\n";
    for_each(yadayada.begin(), yadayada.end(), outint);
    cout << endl;
    for_each(etcetera.begin(), etcetera.end(), outint);
    
    

    return 0;
}