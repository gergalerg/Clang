// spec.cpp
#include <iostream>
#include <string>
#include <typeinfo>
#include <memory>

using std::auto_ptr;
void demo1()
{
    double *pd = new double;
    std::cout << *pd << std::endl;
    *pd = 25.5;
    std::cout << *pd << std::endl;
    delete pd;
    std::cout << *pd << std::endl;
    return;
}

void demo2()
{
    auto_ptr<double> ap(new double);
    *ap = 25.5;
    std::cout << *ap << std::endl;
    return;
}
int main()
{
    demo1();
    //demo2();
    return 0;
}
