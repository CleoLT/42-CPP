/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 14:04:23 by cle-tron          #+#    #+#             */
/*   Updated: 2025/01/29 19:49:26 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap( void ) : ClapTrap( "default_diamond_clap_trap" ) {
	name = "default_diamond";
	hit = FragTrap::hit;
	energy = ScavTrap::energy;
	damage = FragTrap::damage;
	std::cout << "Default DiamondTrap created" << std::endl;
}

DiamondTrap::DiamondTrap( std::string str ) : ClapTrap( str + "_clap_trap" ) {//,
											//  ScavTrap(),
											  //FragTrap() {
	name = str;
	hit = FragTrap::hit;
	energy = ScavTrap::energy;
	damage = FragTrap::damage;
	std::cout << name << " DiamondTrap created" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap & src ) : ClapTrap( src ), 
													  ScavTrap( src ),
													  FragTrap( src ) {
	*this = src;
	std::cout << "DiamondTrap " << src.name << " copy created" << std::endl;
	return;
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "DiamondTrap destroyed" << std::endl;
	return;
}

DiamondTrap &	DiamondTrap::operator=( const DiamondTrap & rhs ) {
	if ( this != &rhs )
	{
		this->name = rhs.name;
		this->hit = rhs.hit;
		this->energy = rhs.energy;
		this->damage = rhs.damage;
	}
	return *this;
}
void	DiamondTrap::attack( const std::string & target ) {
	ScavTrap::attack( target );
	return;
}

void	DiamondTrap::whoAmI( void ) const {
	std::cout << "My diamond name is " << this->name;
	std::cout << " and my clap name is " << ClapTrap::name <<  "!" << std::endl;
	return;
}
