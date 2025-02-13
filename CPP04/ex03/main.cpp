/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:44:37 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/13 17:17:38 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include <iostream>

int	main( void ) {
	
	const Ice*		ice1 = new Ice();
	AMateria*	ice2 = new Ice( *ice1 );
	std::cout << ice1->getType() << " " << ice2->getType() << std::endl;
	delete ice1;

	std::cout << std::endl;

	const Cure*		cure1 = new Cure();
	AMateria*	cure2 = new Cure( *cure1 );
	std::cout << cure1->getType() << " " << cure2->getType() << std::endl;
	delete cure1;

	std::cout << std::endl;
	
	Character*	koko = new Character( "koko" );
	koko->equip( ice2 );
	koko->equip( cure2 );
	koko->equip( new Cure() );
	koko->equip( new Ice() );
	
	std::cout << std::endl;

	ICharacter*	kiki = new Character( *koko );
	
	std::cout << std::endl;

	delete koko;
	delete kiki;



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
