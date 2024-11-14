/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:48:51 by cle-tron          #+#    #+#             */
/*   Updated: 2024/11/14 17:51:45 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>
#include <iostream>

Weapon::Weapon( std::string type ) : _type(type) { }

Weapon::Weapon( void ) { }

Weapon::~Weapon( void ) { }

std::string	Weapon::getType( void ) const {
	return this->_type;
}

void	Weapon::setType( std::string type ) {
	this->_type = type;
//	std::cout << "setType()" << this->_type << std::endl;
}
