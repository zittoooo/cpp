#include <iostream>
#include <string>
#include "PhoneBookItem.hpp"

class PhoneBook
{
private:
    PhoneBookItem Itmes[8];
public:
    PhoneBook(/* args */);
    ~PhoneBook();

    int add();
    int search();
    int exit();
};
