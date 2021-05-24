#include "Form.hpp"

Form::Form() : gradeSign(0), gradeExe(0), signedForm(0) {}
Form::Form(const Form& form) : name(form.name), gradeSign(0), gradeExe(0)
{
    *this = form;
}

Form::Form(std::string name, int grade, int gradeExe)
: name(name), gradeSign(grade), gradeExe(gradeExe) 
{
    
}

Form::~Form()
{
}

Form& Form::operator = (const Form& form)
{
    signedForm = form.signedForm;
    return (*this);
}

void Form::beSigned(Bureaucrat & bureaucrat)
{

}