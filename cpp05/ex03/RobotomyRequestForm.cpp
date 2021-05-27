#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
: Form("RobotomyRequestForm", 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& form)
: Form(form), target(form.target)
{
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator= (const RobotomyRequestForm& form)
{
    Form::operator=(form);
    return (*this);
}

std::string RobotomyRequestForm::getTarget() const
{
    return (target);
}


void RobotomyRequestForm::action() const
{
    std::cout << "drilling noises..\n";
    srand(time(0));
    int rd = rand() % 10;
    if (rd <= 4)
        std::cout << "<" << getTarget() << "> " << "has been successfully robotomized\n";
    else
        std::cout << "it’s a failure.\n";
}