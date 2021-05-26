#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    RobotomyRequestForm();
    const std::string target;
public:
    RobotomyRequestForm(const std::string target);
    RobotomyRequestForm(const RobotomyRequestForm& form);
    ~RobotomyRequestForm();
    RobotomyRequestForm& operator= (const RobotomyRequestForm& form);

    std::string getTarget() const;
    void action() const;
};

#endif