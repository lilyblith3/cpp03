#include "ScravTrap.hpp"

ScravTrap::ScravTrap(std::string& tName) : ClapTrap(tName)
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScravTrap " << name << " has been created!" <<  std::endl;
}

ScravTrap::~ScravTrap()
{
    std::cout << "ScravTrap " << name << " has been destroyed!" << std::endl;
}

void ScravTrap::attack(const std::string& target) {
    std::cout << "ScravTrap " << name << " slashes " << target << " fiercely!" << std::endl;
}

void ScravTrap::guardGate()
{
      std::cout << "ScravTrap " << name << " is now in Gate Keeper mode." << std::endl;  
}