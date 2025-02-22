/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 19:33:20 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/22 16:18:16 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource( void ) {
	for ( int i = 0; i < 4; i++ )
		inventory[i] = NULL;
	std::cout << "Default Materia Source created" << std::endl;
	return;
}

MateriaSource::MateriaSource( MateriaSource const & src ) {
	*this = src;
	std::cout << "Materia Source copy created" << std::endl;
	return;
}

MateriaSource::~MateriaSource( void ) {
	for( int i = 0; i < 4; i++ ) 
		if( inventory[i] ) {
			delete inventory[i];
			inventory[i] = NULL;
		}
	std::cout << "Materia Source destroyed" << std::endl;
	return;
}

MateriaSource &	MateriaSource::operator=( MateriaSource const & rhs ) {
	if( this != &rhs ) {
		for( int i = 0; i < 4; i++ ) 
			if( this->inventory[i] ) {
				delete this->inventory[i];
				this->inventory[i] = NULL;
			}
		for( int i = 0; i < 4; i++ ) 
			if( rhs.inventory[i] )
				this->inventory[i] = rhs.inventory[i]->clone();
	}
	std::cout << "Materia Source assignment operator called" << std::endl;
	return *this;
}

void	MateriaSource::learnMateria( AMateria* m ) {
	for( int i = 0; i < 4; i++ ) {
		if ( !this->inventory[i] ) {
			this->inventory[i] = m;
			return;
		}
	}
	return;
}

AMateria*	MateriaSource::createMateria( std::string const & type ) {
	for( int i = 0; i < 4; i++ )
		if ( this->inventory[i] && this->inventory[i]->getType() == type )
			return this->inventory[i]->clone();
	return 0;
}
