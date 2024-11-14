#include "Class.hpp"
#include <iostream>

Sample::Sample( void ) : foo( 0 ) {
	std::cout << "Constructor called" << std::endl;
}

Sample::~Sample( void ) {
	std::cout << "Destructor called" << std::endl;
}

void	Sample::bar( void ) const {
	std::cout << "Member function called" << std::endl;
}
