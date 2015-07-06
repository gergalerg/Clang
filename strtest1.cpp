#include <iostream>
#include <string>

int main()
{
    std::string snake1("cobra");
    std::string snake2("coral");
    int count = 0;
    char snake3[20] = "anaconda";

    for (int i = 0; i < sizeof(snake3); i++)
        count += 1;
    std::cout << count << std::endl;

    return 0;
}