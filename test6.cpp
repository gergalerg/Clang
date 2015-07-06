#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>

const long Size1 = 39L;
const long Size2 = 100 * Size1;
const long Size3 = 100 * Size2;

bool f3(int x) { return x % 3 == 0;}
bool f13(int x) { return x % 13 == 0;}

class f_mod
{
private:
    int dv;
public:
    f_mod(int d = 1) : dv(d) {}
    bool operator() (int x) { return x % dv == 0;}
};

int main()
{

    srand(time(nullptr));
    using namespace std;
    std::vector<int> numbers(1000);
    std::generate(numbers.begin(), numbers.end(),std::rand);

    int count3 = count_if(numbers.begin(), numbers.end(), [](int x) { return x % 3 == 0;});
    cout << "NUmbers div by 3: " << count3 << '\n';
    int count13 = count_if(numbers.begin(), numbers.end(),[](int x) { return x % 13 == 0;});
    cout << "NUmbers div by 13: " << count13 << '\n';

    numbers.resize(Size2);
    std::generate(numbers.begin(), numbers.end(),std::rand);
    cout << "Sample size: " << Size2 << '\n';
    auto count = [] (int x ) { return x % 13 == 0;};
    count3 = count_if(numbers.begin(), numbers.end(),count);
    cout << "NUmbers div by 3: " << count3 << '\n';
    count13 = count_if(numbers.begin(), numbers.end(),count );
    cout << "NUmbers div by 13: " << count13 << '\n';

    numbers.resize(Size3);
    std::generate(numbers.begin(), numbers.end(),std::rand);
    cout << "Sample size: " << Size2 << '\n';

    int newcount3 = 0;
    int newcount13 = 0;
    for_each(numbers.begin(), numbers.end(),
        [&](int x) { newcount3 += x % 3 == 0; newcount13 += x % 13 == 0;});
    cout << "NUmbers div by 3: " << count3 << '\n';
    cout << "NUmbers div by 13: " << count13 << '\n';

    return 0;
}