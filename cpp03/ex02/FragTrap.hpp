#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"


class FragTrap : public ClapTrap{
private:

public:
    FragTrap();
    FragTrap(const FragTrap & frag);
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap& operator=(const FragTrap& frag);
    void vaulthunter_dot_exe(std::string const & target);
};

#endif