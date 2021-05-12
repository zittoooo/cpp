#include "FragTrap.hpp"

int main()
{
    FragTrap jiholee("jiholee");
    jiholee.rangedAttack("zombie");
    jiholee.meleeAttack("zombie");
    jiholee.takeDamage(600);
    jiholee.beRepaired(500);
    jiholee.takeDamage(50);
    jiholee.vaulthunter_dot_exe("zombie");
}