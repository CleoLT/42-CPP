#include <iostream>
#include "class_list.hpp"

Sample2::Sample2(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3) {

	std::cout << "constructor2 called" << std::endl;
	std::cout << "this->a1 = " << this->a1 << std::endl;
	std::cout << "this->a2 = " << this->a2 << std::endl;
	std::cout << "this->a3 = " << this->a3 << std::endl;
}

Sample2::~Sample2(void) {

	std::cout << "Destructor2 called" << std::endl;
	return;
}
