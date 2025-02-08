/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:55:21 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/08 14:46:08 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character( void ) : name( "default" ) {
	std::cout << "Default Character created" << std::endl;
	return;
}

Character::Character( std::string const & str ) : name( str ) {
	std::cout << name << " Character created" << std::endl;
	return;
}

Character::Character( Character const & src ) {
	*this = src;
	std::cout << src.name << " Character copy created" << std::endl;
	return;
}

Character::~Character( void ) {
	for( int i = 0; i < 4; i++ )
		if( inventory[i] )
			delete inventory[i];
	std::cout << name << " Character deleted" << std::endl;
	return;
}

Character &	Character::operator=( Character const & rhs ) {
	if( this != &rhs ) {
		this->name = rhs.name;
		for( int i = 0; i < 4; i++ )
			if( this->inventory[i] )
				delete this->inventory[i];
		for( int i = 0; i < 4; i++ )
			if( rhs.inventory[i] )
				this->inventory[i] = rhs.inventory[i];
	}
	std::cout << "Character assignment operator called" << std::endl;
	return *this;
}

std::string const &	Character::getString( void ) const {
	return this->name;
}

void	Character::equip( AMateria* m ) {
	for( int i = 0; i < 4; i++ ) 
		if ( !this->inventory[i] )
			this->inventory[i] = m->clone();

		/*	{ //USAR Clone()
		if( !this->inventory[i] && m->getType() == "ice") {
			this->inventory[i] = new Ice( m );
			delete m;
		}
		if( !this->inventory[i] && m->getType() == "cure") {
			this->inventory[i] = new Cure( m );
			delete m;
		}
	}*/
	return;
}

void	Character::unequip( int idx ) {
	if( this->inventory[idx] ) {
		this->inventory[idx] = NULL;
	} //not delete but leak ????
	return;
}

void	Character::use( int idx, ICharacter & target ) {
	if( this->inventory[idx] ) {
		this->inventory[idx]->use( target );
		delete this->inventory[idx];
	}
	return;


