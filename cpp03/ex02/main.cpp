#include "FragTrap.hpp"
#include "ScavTrap.hpp"

void Fragtrap_play()
{
    srand((unsigned)time(NULL));
    std::string input;

    std::cout << "enter fragtrap name. ";
    getline(std::cin, input);
    if (std::cin.eof())
        return ;
    FragTrap bot(input);
    std::cout << "Who is your enemy? ";
    getline(std::cin, input);
    if (std::cin.eof())
        return ;
    FragTrap enemy(input);
    std::string target(input);

    int select;
    while (1)
    {
        std::cout << "1.rangedAttack 2.meleeAttakc 3.takeDamage 4.repair 5.vaulthunter 6.exit\n";
        getline(std::cin, input);
        if (std::cin.eof())
            return ;
        char *end;
        select= std::strtol(input.c_str(), &end, 10);
        if (std::cin.fail() || *end != '\0' || select < 1 || select > 6)
        {
            std::cout << "wrong input\n";
            continue ;
        }
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
                return ;
        }
    }
    return ;
}

void Scavtrap_play()
{
    std::string input;

    std::cout << "enter scavtrap name. ";
    getline(std::cin, input);
    if (std::cin.eof())
        return ;
    ScavTrap bot(input);
    std::cout << "Who is your enemy? ";
    getline(std::cin, input);
    if (std::cin.eof())
        return ;
    ScavTrap enemy(input);
    std::string target(input);

    int select;
    while (1)
    {
        std::cout << "1.rangedAttack 2.meleeAttakc 3.takeDamage 4.repair 5.vaulthunter 6.exit\n";
        getline(std::cin, input);
        if (std::cin.eof())
            return ;
        char *end;
        select= std::strtol(input.c_str(), &end, 10);
        if (std::cin.fail() || *end != '\0' || select < 1 || select > 6)
        {
            std::cout << "wrong input\n";
            continue ;
        }
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
                bot.challengeNewcomer(target);
                break ;
            case 6:
                return ;
        }
    }
    return ;
}

int main()
{
    std::string input;
    while (1)
    {
        std::cout << "Choose between 1. FragTrap and 2. ScavTrap 3.exit\n";
        getline(std::cin, input);
        if (std::cin.eof())
            return (0);
        char *end;
        int select;
        select = std::strtol(input.c_str(), &end, 10);
        if (std::cin.fail() || *end != '\0' || select < 1 || select > 3)
        {
            std::cout << "wrong input\n";
            continue ;
        }
        switch(select)
        {
            case 1:
                Fragtrap_play();
                break ;
            case 2:
                Scavtrap_play();
                break ;
            case 3:
                return (0);
        }
    }
}