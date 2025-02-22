/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:44:37 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/22 16:32:51 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int	main( void ) {
	
	const Ice*		ice1 = new Ice();
	AMateria*		ice2 = new Ice( *ice1 );
	std::cout << ice1->getType() << " " << ice2->getType() << std::endl;
	delete ice1;

	std::cout << std::endl;

	const Cure*		cure1 = new Cure();
	AMateria*		cure2 = new Cure( *cure1 );
	std::cout << cure1->getType() << " " << cure2->getType() << std::endl;
	delete cure1;

	std::cout << std::endl;
	

	Character*	koko = new Character( "koko" );
	koko->equip( NULL );
	koko->equip( ice2 );
	koko->equip( new Ice() );
	koko->equip( cure2 );
	koko->equip( new Cure() );

	std::cout << std::endl;


	ICharacter*	kiki = new Character( *koko );

	std::cout << std::endl;


	ICharacter*	paco = new Character( "Paco" );
	paco->use( 2, *kiki );
	kiki->use( 4, *paco );
	kiki->use( 0, *paco );
	kiki->use( 0, *paco );
	kiki->use( 1, *paco );
	AMateria*	tmp = kiki->getAddress( 2 );
	kiki->unequip( 2 );
	kiki->use( 2, *paco );
	kiki->use( 3, *paco );

	std::cout << std::endl;


	delete tmp;
	delete koko;
	delete kiki;
	delete paco;

	std::cout << std::endl;
	std::cout << std::endl;

	IMateriaSource*	src = new MateriaSource();
	src->learnMateria( new Ice() );
	src->learnMateria( new Cure() );

	ICharacter*	me = new Character( "me" );

	AMateria*	tmp1;
	tmp1 = src->createMateria( "ice" );
	me->equip(tmp1);
	tmp1 = src->createMateria( "cure" );
	me->equip(tmp1);

	ICharacter*	bob = new Character( "bob" );
	
	std::cout << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl;
	

	delete bob;
	delete me;
	delete src;

	return 0;
}
