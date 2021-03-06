#ifndef ICE_HPP
# define ICE_HPP
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria
{
 private:
   std::string type;
 public:
    Ice();
    Ice(const Ice & ice);
    ~Ice();
    Ice& operator = (const Ice& ice);

    AMateria* clone() const;
    void attackMsg(ICharacter& target) const;
};

#endif