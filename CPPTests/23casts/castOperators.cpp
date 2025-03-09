#include <iostream>

class	Foo {
private:
	float	_v;

public:
	Foo( float const v ) : _v( v ) {}

	float	getV( void )	{ return this->_v; }

	operator	float()		{ return this->_v; }
	operator	int()		{ return static_cast<int>( this->_v ); }
};


int	main( void ) {
	Foo		a( 420.024f );
	float	b = a;
	int		c =	a;

	std::cout << a.getV() << std::endl;		//output: 420.024
	std::cout << b << std::endl;			//output: 420.024
	std::cout << c << std::endl;			//output: 420

	return 0;
}
