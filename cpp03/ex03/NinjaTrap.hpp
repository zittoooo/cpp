#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap{
private:

public:
    NinjaTrap(std::string name);
    ~NinjaTrap();
    void ninjaShoebox(std::string const & target);
};

#endif