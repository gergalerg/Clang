#include <iostream>
#include <string>

// definition for 0 params -- terminating call
void show_list3() {}

// def. for 1 or more params
template <typename T, typename... Args>
void show_list3( const T& value, const Args&... args)
{
    std::cout << value << "\n";
    show_list3(args...);
    std::cout << std::endl;
}

template <typename T>
void show_list3(const T& value)
{
    std::cout << value << '\n';
}
int main()
{
    int n = 14;
    double x = 2.71828;
    std::string mr = "Mr. String objects!";
    show_list3(n, x);
    show_list3(x*x, '!', 6, mr, '1', 'a', 'b');
    return 0;
}