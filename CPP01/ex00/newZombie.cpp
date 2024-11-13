#include "Zombie.hpp"
#include <iostream>

Zombie*	newZombie( std::string name ) {
	Zombie*	newZ = new Zombie(name);
	std::cout << "new '" << name << "' created" << std::endl;
	return newZ;
}
