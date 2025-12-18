#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "../ex00/ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
          public:
                    FragTrap(std::string& name);
                    void highFivesGuys(void);
                    ~FragTrap();
                    
};

#endif