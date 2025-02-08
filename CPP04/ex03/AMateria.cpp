/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:44:45 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/08 13:30:33 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria( void ) : type( "Default" ) {
	std::cout << "AMateria created" << std::endl;
	return;
}

AMateria::AMateria( std::string const &	str ) : type( str ) {
	std::cout << "AMateria " << str << " type created" << std::endl;
	return;
}

AMateria::AMateria( AMateria const & src ) {
	*this = src;
	std::cout << "AMateria copy created" << std::endl;
	return;
}

AMateria::~AMateria( void ) {
	std::cout << "AMateria destroyed" << std::endl;
	return;
}

AMateria &	AMateria::operator=( AMateria const & rhs ) {
	if( this != &rhs ) {
		this->type = rhs.type;
	}
	std::cout << "AMateria assignment operator called" << std::endl;
	return *this;
}

std::string const &	AMateria::getType( void ) const {
	return this->type;
}

