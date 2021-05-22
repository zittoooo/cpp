#ifndef ICE_HPP
# define ICE_HPP
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria
{
 private:
    static std::string type;
 public:
    Ice();
    Ice(const Ice & ice);
    ~Ice();

    Ice & operater= (const Ice & ice);
    void attackMsg(ICharacter& target);
};

#endif