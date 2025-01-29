/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 11:49:54 by cle-tron          #+#    #+#             */
/*   Updated: 2025/01/29 18:52:25 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap( void ) : ClapTrap() {
	hit = 100;
	energy = 100;
	damage = 30;
	std::cout << "Default FragTrap created" << std::endl;
	return;
}

FragTrap::FragTrap( const std::string & str ) : ClapTrap( str ) {
	hit = 100;
	energy = 100;
	damage = 30;
	std::cout << "FragTrap " << name << " created" << std::endl;
	return;
}

FragTrap::FragTrap( const FragTrap & src ) : ClapTrap( src ) {
	std::cout << "FragTrap " << name << " created" << std::endl;
	return;
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap " << name << " destroyed" << std::endl;
	return;
}

FragTrap &	FragTrap::operator=( const FragTrap & rhs ) {
	if ( this != &rhs )
	{
		this->name = rhs.name;
		this->hit = rhs.hit;
		this->energy = rhs.energy;
		this->damage = rhs.damage;
	}
	return *this;
}

void	FragTrap::highFivesGuys( void ) const {
	if ( this->checkDoAction() )
		return;
	std::cout << "FragTrap " << name << " requests a high five!" << std::endl;
	return;
}
