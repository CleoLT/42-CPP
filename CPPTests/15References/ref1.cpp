#include <iostream>

int main( void ) {
	int		number = 42;

	int*	nbPtr = &number;
	int&	nbRef = number;
//	int&	nbRef2;//ERROR una referencia se tiene que asignar cuando se declara

	std::cout << "number: " << number << " ptr: " << *nbPtr;
	std::cout << " ref: " << nbRef << std::endl;

	*nbPtr = 21;
	std::cout << "*nbPtr = 21, number: " << number << std::endl;
	nbRef = 84;
	std::cout << "nbRef = 84, number: " << number << std::endl;

	return 0;
}
