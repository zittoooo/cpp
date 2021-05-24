#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP
#include "Enemy.hpp"
#include <iostream>

class RadScorpion : public Enemy{
 public:
  RadScorpion(void);
  RadScorpion(const RadScorpion& radScorpion);
  virtual ~RadScorpion(void);

  RadScorpion& operator = (const RadScorpion& radScorpion);
  void takeDamage(int damage);
};

#endif
