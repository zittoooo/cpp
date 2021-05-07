#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
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
    getline(std::cin, input);
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
    std::string choose;
    std::cout << "choose index : ";
    getline(std::cin, choose);
    char *end;
    index = std::strtol(choose.std::string::c_str(), &end, 10);
    if (std::cin.fail() || *end != '\0' || index < 0 || index >= this->size)
        std::cout << "wrong input!\n";
    else
        this->items[index].print_contact();
    return ;
}
