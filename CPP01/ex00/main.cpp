#include "Zombie.hpp"

Zombie*	newZombie( std::string name );

void	randomChump( std::string name );

int	main( void ) {
	Zombie*	zom1 = newZombie("zomzom1");
	zom1->announce();
	randomChump("zom2");
	delete zom1;
	return 0;
}
