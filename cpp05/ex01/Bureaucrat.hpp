#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>

class Form;
class GradeTooHighException;
class GradeTooLowException;

class Bureaucrat
{
 private:
    Bureaucrat();
    const std::string name;
    int grade;

    class GradeTooHighException : public std::exception
    {
       public:
         const char * what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
       public:
         const char *what() const throw();
    };

 public:
    Bureaucrat(Bureaucrat & bureaucrat);
    Bureaucrat(std::string name, int grade);
    ~Bureaucrat();
    
    Bureaucrat& operator = (Bureaucrat const & bureaucrat);

    std::string const getName();
    int const getGrade();
    void incrementGrade();
    void decrementGrade();
    void signForm(Form& form);
};

#endif