#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *p = &str;
    std::string &ref = str;
    
    std::cout << *p << "\n";
    std::cout << ref << "\n";
}