#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP
# include <string>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
 private:
    AMateria * inventory[4];
    int size;
 public:
    MateriaSource();
    MateriaSource(const MateriaSource& materiaSource);
    ~MateriaSource();
    MateriaSource& operator = (const MateriaSource& materiaSource);
    void learnMateria(AMateria* materia);
    AMateria* createMateria(std::string const & type);
};

#endif