#include <iostream>
#include <iomanip>

template< typename T = float > //float type por defecto, si No-especificado

class	Vertex { 
private:
	T const	_x;
	T const _y;
	T const	_z;

	Vertex( void );

public:
	Vertex( T const & x, T const & y, T const & z ) : _x( x ), _y( y ), _z( z )  {}
	~Vertex( void ) {}

	T const &	getX() const { return this->_x; }
	T const &	getY() const { return this->_y; }
	T const &	getZ() const { return this->_z; }
};

template< typename T >
std::ostream &	operator<<( std::ostream & o, Vertex<T> const & v ) {
	std::cout.precision( 1 );
	o << setiosflags( std::ios::fixed );
	o << "Vertex( ";
	o << v.getX() << ", ";
	o << v.getY() << ", ";
	o << v.getZ() << " )";

	return o;
}
