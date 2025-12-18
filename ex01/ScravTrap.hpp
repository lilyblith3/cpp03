
#ifndef SCRAVTRAP_HPP
#define SCRAVTRAP_HPP
#include "../ex00/ClapTrap.hpp"

class ScravTrap : public ClapTrap
{
          public:
                    ScravTrap(std::string& tName);
                    void guardGate();
                    void attack(const std::string& target);
                    ~ScravTrap();

};

#endif

