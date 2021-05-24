#include "Bureaucrat.hpp"
#include "Ui.hpp"
#include <iostream>

int main()
{
    while (1)
    {
        try
        {
            Bureaucrat jim("jim", Ui::readInt("grade"));
            std::string operate = Ui::readStr("+ or -");
            if (operate.compare("+") == 0) jim.incrementGrade();
            if (operate.compare("-") == 0) jim.decrementGrade();
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            break ;
        }
    }
    return (0);
}