#include <iostream>
#include "class.hpp"

int	main(void) {

	Sample	instance;

	instance.setFoo(4577);
	std::cout << "instance.setFoo(4577)" << std::endl;
	std::cout << "instance.getFoo() = " << instance.getFoo() << std::endl;
	instance.setFoo(9);
	std::cout << "instance.setFoo(9)" << std::endl;
	std::cout << "instance.getFoo() = " << instance.getFoo() << std::endl;

	return 0;
}
