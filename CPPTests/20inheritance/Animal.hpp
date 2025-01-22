#include <string>

class	Animal {
private:
	int	_numberOflegs;

public:
	Animal( void );
	Animal( Animal const & src);
	Animal & operator=( Animal const & rhs);
	~Animal( void );

	void	run( int distance );
};

class	Cat : public Animal {
public:
	Cat( void );
	Cat( Cat const & src );
	Cat & operato=( Cat const & rhs );
	~Cat( void );

	void	scornSomeone( std:: string const & target );
}

class	Pony : public Animal {
public:
	Pony( void );
	Pony( Pony const & src );
	Pony & operator=( Pony const & rhs );
	~Pony( void );

	void	doMagic( std::string const & target );
	void	run( int distance ); // se puede reemplazar el metodo run() 
				//de la clase Animal, si tiene una manera especifica de correr 
}

class	Otter : public Animal {
public:
	Otter( void );
	Otter( Otter const & src );
	Otter & operato=( Otter const & rhs );
	~Otter( void );
}

