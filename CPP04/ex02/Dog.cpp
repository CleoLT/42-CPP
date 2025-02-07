/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:58:06 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/07 14:36:57 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog( void ) : AAnimal() {
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog created" << std::endl;
	return;
}

Dog::Dog( const Dog & src ) : AAnimal( src ) {
	type = "Dog";
	brain = new Brain( *src.brain );
	std::cout << "Dog copy created" << std::endl;
	return;
}

Dog::~Dog( void ) {
	delete brain;
	std::cout << "Dog destroyed" << std::endl;
	return;
}

Dog &	Dog::operator=( const Dog & rhs ) {
	if ( this != &rhs ) {
		this->type = rhs.type;
		delete this->brain;
		this->brain = new Brain( *rhs.brain );
	}
	return *this;
}

void	Dog::makeSound( void ) const { 
	std::cout << "Dog sound: *Woof Woof!*" << std::endl;
	return;
}
