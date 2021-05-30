#include "whatever.hpp"
# include <iostream>

int main()
{
    int a = 10;
    int b = 20;

    std::cout << "==== test int ====\n";
    swap(a, b);
    std::cout << a << " " <<  b << "\n";

    std::cout << "min value : " << min(a, b) << "\n"; 
    std::cout << "max value : " << max(a,b) << "\n";

    std::cout << "\n==== test string ====\n";
    std::string c = "abc";
    std::string d = "efg";
    swap(c, d);
    std::cout << c << " " <<  d << "\n";
    std::cout << "min value : " << min(c, d) << "\n"; 
    std::cout << "max value : " << max(c ,d) << "\n";
}