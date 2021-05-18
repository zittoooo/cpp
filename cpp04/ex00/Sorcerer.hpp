#ifndef SORCERER_HPP
#define SORCERER_HPP
#include "Victim.hpp"
#include <string>

class Sorcerer {
  private:
   Sorcerer(void);
   std::string name;
   std::string title;
 public:
  Sorcerer(std::string name, std::string title);
  Sorcerer(const Sorcerer& sorcerer);
  virtual ~Sorcerer(void);
  Sorcerer& operator = (const Sorcerer& sorcerer);
  std::string getName() const;
  std::string getTitle() const;
  void polymorph(Victim const &victim) const;
};
std::ostream& operator<<(std::ostream& stm, const Sorcerer& sorcerer);
#endif
