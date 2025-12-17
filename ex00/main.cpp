#include "ClapTrap.hpp"

int main()
{
          std::string name = "CL4P-TP";
          ClapTrap clapTrap(name);
          
          clapTrap.attack("Target1");
          clapTrap.takeDamage(5);
          clapTrap.beRepaired(3);
          clapTrap.takeDamage(10);
          clapTrap.beRepaired(2);
          clapTrap.attack("Target2");
          
          return 0;
}