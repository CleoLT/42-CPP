#include <iostream>
#include <iomanip>

template< typename T, typename U >

class	Pair {
private:
	T const	_lhs;
	U const	_rhs;

	Pair< T, U >();

public:
	Pair< T, U >( T const & lhs, U const & rhs ) : _lhs( lhs ), _rhs( rhs ) {
		std::cout << "Generic Template" << std::endl;
	}
	~Pair< T, U >() {}

	T const &	first() const	{ return this->_lhs; }
	U const &	second() const	{ return this->_rhs; }
};


template< typename U >	// Partial Specialization
class	Pair< int, U > { 	
private:
	int		_lhs;
	U const	_rhs;

	Pair< int, U >();

public:
	Pair< int, U >( int lhs, U const & rhs ) : _lhs( lhs ), _rhs( rhs ) {
		std::cout << "Int parcial specialization" << std::endl;
	}
	~Pair< int, U >() {}

	int			first() const	{ return this->_lhs; }
	U const &	second() const	{ return this->_rhs; }
};


template<>		// Complete Specialization
class	Pair< bool, bool > { 
	private:
	int	_n;

	Pair< bool, bool >();

public:
	Pair< bool, bool >( bool lhs, bool rhs ) {
		std::cout << "bool/bool specialization" << std::endl;
		_n = 0;
		_n |= static_cast<int>(lhs) << 0;
		_n |= static_cast<int>(rhs) << 1;
	}
	~Pair< bool, bool >() {}

	bool	first() const	{ return ( this->_n & 0x01 ); }
	bool	second() const	{ return ( this->_n & 0x02 ); }
};


template< typename T, typename U >
std::ostream &	operator<<( std::ostream & o, Pair< T, U > const & p ) {
	o << "Pair( " << p.first() << ", " << p.second() << " )";
	return o;
}


std::ostream &	operator<<( std::ostream & o, Pair< bool, bool > const & p ) {
	o << std::boolalpha << "Pair( " << p.first() << ", " << p.second() << " )";
	return o;
}

