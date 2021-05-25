#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void test()
{
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter *me = new Character("me");
    AMateria *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter *bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;
}

int main()
{
    test();

    std::cout << "\n----unknown----" << "\n";
    {
        IMateriaSource *src = new MateriaSource();
        src->learnMateria(new Ice());

        std::cout << "unknown type: " << src->createMateria("unknown") << "\n\n";
    }
    std::cout << "\n----character copy----" << "\n";
    {
        IMateriaSource *src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());

        Character *a = new Character("jim");
        Character *b = new Character("copy_jim");
        Character *enemy = new Character("bob");

        a->equip(src->createMateria("ice"));

        std::cout << b->getName() << "\n";
        *b = *a;
        delete a;

        std::cout << b->getName() << "\n";
        b->use(0, *enemy);

        delete src;
        delete enemy;
    }

    std::cout << "\n---unequip---\n";
    {
        Ice *ice = new Ice();
        Character *a = new Character("A");

        a->equip(ice);
        a->unequip(0);

        a->use(0, *a);
        std::cout << "ice XP : " << ice->getXP() << "\n";
        delete ice;
        delete a;
    }
    std::cout << "\n---materia xp---\n";
    {
        Ice *ice = new Ice();
        Character *a = new Character("A");

        std::cout << "Xp: " << ice->getXP() << "\n";

        a->equip(ice);
        a->use(0, *a);
        std::cout << "Xp: " << ice->getXP() << "\n";
        a->use(0, *a);
        std::cout << "Xp: " << ice->getXP() << "\n";

        delete a;
    }

    system("leaks ex03");
    return 0;
}
