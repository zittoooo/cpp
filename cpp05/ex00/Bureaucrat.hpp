#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <iostream>

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

    std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
};

std::ostream& operator<< (std::ostream& stm, const Bureaucrat& bureaucrat);
#endif