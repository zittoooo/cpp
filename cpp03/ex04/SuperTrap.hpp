#ifndef SUPER_TRAP_HPP
# define SUPER_TRAP_HPP
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
class SuperTrap : public FragTrap, public NinjaTrap{
private:

public:
    SuperTrap();
    SuperTrap(const SuperTrap& super);
    SuperTrap(std::string name);
    SuperTrap& operator=(const SuperTrap& super);
    ~SuperTrap();
};

#endif