#include "Zombie.hpp"
#include <iostream>

void	randomChump( std::string name ) {
	Zombie newZ = Zombie(name);
	std::cout << "new '" << name << "' created" << std::endl;
	newZ.announce();
}
