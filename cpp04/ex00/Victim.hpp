#ifndef VICTIM_HPP
#define VICTIM_HPP
#include <string>
#include <iostream>

class Victim {
 protected:
  std::string name;
 public:
  Victim(void);
  Victim(std::string name);
  Victim(const Victim& victim);
  virtual ~Victim(void);
  Victim& operator = (const Victim& victim);
  std::string getName() const;
  virtual void getPolymorphed() const;
};
  std::ostream& operator<<(std::ostream& stm, const Victim& victim);
#endif
