#ifndef AWEAPON_HPP
#define AWEAPON_HPP
#include "Enemy.hpp"
#include <string>

class AWeapon {
 protected:
  std::string name;
  int apcost;
  int damage;
 public:
  AWeapon(void);
  AWeapon(std::string const & name, int apcost, int damage);
  AWeapon(const AWeapon& aWeapon);
  virtual ~AWeapon(void);
  std::string const getName() const;
  int getAPCost() const;
  int getDamage() const;
  virtual void attack() const = 0;

  AWeapon& operator = (const AWeapon& aWeapon);
};

#endif
