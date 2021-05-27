#include <iostream>
#include "Form.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"

#include "Ui.hpp"

int main()
{
  srand(time(0));
  Ui::setTextColor(Ui::green);

  Intern intern;
  const char* formList = "presidential pardon\n"
                         "robotomy request\n"
                         "shrubbery creation\n";
  Form* form = intern.makeForm(Ui::readStr(formList), Ui::readStr("target"));
  if (!form)
    return 1;

  Bureaucrat br("jiholee", 1);
  br.signForm(*form);
  br.executeForm(*form);
  return 0;
}