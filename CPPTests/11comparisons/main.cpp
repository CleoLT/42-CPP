
#include "class.hpp"
#include <iostream>

int main( void ) {
	Sample	in1( 42 );
	Sample	in2( 42 );

	if ( &in1 == &in1 )
		std::cout << "in1 and in1 are physically equal" << std::endl;
	else
		std::cout << "in1 and in1 are not physically equal" << std::endl;

	if ( &in1 == &in2 )
		std::cout << "in1 and in2 are physically equal" << std::endl;
	else
		std::cout << "in1 and in2 are not physically equal" << std::endl;
	
	if ( in1.compare(&in1) == 0)
		std::cout << "in1 and in1 are structurally equal" << std::endl;
	else
		std::cout << "in1 and in1 are not structurally equal" << std::endl;

	if ( in1.compare(&in2) == 0)
		std::cout << "in1 and in2 are structurally equal" << std::endl;
	else
		std::cout << "in1 and in2 are not structurally equal" << std::endl;

	return 0;
}
