#ifndef CURE_HPP
# define CURE_HPP
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
 public:
    Cure();
    Cure(const Cure & cure);
    ~Cure();
    Cure& operator= (const Cure & cure);

    AMateria* clone() const;
    void attackMsg(ICharacter & target) const;
};

#endif