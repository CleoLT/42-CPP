#include <iostream>
#include "class.hpp"

int	main() {
	
	Sample instance;

	instance.foo = 11;
	std::cout << "instance.foo: " << instance.foo << std::endl;
	instance.bar();

	return 0;
}
