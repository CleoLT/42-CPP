#include <iostream>
#include "Sample.hpp"

Sample::Sample( void ) {
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample( void ) {
	std::cout << "destructor called" << std::endl;
	return;
}

void	Sample::bar( char const c ) const {
	std::cout << "bar called with char overload: " << c << std::endl;
	return;
}

void	Sample::bar( int const n ) const {
	std::cout << "bar called with int overload: " << n << std::endl;
	return;
}

void	Sample::bar( double const z ) const {
	std::cout << "bar called with float overload: " << z << std::endl;
	return;
}

void	Sample::bar( Sample const & i ) const {
	( void ) i;
	std::cout << "bar called with Sample overload" << std::endl;
	return;
}
