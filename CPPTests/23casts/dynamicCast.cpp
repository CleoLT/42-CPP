#include <iostream>
#include <typeinfo>
#include <exception>

class	Parent { public: virtual ~Parent() {} };
class	Child1 : public Parent {};
class	Child2 : public Parent {};

int	main() {
	Child1		a;								//reference value
	Parent *	b = &a;							//implicit upcast -> OK

	Child1 *	c = dynamic_cast<Child1 *>(b);	//explicit downcast 
	if ( c == NULL ) 
		std::cout << "Conversion failed" << std::endl;
	else
		std::cout << "Conversion OK" << std::endl;

	
	try { //porque una referencia no puede estar igual a NNUL daria segf
		Child2 &	d = dynamic_cast<Child2 &>(*b); // explicit downcast
		//estamos convirtiendo un Child1 en Chil2 entonces no funciona
		std::cout << "Conversion OK" << std::endl;
	}
	catch( std::bad_cast &bc ) {
		std::cout << "Conversion failed: " << bc.what() << std::endl;
	}
	return 0;
}
