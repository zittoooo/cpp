#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
}
PresidentialPardonForm::PresidentialPardonForm(std::string target)
: Form("PresidentialPardonForm", 25 ,5), target(target)
{

}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& form)
: Form(form), target(form.target)
{

}
PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm& PresidentialPardonForm::operator= (const PresidentialPardonForm& form)
{
    Form::operator=(form);
    return (*this);
}

std::string PresidentialPardonForm::getTarget() const
{
    return (target);
}

void PresidentialPardonForm::action() const
{
    std::cout << "<" << getTarget() << "> " << " has been pardoned by Zafod Beeblebrox\n"; 
}
