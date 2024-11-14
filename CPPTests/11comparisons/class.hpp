#ifndef CLASS_H
# define CLASS_H

class	Sample {
	public:
		Sample( int v );
		~Sample( void );

		int	getFoo( void ) const;
		int	compare( Sample *other ) const;

	private:
		int	_foo;
};

#endif
