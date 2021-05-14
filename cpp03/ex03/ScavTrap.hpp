#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
private:

public:
    ~ScavTrap();
    ScavTrap(std::string name);
    void challengeNewcomer(std::string const & target);
};
#endif
