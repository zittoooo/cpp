#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap{
private:

public:
    NinjaTrap();
    NinjaTrap(std::string name);
    ~NinjaTrap();
    NinjaTrap& operator=(const NinjaTrap & ninja);
    void ninjaShoebox(FragTrap & Frag);
    void ninjaShoebox(ScavTrap & Scav);
    void ninjaShoebox(NinjaTrap & ninja);
};

#endif