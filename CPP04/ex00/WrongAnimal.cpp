/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:57:55 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/06 14:32:05 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type( "default" ) {
	std::cout << "Default WrongAnimal created" << std::endl;
	return;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src ) {
	*this = src;
	std::cout << "WrongAnimal copy created" << std::endl;
	return;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal destroyed" << std::endl;
	return;
}

WrongAnimal &	WrongAnimal::operator=( const WrongAnimal & rhs ) {
	if ( this != &rhs ) {
		this->type = rhs.type;
	}
	return *this;
}

std::string	WrongAnimal::getType( void ) const {
	return this->type;
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "WrongAnimal sound: *Rrrrandom!*" << std::endl;
	return;
}
