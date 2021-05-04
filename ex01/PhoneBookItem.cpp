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

void PhoneBookItem::print_item(std::string item, int newline)
{
    std::cout << std::setfill(' ') << std::setw(10) << std::right;
    std::cout << item << '|';
    if (newline)
        std::cout << '\n';    
}

void    PhoneBookItem::print_summary(int index)
{
    print_item(std::to_string(index), 0);
    print_item(this->firstname, 0);
    print_item(this->lastname, 0);
    print_item(this->nickname, 0);
}

void    PhoneBookItem::print_contact(void)
{
    std::cout << "first name : " << this->firstname << '\n';
    std::cout << "last name  : " << this->lastname << '\n';
    std::cout << "nickname   : " << this->nickname << '\n';
}