#include <iostream>

class	A {};
class	B {};

class	C {
public:
				C( A const & _ ) { return; }
	explicit	C( B const & _ ) { return; }
};

void	f( C const & _ ) { return; }

int	main( void ) {
	f( A() );	//implicit conversion OK
//	f( B() );	//implicit conversion NOT OK -> constructor is explicit, no compila
	C	instance = C( B() ); // explicit conversion con explicit constructor
	f( instance );

	return 0;
}
