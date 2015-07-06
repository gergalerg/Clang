#include <iostream>
#include <cstring>

class Frabjous {
private:
    char  fab[20];
public:
    Frabjous(const char * s);
    virtual void tell() { std::cout << fab; }
};

class Gloam {
private:
    int glip;
    Frabjous fb;
public:
    Gloam(int g = 0, const char * s) : glip(g), {}
    // Gloam(int g, const Frabjous & fr) : glip(g), fb(fr) { }
    void tell();
};

Frabjous::Frabjous(const char *s) { 
    int len;
    char * str;
    len  = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
};

void Gloam::tell()
{ 
    fb.tell();
    std::cout << std::endl;
    std::cout << glip << std::endl;
 };

int main()
{
   Frabjous greg("Greg");
   return 0;

}