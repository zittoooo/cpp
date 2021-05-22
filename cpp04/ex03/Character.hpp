#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <string>
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
 private:
    Character();
    std::string name;
    AMateria * inventory[4];
 public:
    Character(const Character & character);
    Character(std::string name);
    ~Character();
    Character& operator = (const Character & character);
    std::string const & getName() const;
    void equip(AMateria * materia);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};
#endif