#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie {
private:
	std::string	name;
public:
	Zombie( std::string str );
	~Zombie( void );
	
	void	announce( void );
};

#endif
