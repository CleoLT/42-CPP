/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:44:56 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/21 14:11:15 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice( void ) : AMateria( "ice" ) {
	std::cout << "Ice created" << std::endl;
	return;
}

Ice::Ice( Ice const & src ) : AMateria( src ) {
	std::cout << "Ice copy created" << std::endl;
	return;
}

Ice::~Ice( void ) {
	std::cout << "Ice destroyed" << std::endl;
	return;
}

Ice &	Ice::operator=( Ice const & rhs ) {
	if( this != &rhs ) {
		this->type = rhs.type;
	}
	std::cout << "Ice assignment operator called" << std::endl;
	return *this;
}

AMateria *	Ice::clone( void ) const {
	return new Ice( *this );
}

void	Ice::use( ICharacter & target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *";
	std::cout << std::endl;
	return;
}
