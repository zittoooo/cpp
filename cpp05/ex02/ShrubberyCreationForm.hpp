#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP
# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
private:
    ShrubberyCreationForm();
    const std::string target;
    class FileCannotOpenException : public std::exception
    {
        const char * what() const throw();
    };
public:
    ShrubberyCreationForm(const std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm& form);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm& operator= (const ShrubberyCreationForm& shrubbery);

    std::string getTarget() const;
    void action() const;
};



#endif