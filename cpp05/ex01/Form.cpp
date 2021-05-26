#include "Form.hpp"

Form::Form() : gradeSign(0), gradeExe(0), signedForm(0) {}
Form::Form(const Form& form) : name(form.name), gradeSign(0), gradeExe(0)
{
    *this = form;
}

Form::Form(std::string name, int grade, int gradeExe)
: name(name), gradeSign(checkGrade(grade)), gradeExe(checkGrade(gradeExe)) 
{
}

Form::~Form()
{
}

const char * Form::GradeTooHighException::what() const throw()
{
    return ("Too High\n");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Too Low\n");
}

int& Form::checkGrade(int& grade)
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    return (grade);
}

std::string Form::getName() const
{
    return (name);
}

int Form::getGradeSign() const
{
    return (gradeSign);
}

int Form::getGradeExe() const
{
    return (gradeExe);
}

bool Form::getSignedForm() const
{
    return (signedForm);
}

Form& Form::operator = (const Form& form)
{
    signedForm = form.signedForm;
    return (*this);
}

void Form::beSigned(Bureaucrat & bureaucrat)
{
    if (bureaucrat.getGrade() <= gradeSign)
    {
        signedForm = true;
    }
    else
    {
        throw GradeTooLowException();
    }
}

std::ostream&operator << (std::ostream& stm, const Form& form)
{
    std::cout << "< " << form.getName();
    return (stm);
}