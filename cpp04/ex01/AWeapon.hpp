#ifndef AWEAPON_HPP
#define AWEAPON_HPP
#include <string>

class AWeapon {
 protected:
  const std::string name;
  const int apcost;
  const int damage;
 public:
  AWeapon(void);
  AWeapon(std::string const & name, int apcost, int damage);
  AWeapon(const AWeapon& aWeapon);
  virtual ~AWeapon(void);
  std::string virtual getName() const;
  int getAPCost() const;
  int getDamage() const;
  virtual void attack() const = 0;

  AWeapon& operator = (const AWeapon& aWeapon);
};

#endif
