#ifndef A_MATERIA_HPP
# define A_MATERIA_HPP
# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria
{
 protected:
    AMateria();
    unsigned int _xp;
    std::string type;
 public:
    AMateria(std::string const & type);
    AMateria(const AMateria& materia);
    virtual ~AMateria();
    std::string const & getType() const; // Returns the materia type
    unsigned int getXP() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
    virtual void attackMsg(ICharacter& target) const = 0;
};
#endif