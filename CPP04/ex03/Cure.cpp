/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:45:02 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/21 13:50:06 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure( void ) : AMateria( "cure" ) {
	std::cout << "Cure created" << std::endl;
	return;
}

Cure::Cure( Cure const & src ) : AMateria( src ) {
	std::cout << "Cure copy created" << std::endl;
	return;
}

Cure::~Cure( void ) {
	std::cout << "Cure destroyed" << std::endl;
	return;
}

Cure &	Cure::operator=( Cure const & rhs ) {
	if( this != &rhs ) {
		this->type = rhs.type;
	}
	std::cout << "Cure assignment operator called" << std::endl;
	return *this;
}

AMateria *	Cure::clone( void ) const {
	return new Cure( *this );
}

void	Cure::use( ICharacter & target ) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	return;
}
