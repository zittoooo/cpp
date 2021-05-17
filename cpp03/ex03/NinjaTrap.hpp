#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap{
private:

public:
    NinjaTrap();
    NinjaTrap(std::string name);
    NinjaTrap(const NinjaTrap & ninja);
    ~NinjaTrap();
    NinjaTrap& operator=(const NinjaTrap & ninja);
    void ninjaShoebox(FragTrap & Frag);
    void ninjaShoebox(ScavTrap & Scav);
    void ninjaShoebox(NinjaTrap & ninja);
};

#endif