/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:14:49 by cle-tron          #+#    #+#             */
/*   Updated: 2024/11/14 17:59:53 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "HumanB.hpp"
#include <iostream>
#include <string>

HumanB::HumanB( std::string name ) : _name(name), _weapon(NULL) { }

HumanB::~HumanB( void ) { }

void	HumanB::setWeapon( Weapon &weapon ) {
	this->_weapon = &weapon;
}

void	HumanB::attack( void ) const {
	if( this->_weapon == NULL )
		std::cout << this->_name << " have no weapon" << std::endl;
	else {
	std::cout << this->_name << " attacks with their ";
	std::cout << this->_weapon->getType() << std::endl;
	}
}

