#ifndef CURE_HPP
# define CURE_HPP
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
 private:

 public:
    Cure();
    Cure(const Cure & cure);
    ~Cure();

    Cure & operater= (const Cure & cure);
    void attackMsg(ICharacter & target);
};

#endif