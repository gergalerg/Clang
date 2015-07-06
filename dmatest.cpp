#include <iostream>
#include <cstring>

class baseDMA
{
private:
    char * label;
    int rating;
public:
    baseDMA(const char * l = "null", int r = 0)
          { label = new char[std::strlen(l) + 1]; 
            std::strcpy(label, l);
            rating = r; };
    baseDMA(const baseDMA & rs){ label = rs.label; rating = rs.rating;};
    virtual ~baseDMA(){delete [] label;};
    baseDMA & operator=(const baseDMA & rs);
};

int main() {
    baseDMA *mydma = new baseDMA("Herbie", 343);
    return 0;
}