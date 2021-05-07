#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
# include <sstream>

class Brain {
private:
  std::string address;

public:
  Brain();
  ~Brain();
  std::string identify();
};

#endif
