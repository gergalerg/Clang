// list.cpp - using a list
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

template <typename T>
void outint(T n) { std::cout << n << " "; }

int main()
{
    std::list<int> one(5,2); // list of 5 2s
    int stuff[5] = {1,2,4,8, 6};
    std::list<int> two;
    two.insert(two.begin(), stuff, stuff + 5);
    int more[6] = {6,4,2,4,6,5};
    std::list<int> three(two);
    three.insert(three.end(), more, more + 6);

    std::cout << "List one: ";
    for (auto x: one ) std::cout << x << " ";
    std::cout << std::endl << "List two: ";
    for (auto x : two) std::cout << x << " ";
    three.remove(2);
    std::cout << std::endl << "List three minus 2s: ";
    for(auto x : three ) std::cout << x << " ";
    three.splice(three.begin(), one);
    for(auto x : three ) std::cout << x << " ";
    std::cout << "\nThree after splice: ";
    std::cout << std::endl << "List one: ";
    for (auto x: one) std::cout << x << " ";
    three.unique();
    std::cout << "List three after unique: ";
    for(auto x : three ) std::cout << x << " ";
    three.sort();
    three.unique();
    std::cout << "\n" << "List three after sort and unique: ";
    for(auto x : three ) std::cout << x << " ";
    two.sort();
    three.merge(two);
    std::cout << std::endl << "Sorted two merged into three: ";
    for(auto x : three ) std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}