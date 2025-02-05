/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:57:55 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/05 19:14:29 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Animal.hpp"

Animal::Animal( void ) : type( "default" ) {
	std::cout << "Default Animal created" << std::endl;
	return;
}

Animal::Animal( const Animal & src ) {
	*this = src;
	std::cout << "Animal copy created" << std::endl;
	return;
}

Animal::~Animal( void ) {
	std::cout << "Animal destroyed" << std::endl;
	return;
}

Animal &	Animal::operator=( const Animal & rhs ) {
	if ( this != &rhs ) {
		this->type = rhs.type;
	}
	return *this;
}

std::string	Animal::getType( void ) const {
	return this->type;
}

void	Animal::makeSound( void ) const {
	std::cout << "Animal sound: *Rrrrandom!*" << std::endl;
	return;
}
