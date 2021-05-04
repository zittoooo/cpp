#include "PhoneBook.hpp"

int main()
{
    std::string input;
    PhoneBook book;

    std::cout << "phonebook is ready\n";
    while (1)
    {
        std::cin >> input;
        // if (std::cin.eof())
        // {
        //     std::cout << "Bye\n";
        //     return (0);
        // }
        if (!input.compare("ADD"))
        {
            book.add();
        }
        else if (!input.compare("SEARCH"))
        {
            book.search();
        }
        else if (!input.compare("EXIT"))
        {
            std::cout << "exit\n";
            return (0);
        }
    }
}