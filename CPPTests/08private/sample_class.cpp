#include <iostream>
#include "sample_class.hpp"

Sample::Sample(void) {

	std::cout << "consructor called" << std::endl;

	this->publicFoo = 0;
	std::cout << "this->publicFoo = " << this->publicFoo << std::endl;
	this->_privateFoo = 0;
	std::cout << "this_privateFoo = " << this->_privateFoo << std::endl;

	this->publicBar();
	this->_privateBar();

	return;
}

Sample::~Sample(void) {

	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample::publicBar(void) const {

	std::cout << "Member function publicBar called" << std::endl;
	return;
}

void	Sample::_privateBar(void) const {

	std::cout << "Member function _privateBar called" << std::endl;
}
