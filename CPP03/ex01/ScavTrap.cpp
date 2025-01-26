/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 11:14:31 by cle-tron          #+#    #+#             */
/*   Updated: 2025/01/26 11:42:28 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap( void ) : ClapTrap() {
	hit = 100;
	energy = 50;
	damage = 20;
	std::cout << "Default ScavTrap created" << std::endl;
	return;
}

ScavTrap::ScavTrap( std::string str ) : ClapTrap( str ){
	hit = 100;
	energy = 50;
	damage = 20;
	std::cout << name << " ScavTrap created" << std::endl;
	return;
}

ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap( src ) {
	std::cout << "ScavTrap " << src.name << " copy created" << std::endl;
	return;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap destroyed" << std::endl;
	return;
}

ScavTrap &	ScavTrap::operator=( ScavTrap const & rhs ) {
	if ( this != &rhs ) {
		this->name = rhs.name;
		this->hit = rhs.hit;
		this->energy = rhs.energy;
		this->damage = rhs.damage;
	}
	return *this;
}

void	ScavTrap::attack( const std::string & target ) {
	if ( this->checkDoAction() )
		return;
	this->energy -= 1;
	std::cout << "ScavTrap " << this->name << " attacks " << target;
	std::cout << ", causing " << this->damage << " points of damage!";
	std::cout << std::endl;
	return;
}

void	ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode!";
	std::cout << std::endl;
	return;
}
