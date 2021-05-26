#include "Bureaucrat.hpp"
#include "Ui.hpp"
#include <iostream>

int main()
{
    while (1)
    {
        try
        {
            Bureaucrat jim("jim", Ui::readInt("jim grade"));
            Form form(Ui::readStr("Document name"), Ui::readInt("Sign grade"), Ui::readInt("Exe grade"));
            jim.signForm(form);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            break ;
        }
    }
    return (0);
}