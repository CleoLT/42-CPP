#include <iostream>
#include "sample_class.hpp"

int	main() {

	Sample	instance;

	instance.publicFoo = 42;
	std::cout << "instance.publicFoo = " << instance.publicFoo << std::endl;
	//instance._privateFoo = 33;
	//std::cout << "instance._privateFoo = " << std::endl;

	instance.publicBar();
	//instance._privateBar();

	return 0;
}
