#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP
#include "Enemy.hpp"
#include <iostream>

class SuperMutant : public Enemy{
 public:
  SuperMutant(void);
  SuperMutant(const SuperMutant& superMutant);
  virtual ~SuperMutant(void);

  SuperMutant& operator = (const SuperMutant& superMutant);
  void takeDamage(int damage);
};

#endif
