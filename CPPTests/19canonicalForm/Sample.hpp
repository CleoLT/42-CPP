#ifndef	SAMPLE_HPP
#define	SAMPEL_HPP

#include <iostream>

class	Sample {
private:
	int	_foo;

public:
	Sample( void );		//constructeur par default	//canonical
	Sample( int const n );
	Sample( Sample const & src );//constructeur par copie//canonical
	~Sample( void );								//canonical añadir 'virtual'

	Sample &	operator=( Sample const & rhs );	//canonical//mise a jour de 															l'instance courrante
	int			getFoo( void ) const;
	//fonction membre pour avoir la class sous forme de string pour les debugs
};

std::ostream &	operator<<( std::ostream & o, Sample const & i );

#endif
