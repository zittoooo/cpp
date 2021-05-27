#ifndef INTERN_HPP
# define INTERN_HPP
# include <string>
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern{
 private:

 public:
    Intern();
    Intern(const Intern& intern);
    ~Intern();
    Intern& operator=(const Intern& intern);

    Form* makeShrubberyCreationForm(std::string target) const;
    Form* makeRobotomyRequestForm(std::string target) const;
    Form* makePresidentialPardonForm(std::string target) const;
    Form* makeForm(std::string name, std::string target) const;
};


#endif