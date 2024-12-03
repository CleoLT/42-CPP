#include "Sample.hpp"

int	main( void ) {
	Sample sp;
	sp.bar('a');
	sp.bar(42);
	sp.bar(3.14);
	sp.bar(sp);
	return 0;
}
