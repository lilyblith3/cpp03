#include "ScravTrap.hpp"

int main()
{
          std::string name1 = "CL4P-TP";
          ClapTrap claptrap(name1);
          claptrap.attack("Bandit");
          claptrap.takeDamage(5);
          claptrap.beRepaired(3);
          std::cout << "------------------------" << std::endl;
          std::string name2 = "SC4V-TP";
          ScravTrap scavtrap(name2);
          scavtrap.attack("Psycho");
          scavtrap.takeDamage(20);
          scavtrap.beRepaired(10);
          scavtrap.guardGate();
          return 0;
}