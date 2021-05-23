#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>

class GradeTooHighException;
class GradeTooLowException;

class Bureaucrat
{
 private:
    std::string name;
    int grade;
    class GradeTooHighException : public std::exception
    {

    };
    class GradeTooLowException : public std::exception
    {

    };

 public:
    Bureaucrat();
    Bureaucrat(Bureaucrat & bureaucrat);
    Bureaucrat(std::string name, int grade);
    ~Bureaucrat();
    
    Bureaucrat& operator = (Bureaucrat const & bureaucrat);

    std::string const getName();
    int const getGrade();
    void incrementGrade();
    void decrementGrade();
};

#endif