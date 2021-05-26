#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
: Form("shrubbery Form", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& form)
: Form(form), target(form.target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator= (const ShrubberyCreationForm& shrubbery)
{
  Form::operator=(shrubbery);
  return (*this);
}

std::string ShrubberyCreationForm::getTarget() const
{
    return (target);
}

const char * ShrubberyCreationForm::FileCannotOpenException::what() const throw()
{
  return ("file open fail\n");
}

void ShrubberyCreationForm::action() const
{
    const char * tree = "\
      /_-_\\\n\
    /~~   ~~\\\n\
/~~         ~~\\\n\
{               }\n\
\\  _-     -_  /\n\
  ~  \\ //  ~\n\
_- -   | | _- _\n\
  _ -  | |   -_\n\
      // \\";

    std::ofstream out(getTarget() + "_shrubbery");
    if (out.fail())
    {
      throw FileCannotOpenException();
    }
    out << tree;
}