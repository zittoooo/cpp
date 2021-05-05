#include "PhoneBookItem.hpp"

PhoneBookItem::PhoneBookItem(void) {}

PhoneBookItem::PhoneBookItem(
    std::string firstname,
    std::string lastname,
    std::string nickname,
    std::string login,
    std::string postal_address,
    std::string email_address,
    std::string phone_number,
    std::string birthday,
    std::string favorite_meal,
    std::string underwear_color,
    std::string darkest_secret)
{
    this->firstname = firstname;
    this->lastname = lastname;
    this->nickname = nickname;
    this->login = login;
    this->postal_address = postal_address;
    this->email_address = email_address;
    this->phone_number = phone_number;
    this->birthday = birthday;
    this->favorite_meal = favorite_meal;
    this->underwear_color = underwear_color;
    this->darkest_secret = darkest_secret;
}

void PhoneBookItem::print_item(std::string str, int item)
{
    if (item && str.length() >= 10)
    {
        str[9] = '.';
        str = str.substr(0 , 10);
    }
    std::cout << std::setw(10);
    std::cout << str << '|';
}

void    PhoneBookItem::print_summary(int index)
{
    print_item(std::to_string(index), 1);
    print_item(this->firstname, 1);
    print_item(this->lastname, 1);
    print_item(this->nickname, 1);
}

void    PhoneBookItem::print_contact(void)
{
    std::cout << "first name     : " << this->firstname << '\n';
    std::cout << "last name      : " << this->lastname << '\n';
    std::cout << "nickname       : " << this->nickname << '\n';
    std::cout << "login          : " << this->login << '\n';
    std::cout << "postal_address : " << this->postal_address << '\n';
    std::cout << "email_address  : " << this->email_address << '\n';
    std::cout << "phone_number   : " << this->phone_number << '\n';
    std::cout << "birthdaty      : " << this->birthday << '\n';
    std::cout << "favorite_meal  : " << this->favorite_meal << '\n';
    std::cout << "underwear color: " << this->underwear_color << '\n';
    std::cout << "darkest secret : " << this->darkest_secret << '\n';
}