/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:51:20 by cle-tron          #+#    #+#             */
/*   Updated: 2025/01/24 12:05:37 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap( void ) : name( "default" ), hit( 10 ), 
							 energy( 10 ), damage( 0 ) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap( std::string str ) : name( str ), hit( 10 ), 
							 energy( 10 ), damage( 0 ) {
	std::cout << "Parameter constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap( ClapTrap & src ) {
	*this = src;
	std::cout << "Copy constuctor called" << std::endl;
	return;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "Destructor called" << std::endl;
	return;
}

ClapTrap &	ClapTrap::operator=( ClapTrap & rhs ) {
	if ( this != &rhs )
	{
		this->name = rhs.name;
		this->hit = rhs.hit;
		this->energy = rhs.energy;
		this->damage = rhs.damage;
	}
	return *this;
}

bool	ClapTrap::checkDoAction( void ) const {
	if ( this->hit == 0 ) {
		std::cout << "ClapTrap " << this->name;
		std::cout << " can't do any actions because it is dead!" << std::endl;
		return true;
	}
	else if ( this->energy == 0 ) { 
		std::cout << "ClapTrap " << this->name;
		std::cout << " can't do any actions because it has no more energy!";
		std::cout << std::endl;
		return true;
	}
	return false;
}

void	ClapTrap::attack( const std::string & target ) {
	if ( this->checkDoAction() )
		return;
	this->energy -= 1;
	std::cout << "ClapTrap " << this->name << " attacks " << target;
	std::cout << ", causing " << this->damage << " points of damage!";
	std::cout << std::endl;
	return;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	if ( this->hit < amount ) 
		this->hit = 0;
	else
		this->hit -= amount;
	std::cout << "ClapTrap " << this->name << " receives an attack, and loses ";
	std::cout << amount << " hit points!";
	std::cout << std::endl;
	return;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if ( this->checkDoAction() )
		return;
	this->energy -= 1;
	this->hit += amount;
	std::cout << "ClapTrap " << this->name << " repairs itself and gets ";
	std::cout << amount << " hit points!";
	std::cout << std::endl;
	return;
}

