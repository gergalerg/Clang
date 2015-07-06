#include <iostream>
#include <cstring>

double cm_to_inches (double cm) {
    return cm / 2.54;
}

int main()
{
    double (*func1)(double) = cm_to_inches;
    std::cout << func1(15.0) << std::endl;
    char * (*func2)(char *, int) = std::strchr;
    std::cout << func2("Wikipedia", 'i');
    return 0;
}