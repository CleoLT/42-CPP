/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:44:37 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/08 14:48:11 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

int	main( void ) {
	
	const Ice*		ice1 = new Ice();
	const AMateria*	ice2 = new Ice( *ice1 );
	std::cout << ice1->getType() << " " << ice2->getType() << std::endl;
	delete ice1;
	delete ice2;

	std::cout << std::endl;

	const Cure*		cure1 = new Cure();
	const AMateria*	cure2 = new Cure( *cure1 );
	std::cout << cure1->getType() << " " << cure2->getType() << std::endl;
	delete cure1;
	delete cure2;

//HACER TODOS LOS TESTS DE CHARACTER!!



/*	IMateriaSource*	src = new MateriaSource();
	src->learnMateria( new Ice() );
	src->learnMateria( new Cure() );

	ICharacter*	me = new Character( "me" );

	AMateria* tmp;
	tmp = src->createMateria( "ice" );
	me->equip(tmp);
	tmp = src->createMateria( "cure" );
	me->equip(tmp);

	ICharacter*	bob = new Character( "bob" );
	
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
*/
	return 0;
}
