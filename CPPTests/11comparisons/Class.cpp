#include "class.hpp"

Sample::Sample( int v ) {
	this->_foo = v;
}

Sample::~Sample( void ) {
}

int Sample::getFoo( void ) const {
	return this->_foo;
}

int Sample::compare( Sample *other ) const {
	if ( this->_foo < other->getFoo() )
		return -1;
	else if ( this->_foo > other->getFoo() )
		return 1;
	else
		return 0;
}
