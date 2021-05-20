#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

void Fragtrap_play()
{
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

void ninjatrap_play()
{
    srand((unsigned)time(NULL));
    std::string input;

    std::cout << "enter ninja trap name. ";
    getline(std::cin, input);
    if (std::cin.eof())
        return ;
    NinjaTrap bot(input);
    std::cout << "Who is your enemy? ";
    getline(std::cin, input);
    if (std::cin.eof())
        return ;
    ScavTrap Scav_enemy(input);
    FragTrap Frag_enemy(input);
    NinjaTrap Ninja_enemy(input);
    std::string target(input);
    int select;
    int pick;
    while (1)
    {
        fflush(stdin);
        std::cout << "1.rangedAttack 2.meleeAttakc 3.takeDamage 4.repair 5.ninjaShoebox 6.exit\n";
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
        fflush(stdin);
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
                std::cout << "1.FragTrap 2.ScavTrap 3.ninjaTrap\n";
                std::cin >> pick;
                switch(pick)
                {
                    case 1:
                        bot.ninjaShoebox(Frag_enemy);
                        break ;
                    case 2:
                        bot.ninjaShoebox(Scav_enemy);
                        break ;
                    case 3:
                        bot.ninjaShoebox(Ninja_enemy);
                }
                break ;
            case 6:
                return ;
        }
    }
    return ;
}

int main()
{
    srand((unsigned)time(NULL));
    std::string input;
    while (1)
    {
        std::cout << "start\nChoose between 1. FragTrap and 2. ScavTrap 3.Ninja Trap 4.exit\n";
        getline(std::cin, input);
        if (std::cin.eof())
            return (0);
        char *end;
        int select;
        select = std::strtol(input.c_str(), &end, 10);
        if (std::cin.fail() || *end != '\0' || select < 1 || select > 4)
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
                ninjatrap_play();
                break ;
            case 4:
                return (0);
        }
    }
}