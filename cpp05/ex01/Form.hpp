#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"
# include <string>
# include <iostream>

class Bureaucrat;

class Form {
 private:
    Form();
    const std::string name;
    const int gradeSign;
    const int gradeExe;
    bool signedForm;

    class GradeTooHighException : public std::exception
    {
        const char * what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        const char * what() const throw();
    };

 public:
    Form(std::string name, int gradeSing, int gradeExe);
    Form(const Form& form);
    ~Form();

    std::string getName() const;
    int getGradeSign() const;
    int getGradeExe() const;
    bool getSignedForm() const;
    int& checkGrade(int &grade);

    Form & operator = (const Form& form);
    void beSigned(Bureaucrat & bureaucrat);

};

std::ostream& operator << (std::ostream& stm, const Form& form);

#endif