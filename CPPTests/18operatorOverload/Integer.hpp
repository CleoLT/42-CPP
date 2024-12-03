#ifndef INTEGER_HPP
#define INTEGER_HPP

#include <iostream>

class	Integer {
private:
	int	_n;

public:
	Integer( int const n );
	~Integer( void );

	int	getValue( void ) const;
	
	Integer &	operator=( Integer const & rhs ); //instance courrante modifiee
	Integer		operator+( Integer const & rhs) const;
};

std::ostream &	operator<<( std::ostream & o, Integer const & rhs );

#endif
