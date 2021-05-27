#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    PresidentialPardonForm();
    std::string target;
public:
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm& form);
    ~PresidentialPardonForm();
    PresidentialPardonForm& operator=(const PresidentialPardonForm& form);

    std::string getTarget() const;
    void action() const;
};

#endif