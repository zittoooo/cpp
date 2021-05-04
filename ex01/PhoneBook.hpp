#include <iostream>
#include <string>
#include <iomanip> 
#include "PhoneBookItem.hpp"

class PhoneBook
{
private:
    int size;
    PhoneBookItem items[8];
    std::string addInput(std::string msg);
public:
    PhoneBook();
    ~PhoneBook();

    void add();
    void search();
};
