#include "PhoneBook.hpp"

PhoneBook::PhoneBook(/* args */)
{
    this->size = 0;
}

PhoneBook::~PhoneBook()
{
}

std::string PhoneBook::addInput(std::string msg)
{
    std::string input;

    if (std::cin.eof())
    {
        std::cout << "\nBye\n";
        std::exit(0);
    }
    std::cout << msg;
    std::cin >> input;
    return (input);
}

void PhoneBook::add()
{
    std::string input;

    if (this->size >= 8)
    {
        std::cout << "Phone book is full\n";
        return;
    }
    this->items[this->size++] = PhoneBookItem(
        addInput("first name: "),
        addInput("last name: "),
        addInput("nickname: "),
        addInput("login :"),
        addInput("postal_address : "),
        addInput("email_address: "),
        addInput("phone number : "),
        addInput("birthday : "),
        addInput("favorite meal : "),
        addInput("underwear color : "),
        addInput("darkest secret : "));
}

void    PhoneBook::search()
{
    PhoneBookItem::print_item("index", 0);
    PhoneBookItem::print_item("first name", 0);
    PhoneBookItem::print_item("last name", 0);
    PhoneBookItem::print_item("nick name", 0);
    std::cout << std::endl;
    for (int i = 0; i < this->size; i++)
    {
        this->items[i].print_summary(i);
        std::cout << std::endl;
    }
    int index = -1;
    std::cout << "choose index : ";
    std::cin >> index;
    this->items[index].print_contact();
}
