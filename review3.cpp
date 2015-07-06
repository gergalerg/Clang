#include <iostream>
#include <string>

class Frabjous {
private:
    std::string fab;
public:
    Frabjous(const std::string s = "C++") : fab(s) {}
    virtual void tell() { std::cout << fab; }
};

class Gloam : private Frabjous {
private:
    int glip;
public:
    Gloam(int g = 0, const std::string & s = "C++") : glip(g), Frabjous(s){}
    Gloam(int g, const Frabjous & fr) : glip(g), Frabjous(fr) {}
    void tell();
};


void Gloam::tell()
{ 
    Frabjous::tell();
    std::cout << std::endl;
    std::cout << glip << std::endl;
 };

int main()
{
   Gloam greg(3, "Greg");
   greg.tell();
    return 0;

}