#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string& tName)
{
    name = tName;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
    std::cout << "ClapTrap " << name << " has been created!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " has been destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (hitPoints == 0)
    {
        std::cout << "ClapTrap " << name << " cannot attack " << target << " because it has 0 hit points!" << std::endl;
        return;
    }
    else if (energyPoints == 0)
    {
        std::cout << "ClapTrap " << name << " cannot attack " << target << " because it has 0 energy points!" << std::endl;
        return;
    }
    energyPoints -= 1;
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
          if (hitPoints == 0)
          {
                    std::cout << "ClapTrap " << name <<  " is aleady destroyed.";
                    return;
          }   
          hitPoints -= amount;   
          std::cout << "ClapTrap " << name << " takes " << amount << " points of damage! Remaining HP: " << hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
          if (hitPoints == 0)
          {
                    std::cout << "ClapTrap " << name <<  " is aleady destroyed.";
                    return;
          }
          else if (energyPoints == 0)
          {
                    std::cout << "ClapTrap " << name << " cannot be repaired because it has 0 energy points!" << std::endl;
                    return;
          }
          energyPoints -= 1;
          hitPoints += amount;
          std::cout << "ClapTrap " << name << " is repaired by " << amount << " points! Current HP: " << hitPoints << std::endl;
}

