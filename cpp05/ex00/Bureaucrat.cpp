#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}
Bureaucrat::Bureaucrat(Bureaucrat & bureaucrat)
{
    *this = bureaucrat;
}
Bureaucrat::Bureaucrat(std::string name, int grade)
{

}

Bureaucrat& Bureaucrat::operator = (Bureaucrat const & bureaucrat)
{
    name = bureaucrat.name;
    grade = bureaucrat.grade;
    return (*this);
}

std::string const Bureaucrat::getName()
{
    return (name);
}

int const Bureaucrat::getGrade()
{
    return (grade);
}

void Bureaucrat::incrementGrade()
{

}

void Bureaucrat::decrementGrade()
{

}