#include <iostream>

bool is_first_char_valid_alpha_unsafe(const char *p)
{
return isalpha(p[0]);
} 
bool is_first_char_valid_alpha(const char *p)
{
    return p != NULL && isalpha(p[0]);
}
int main()
{

    const char *name = "1greg";
    //std::cout << is_first_char_valid_alpha_unsafe(name) << std::endl;
    std::cout << std::boolalpha;
    std::cout << is_first_char_valid_alpha(name) << std::endl;
    std::cout << std::noboolalpha;
    std::cout << is_first_char_valid_alpha(name) << std::endl;
   // std::cout << std::uppercase;
    std::cout.setf(std::ios_base::uppercase);
    std::cout << name <<  std::endl;
    std::cout << std::nouppercase; 
    std::cout << name << std::endl;

}