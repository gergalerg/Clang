// strfile.cpp
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main()
{
    std::ifstream fin;
    fin.open("tobuy.txt");
    if (fin.is_open() == false)
    {
        std::cerr << "Can't open file. Bye.\n";
        exit(EXIT_FAILURE);
    }
    std::string item;
    int count = 0;
    getline(fin, item, ':');
    while (fin) // while input is good
    {
        ++count;
        std::cout << count << ": " << item << std::endl;
        getline(fin, item, ':');
    }
    std::cout << "Done\n";
    fin.close();

    return 0;
}