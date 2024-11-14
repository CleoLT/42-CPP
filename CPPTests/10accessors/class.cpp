#include <iostream>
#include "class.hpp"

Sample::Sample(void) {
	
	std::cout << "Constructor called" << std::endl;
	this->_Foo = 0;
	std::cout << "this->_Foo = " << this->_Foo << std::endl;
	
	return;
}

Sample::~Sample(void) {

	std::cout << "destructor called" << std::endl;
	return;
}

int Sample::getFoo(void) const {

	return this->_Foo;
}

void Sample::setFoo(int value) {

	this->_Foo = value;
	return;
}
