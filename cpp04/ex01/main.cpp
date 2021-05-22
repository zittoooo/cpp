// #include "AWeapon.hpp"
// #include "PlasmaRifle.hpp"
// #include "Enemy.hpp"
// #include "Character.hpp"
// #include "RadScorpion.hpp"
// #include "PowerFist.hpp"

// int main()
// {
//     Character *me = new Character("me");
//     std::cout << *me;
//     Enemy *b = new RadScorpion();
//     AWeapon *pr = new PlasmaRifle();
//     AWeapon *pf = new PowerFist();

//     me->attack(b);
//     me->equip(pr);
//     std::cout << *me;
//     me->equip(pf);
//     me->attack(b);
//     std::cout << *me;
//     me->equip(pr);
//     std::cout << *me;
//     me->attack(b);
//     std::cout << *me;
//     me->attack(b);
//     if (b->getHP() <= 0)
//         delete b;
//     std::cout << *me;

//     delete me;
//     delete pr;
//     delete pf;
//     return 0;
// }

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

void testGivenMain(void) {
  Character* me = new Character("me");

  std::cout << *me;

  Enemy* b = new RadScorpion();

  AWeapon* pr = new PlasmaRifle();
  AWeapon* pf = new PowerFist();

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
  if (b->getHP() == 0)
    delete b;
  std::cout << *me;

  delete me;
  delete pr;
  delete pf;
}

void testExtendedMain(void) {
  Character* me = new Character("me");

  AWeapon* pr = new PlasmaRifle();
  me->equip(pr);

  Enemy** enemies = new Enemy*[2];
  enemies[0] = new SuperMutant();
  enemies[1] = new RadScorpion();
  int i = 0;
  while (i < 2) {
    if (me->getAP() < me->getWeapon()->getAPCost())
      me->recoverAP();
    me->attack(enemies[i]);
    std::cout << me->getName() << "AP :" << me->getAP() << ", "
              << enemies[i]->getType()
              << " HP: " << enemies[i]->getHP() << "\n\n";
    if (enemies[i]->getHP() > 0)
      continue;
    delete enemies[i++];
  }
  delete me;
  delete pr;
  delete[] enemies;
}

int main(int argc, char **argv)
{
  if (argc != 2)
    return 1;
  if (argv[1][0] == '0')
    testGivenMain();
  if (argv[1][0] == '1')
    testExtendedMain();
  return 0;
}