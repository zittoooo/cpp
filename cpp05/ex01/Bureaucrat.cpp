#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}
Bureaucrat::Bureaucrat(Bureaucrat & bureaucrat)
{
    *this = bureaucrat;
}
Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    this->grade = grade;
}
Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator = (Bureaucrat const & bureaucrat)
{
    grade = bureaucrat.grade;
    return (*this);
}

std::string Bureaucrat::getName() const
{
    return (name);
}

int Bureaucrat::getGrade() const
{
    return (grade);
}

void Bureaucrat::incrementGrade()
{
    if (grade == 1)
        throw GradeTooHighException();
    grade -= 1;
}

void Bureaucrat::decrementGrade()
{
    if (grade == 150)
        throw GradeTooLowException();
    grade += 1;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Too high grade\n");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Too low grade\n");
}

void Bureaucrat::signForm(Form& form)
{
    try
    {
        form.beSigned(*this);
    }
    catch(const std::exception& e)
    {
        std::cout << "<" << getName() << "> cannot Signed " << form.getName()<< " because " << e.what() << "\n";
        return ;
    }
    std::cout << "<" << getName() << "> Signed " << form.getName()<< "\n\n";
}

std::ostream& operator << (std::ostream& stm, const Bureaucrat& b)
{
    std::cout << "<" << b.getName() << "> , bureaucrat grade <" << b.getGrade() << ">.\n";
    return (stm);
}
