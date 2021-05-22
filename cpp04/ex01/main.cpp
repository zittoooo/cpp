#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "Enemy.hpp"
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PowerFist.hpp"

int main()
{
    Character *me = new Character("me");
    std::cout << *me;
    Enemy *b = new RadScorpion();
    AWeapon *pr = new PlasmaRifle();
    AWeapon *pf = new PowerFist();

    me->attack(b);
    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    if (b->getHP() <= 0)
        delete b;
    std::cout << *me;

    delete me;
    delete pr;
    delete pf;
    return 0;
}