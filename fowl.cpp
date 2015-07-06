#include <iostream>
#include <string>
#include <memory>

int main()
{
    using namespace std;
    shared_ptr<string> films[5] = 
    {
        shared_ptr<string> (new string("Fowl Balls")),
        shared_ptr<string> (new string("Duck Walks")),
        shared_ptr<string> (new string("Chicken Runs")),
        shared_ptr<string> (new string("Turkey Errors")),
        shared_ptr<string> (new string("Goose Eggs"))        
    };
    shared_ptr<string> pwin;
    shared_ptr<string> newpwin;
    pwin = films[2]; // films[2] loses ownership
    newpwin = films[2];

    cout << "The nominees are: \n";
    for (int i = 0; i < 5; i++)
        cout << *films[i] << endl;
    cout << "The winner is " << *pwin << "!\n";
    cin.get();
    unique_ptr<string> p3(new string("auto"));
    std::cout << *p3 << std::endl;

    return 0;
}