#include "PhoneBook.hpp"

int main()
{
    std::string input;
    PhoneBook book;

    std::cout << "phonebook is ready\n";
    while (1)
    {
        std::cout << "choose 1.ADD 2.SEARCH 3.EXIT" << '\n';
        std::cout << "> ";
        getline(std::cin, input);
        if (std::cin.eof())
        {
            std::cout << "Bye\n";
            exit(0);
        }    
        if (!input.compare("ADD"))
            book.add();
        else if (!input.compare("SEARCH"))
            book.search();
        else if (!input.compare("EXIT"))
        {
            std::cout << "exit\n";
            std::exit(0);
        }    
    }
}