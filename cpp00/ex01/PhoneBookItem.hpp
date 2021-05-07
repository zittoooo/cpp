#ifndef PHONEBOOKITEM_HPP
# define PHONEBOOKITEM_HPP
# include <iostream>
# include <iomanip> 

class PhoneBookItem{
private:
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string login;
    std::string postal_address;
    std::string email_address;
    std::string phone_number;
    std::string birthday;
    std::string favorite_meal;
    std::string underwear_color;
    std::string darkest_secret;
public:
    PhoneBookItem(void);
    PhoneBookItem(
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
        std::string darkest_secret);
    static void print_item(std::string item, int newline);
    void print_one(std::string item);
    void print_summary(int index);
    void print_contact(void);
};

#endif
