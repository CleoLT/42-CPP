/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:57:55 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/07 15:34:38 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "AAnimal.hpp"

AAnimal::AAnimal( void ) : type( "default" ) {
	std::cout << "Default AAnimal created" << std::endl;
	return;
}

AAnimal::AAnimal( const AAnimal & src ) {
	*this = src;
	std::cout << "AAnimal copy created" << std::endl;
	return;
}

AAnimal::~AAnimal( void ) {
	std::cout << "AAnimal destroyed" << std::endl;
	return;
}

AAnimal &	AAnimal::operator=( const AAnimal & rhs ) {
	if ( this != &rhs ) {
		this->type = rhs.type;
	}
	return *this;
}

std::string	AAnimal::getType( void ) const {
	return this->type;
}

