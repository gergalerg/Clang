#include <iostream>

int main()
{
    using std::cout;
    using std::endl;
    using std::ios_base;

    int temp = 63;

    cout << "Today's water temp = ";
    cout.setf(ios_base::showpos); // show plus sign
    cout << temp << endl;

    cout << "Different formats: \n";
    cout << std::hex << temp << endl;
    cout.setf(ios_base::uppercase); 
    cout.setf(ios_base::showbase); // use 0x prefix
    cout << "or\n";
    cout << temp << endl;
    cout << "How " << true << "! oops -- how ";
    cout.setf(ios_base::boolalpha);
    cout << true << "!\n";

    return 0;
}