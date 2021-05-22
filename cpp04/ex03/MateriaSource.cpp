#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    memset(inventory, 0, sizeof(inventory));
    size = 0;
}
MateriaSource::MateriaSource(const MateriaSource & materiaSource)
{
    for(int i = 0; i < size; i++)
    {
        if (materiaSource.inventory[i])
            this->inventory[i] = materiaSource.inventory[i]->clone();
        else
            this->inventory[i] = 0;
    }
    this->size = materiaSource.size;
}
MateriaSource::~MateriaSource()
{
    if (inventory)
        delete[] inventory;
}
MateriaSource& MateriaSource::operator = (const MateriaSource& materiaSource)
{
    if (inventory)
        delete[] inventory;
    for(int i = 0; i < size; i++)
    {
        if (materiaSource.inventory[i])
            this->inventory[i] = materiaSource.inventory[i]->clone();
        else
            this->inventory[i] = 0;
    }
    this->size = materiaSource.size;
    return (*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
    if (!materia)
        return ;
    if (size < 4)
    {
        inventory[size] = materia;
        size++;
    }
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < size; i++)
    {
        if (inventory[i]->getType().compare(type) == 0)
        {
            return (inventory[i]->clone());
        }
    }
    return (0);
}