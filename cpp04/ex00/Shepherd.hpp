#ifndef SHEPHERD_HPP
#define SHEPHERD_HPP
#include "Victim.hpp"

class Shepherd : public Victim{
 public:
  Shepherd(void);
  Shepherd(const Shepherd& shepherd);
  Shepherd(std::string name);
  virtual ~Shepherd(void);
  Shepherd& operator = (const Shepherd& shepherd);
  void getPolymorphed() const ;
};

#endif
