#include "ZombieHorde.hpp"

int main()
{
    std::string N;
    int number;
    while (1)
    {
        char *end = NULL;
        std::cout << "how many zombies? ";
        getline(std::cin, N);
        if (std::cin.eof())
            exit(0);
        number = std::strtol(N.c_str(), &end, 10);
        if (*end != '\0' || number < 0)
        {
            std::cout << "wrong input\n";
            continue ;
        }
        ZombieHorde zombies(number);
        zombies.announce();
    }
    return (0);
}