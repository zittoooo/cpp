#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include "Ui.hpp"
#include <time.h>

void testPresidentialPardonForm()
{
  Bureaucrat br("jiholee", Ui::readInt("Bureaucrat grade"));
  std::cout << br;
  PresidentialPardonForm ppf(Ui::readStr("Form target"));
  std::cout << ppf;

  if (Ui::readStr("sign the Form?(y or n)").compare("y") == 0)
    ppf.beSigned(br);

  Ui::colorPrint("\nexcutes form\n");
  br.executeForm(ppf);
}

void testRobotomyRequestForm()
{
  // RobotomyRequestForm required grade
  // sign: 72
  // exec: 45
  Bureaucrat br("jiholee", Ui::readInt("Bureaucrat grade"));
  std::cout << br;
  RobotomyRequestForm rrf(Ui::readStr("Form target"));
  std::cout << rrf;

  if (Ui::readStr("sign the Form?(y or n)").compare("y") == 0)
    rrf.beSigned(br);

  Ui::colorPrint("\nexcutes form\n");
  br.executeForm(rrf);
}

void testShrubberyCreationForm()
{
  // RobotomyRequestForm required grade
  // sign: 145
  // exec: 137
  Bureaucrat br("jiholee", Ui::readInt("Bureaucrat grade"));
  std::cout << br;
  ShrubberyCreationForm scf(Ui::readStr("Form target"));
  std::cout << scf;

  if (Ui::readStr("sign the Form?(y or n)").compare("y") == 0)
    scf.beSigned(br);

  Ui::colorPrint("\nexcutes form\n");
  br.executeForm(scf);
}

int main(int argc, char** argv)
{
  Ui::setTextColor(Ui::green);

  if (argc != 2)
    return 1;

  int testCase = argv[1][0] - '0';
  try
  {
    if (testCase == 0) testPresidentialPardonForm();
    if (testCase == 1) testRobotomyRequestForm();
    if (testCase == 2) testShrubberyCreationForm();
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
  return 0;
}