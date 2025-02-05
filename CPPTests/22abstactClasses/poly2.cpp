#include <iostream>
#include <string>

class	ACharacter {
private:
	std::string		name;

public:
	virtual void	attack( std::string const & target ) = 0;
	void			sayHello( std::string const & target );
};

class	Warrior : public ACharacter {
public :
	virtual void attack( std::string const & target );
};

void	ACharacter::sayHello( std::string const & target ) {
	std::cout << "Hello " << target << "!" << std::endl;
}

void	Warrior::attack( std::string const & target ) {
	std::cout << "Attacks " << target << "!" << std::endl;
}

int	main( void ) {
	ACharacter*		a = new Warrior();
	//Acharacter*	b = new ACharacter(); do not compile porque abstract

	a->sayHello( "student" );
	a->attack( "Dobby" );
}


