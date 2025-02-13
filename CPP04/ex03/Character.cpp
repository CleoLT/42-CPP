/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:55:21 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/13 18:47:45 by cle-tron         ###   ########.fr       */
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
//	for( int i = 0; i < 4; i++ )
		//	if( this->inventory[i] ) {
		//		delete this->inventory[i];
			//	this->inventory[i] = NULL;
		//	}
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
				this->inventory[i] = rhs.inventory[i]->clone(); //?? clone ???
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
	for( int i = 0; i < 4; i++ )
		if( m == this->inventory[i] )
			return;
	for( int i = 0; i < 4; i++ ) {
		if ( !this->inventory[i] ) {
			this->inventory[i] = m->clone();
			delete m;
			m = NULL;
			break;
		}
	}
	return;
}

void	Character::unequip( int idx ) {
	if( this->inventory[idx] ) {
		this->inventory[idx] = NULL;
	} //not delete but leak ????
	return;
}

void	Character::use( int idx, ICharacter & target ) {
	if ( idx < 0 || idx > 3 ) {
		std::cout << "invalid index inventory!" << std::endl;
		return;
	}
	if( this->inventory[idx] ) {
		this->inventory[idx]->use( target );
		delete this->inventory[idx];
	}
	return;
}

