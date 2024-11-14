#include <iostream>
#include "class.hpp"

Sample::Sample(void) {
	
	std::cout << "constructor called" << std::endl;
	this->foo = 42;
	std::cout << "this->foo: " << this->foo << std::endl;
	this->bar();
	return;
}

Sample::~Sample(void) {

	std::cout << "destructor called" << std::endl;
	return;
}

void	Sample::bar(void) {

	std::cout << "Member function bar called" << std::endl;
	return;
}
