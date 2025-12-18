#include  "FragTrap.hpp"

FragTrap::FragTrap(std::string& tname) : ClapTrap(tname)
{
          hitPoints = 100;
          energyPoints = 100;
          attackDamage = 30;

          std::cout << "FragTrap " << name << " constructed" << std::endl;
}

FragTrap::~FragTrap()
{
          std::cout << "FragTrap " << name << " destructed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
          std::cout << "FragTrap " << name << " is requesting high fives!" << std::endl;
}