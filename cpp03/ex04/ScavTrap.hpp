#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
private:

public:
    ScavTrap();
    ScavTrap(const ScavTrap & scav);
    ScavTrap(std::string name);
    ~ScavTrap();
    ScavTrap& operator=(const ScavTrap & scav);
    void challengeNewcomer(std::string const & target);
};
#endif
