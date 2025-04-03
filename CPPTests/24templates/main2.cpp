#include <iostream>

template< typename T >

class	List { //template de classe
private:
	T *			_content;
	List<T> *	_next;

public:
	List<T>( T const & content ) {}
	List<T>( List<T> const & list ) {}
	~List<T>( void ) {}
};

int	main( void ) {
	List<int>			a( 42 );
	List<float>			b( 3.14f );
	List< List<int> >	c( a );
	
	return 0;
}

