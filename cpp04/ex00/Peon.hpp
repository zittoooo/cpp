#ifndef PEON_HPP
#define PEON_HPP
#include "Victim.hpp"
#include <iostream>

class Peon : public Victim {
 public:
  Peon(void);
  Peon(const Peon& peon);
  Peon(std::string name);
  virtual ~Peon(void);
  Peon& operator = (const Peon& peon);
  void getPolymorphed() const;
};

#endif
