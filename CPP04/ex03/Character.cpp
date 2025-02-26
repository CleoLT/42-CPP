/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:55:21 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/22 16:32:51 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character( void ) : name( "default" ) {
	for( int i = 0; i < 4; i++ )
		inventory[i] = NULL;
	std::cout << "Default Character created" << std::endl;
	return;
}

Character::Character( std::string const & str ) : name( str ) {
	for( int i = 0; i < 4; i++ )
		inventory[i] = NULL;
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
		if( inventory[i] ) {
			delete inventory[i];
			inventory[i] = NULL;
		}
	std::cout << name << " Character deleted" << std::endl;
	return;
}

Character &	Character::operator=( Character const & rhs ) {
	if( this != &rhs ) {
		this->name = rhs.name;
		for( int i = 0; i < 4; i++ )
			this->inventory[i] = NULL;
		for( int i = 0; i < 4; i++ )
			if( rhs.inventory[i] )
				this->inventory[i] = rhs.inventory[i]->clone();
	}
	std::cout << "Character assignment operator called" << std::endl;
	return *this;
}

std::string const &	Character::getName( void ) const {
	return this->name;
}

void	Character::equip( AMateria* m ) {
	if ( !m )
		return;
	for( int i = 0; i < 4; i++ ) {
		if ( !this->inventory[i] ) {
			this->inventory[i] = m->clone();
			delete m;
			return;
		}
	}
	return;
}

void	Character::unequip( int idx ) {
	if ( this->invalidIndex( idx ) )
		return;
	if( this->inventory[idx] ) {
		this->inventory[idx] = NULL;
		std::cout << "Materia with index " << idx << " unequiped" << std::endl;
	}
	return;
}

AMateria*	Character::getAddress( int idx ) const {
	if ( this->invalidIndex( idx ) )
		return NULL;
	return this->inventory[idx];
}

void	Character::use( int idx, ICharacter & target ) {
	if ( this->invalidIndex( idx ) )
		return;
	if( this->inventory[idx] ) {
		this->inventory[idx]->use( target );
		delete this->inventory[idx];
		this->inventory[idx] = NULL;
	}
	return;
}

bool	Character::invalidIndex( int idx ) const {
	if ( idx < 0 || idx > 3 ) {
		std::cout << "Invalid index inventory!" << std::endl;
		return true;
	}
	if ( !this->inventory[idx] ) {
		std::cout << "Empty index inventory!" << std::endl;
		return true;
	}
	return false;
}

