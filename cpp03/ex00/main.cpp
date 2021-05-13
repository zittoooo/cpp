#include "FragTrap.hpp"

int main()
{
    std::string input;

    std::cout << "enter fragtrap name. ";
    getline(std::cin, input);
    if (std::cin.eof())
        return (0);
    FragTrap bot(input);
    std::cout << "Who is your enemy? ";
    getline(std::cin, input);
    if (std::cin.eof())
        return (0);
    FragTrap enemy(input);
    std::string target(input);

    int select;
    while (1)
    {
        std::cout << "1.rangedAttack 2.meleeAttakc 3.takeDamage 4.repair 5.vaulthunter 6.exit\n";
        getline(std::cin, input);
        if (std::cin.eof())
            return (0);
        char *end;
        select= std::strtol(input.c_str(), &end, 10);
        if (std::cin.fail() || *end != '\0' || select < 1 || select > 6)
            std::cout << "wrong input\n";
        switch(select)
        {
            case 1:
                bot.rangedAttack(target);
                break ;
            case 2:
                bot.meleeAttack(target);
                break ;
            case 3:
                bot.takeDamage(20);
                break ;
            case 4:
                bot.beRepaired(30);
                break ;
            case 5:
                bot.vaulthunter_dot_exe(target);
                break ;
            case 6:
                exit(0);
        }
    }
    return (0);
}