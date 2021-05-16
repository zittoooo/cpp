#ifndef SUPER_TRAP_HPP
# define SUPER_TRAP_HPP
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
class SuperTrap : public FragTrap, public NinjaTrap{
private:

public:
    SuperTrap(std::string name);
    ~SuperTrap();
};

#endif