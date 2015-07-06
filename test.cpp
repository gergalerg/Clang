#include <iostream>
#include <string>


int main()
{
    const std::string name = "Greg";
    // for (auto x: *c1) std::cout << x;
    std::string newname = name * 5;
    std::cout << newname  << std::endl;

    return 0;
}