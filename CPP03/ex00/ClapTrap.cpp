/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:51:20 by cle-tron          #+#    #+#             */
/*   Updated: 2025/01/22 20:04:10 by cle-tron         ###   ########.fr       */
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

ClapTrap &	operator=( ClapTrap & rhs ) {
	if ( *this != rhs )
	{
		this->name = rhs.name;
		this->hit = rhs.hit;
		this->energy = rhs.energy;
		this->damage = rhs.damage;
	}
	return this;
}

void	ClapTrap::attack( const std::string & target ) {
	std::cout << "ClapTrap " << this->name << " attacks " << this->target;
	std::cout << ", causing " << this->damage << " points of damage!";
	std::cout << std::endl;
	return;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	this->
