# include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern& intern)
{
    (void)(intern);
}

Intern::~Intern()
{
}

Intern& Intern::operator=(const Intern& intern)
{
    (void) intern;
    return (*this);
}


Form* Intern::makeShrubberyCreationForm(std::string target) const
{
    return (new ShrubberyCreationForm(target));
}

Form* Intern::makeRobotomyRequestForm(std::string target) const
{
    return (new RobotomyRequestForm(target));
}

Form* Intern::makePresidentialPardonForm(std::string target) const
{
    return (new PresidentialPardonForm(target));
}

Form* Intern::makeForm(std::string name, std::string target) const
{
    std::string formName[3] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };

    Form* (Intern::* formFunc[3])(std::string target) const = {
        &Intern::makeShrubberyCreationForm,
        &Intern::makeRobotomyRequestForm,
        &Intern::makePresidentialPardonForm
    };

    for (int i = 0; i < 3 ; i++)
    {
        if (name.compare(formName[i]) == 0)
        {
            std::cout << "Intern creates <" << formName[i] << ">\n";
            return ((this->*formFunc[i])(target));
        }
    }
    std::cout << "no such Form\n";
    return (0);
}