#include <iostream>

//T comme type
template< typename T >
T	max( T const & x, T const & y ) {
	return ( x >= y ? x : y );
}

int	foo( int x ) {
	std::cout << "Long computing time" << std::endl;
	return x;
}

int main( void ) {
	int	a = 21;
	int	b = 42;

	std::cout << "max of " << a << " and " << b << is;
	std::cout << max<int>( a, b ) << std::endl;//explicit instanciation
	std::cout << "max of " << a << " and " << b << is;
	std::cout << max( a, b ) << std::endl;//implicit instanciation


	float	c = 1.7f;
	float	d = 4.2f;
	std::cout << "max of " << c << " and " << d << is;
	std::cout << max<int>( c, d ) << std::endl;//explicit instanciation
	std::cout << "max of " << c << " and " << d << is;
	std::cout << max( c, d ) << std::endl;//implicit instanciation

	int ret = max<int>( foo(a), foo(b) );
	std::cout << "max of " << c << " and " << d << is;
	std::cout << ret << std::endl;

	return 0;
}


