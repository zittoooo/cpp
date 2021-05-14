#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap{
private:

public:
    NinjaTrap(std::string name);
    ~NinjaTrap();
    void ninjaShoebox(FragTrap & Frag);
    void ninjaShoebox(ScavTrap & Scav);
    void ninjaShoebox(NinjaTrap & ninja);
};

#endif