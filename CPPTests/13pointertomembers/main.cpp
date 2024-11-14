#include "Class.hpp"
#include <iostream>

int	main( void ) {
	Sample	instance;
	Sample	*instance_p = &instance;

	int		Sample::*p = NULL;
	void	(Sample::*f)( void ) const;

	p = &Sample::foo;

	std::cout << "initial value: foo = " << instance.foo << std::endl;
	instance.*p = 42;
	std::cout << "instance.*p = 42; foo = " << instance.foo << std::endl;
	instance_p->*p = 999;
	std::cout << "instance_p->*p = 999; foo = " << instance.foo << std::endl;

	f = &Sample::bar;

	(instance.*f)();
	(instance_p->*f)();
}
