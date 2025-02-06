/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:58:06 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/05 19:14:29 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Dog.hpp"

Dog::Dog( void ) : Animal() {
	type = "Dog";
	std::cout << "Dog created" << std::endl;
	return;
}

Dog::Dog( const Dog & src ) : Animal( src ) {
	type = "Dog";
	std::cout << "Dog copy created" << std::endl;
	return;
}

Dog::~Dog( void ) {
	std::cout << "Dog destroyed" << std::endl;
	return;
}

Dog &	Dog::operator=( const Dog & rhs ) {
	if ( this != &rhs ) {
		this->type = rhs.type;
	}
	return *this;
}

void	Dog::makeSound( void ) const { 
	std::cout << "Dog sound: *Woof Woof!*" << std::endl;
	return;
}
