#include <string>
#include <iostream>

class	Character {
public:
	//void	sayHello( std::string const & target );
	virtual void	sayHello( std::string const & target );
};

class Warrior : public Character {
public:
	//void	sayHello( std::string const & target );
	virtual void	sayHello( std::string const & target );
};

void	Character::sayHello( std::string const & target ) {
	std::cout << "Hello " << target << "!" << std::endl;
}

void	Warrior::sayHello( std::string const & target ) {
	std::cout << "Mange tes morts " << target << "!" << std::endl;
}

int	main ( void ) {
	Warrior*	a = new Warrior();
	Character*	b = new Warrior();
	//Warrior*	c = new Character(); No compila. Un Character no es un Warrior

	a->sayHello( "student" );
	b->sayHello( "student" );
}
