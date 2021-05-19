#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <string>
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {
 private:
  Character(void);
  std::string name;
  int AP;
  AWeapon* weapon;
 public:
  Character(std::string const & name);
  Character(const Character& character);
  virtual ~Character(void);
  Character& operator = (const Character& character);

  void recoverAP();
  void equip(AWeapon *weapon);
  void attack(Enemy* enemy);
  std::string const& getName() const;
};

std::ostream& operator << (std::ostream& stm, const Character& character);
#endif
