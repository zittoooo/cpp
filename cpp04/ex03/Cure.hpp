#ifndef CURE_HPP
# define CURE_HPP
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
 private:
    std::string type;
 public:
    Cure();
    Cure(const Cure & cure);
    ~Cure();
    Cure & operator= (const Cure & cure);

    std::string const & getType() const;
    unsigned int getXP() const;
    AMateria* clone() const;
    void attackMsg(ICharacter & target) const;
};

#endif