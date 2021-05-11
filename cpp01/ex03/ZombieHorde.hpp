#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class ZombieHorde
{
private:
    int N;
    Zombie *child;
public:
    ZombieHorde(int N);
    ~ZombieHorde();
    void announce();
};

#endif
