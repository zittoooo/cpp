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

void PhoneBookItem::print_item(std::string item)
{
    std::cout << std::setfill(' ') << std::setw(10) << std::right;
    // std::cout << item.substr(10) << '|' << "\n";
    std::cout << item << '|';
}

void    PhoneBookItem::print_summary(int index)
{
    print_item(std::to_string(index));
    print_item(this->firstname);
    print_item(this->lastname);
    print_item(this->nickname);
}
