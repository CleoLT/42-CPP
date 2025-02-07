/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:58:17 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/07 14:43:53 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat( void ) : AAnimal() {
	type = "Cat";
	brain = new Brain();
	std::cout << "Cat created" << std::endl;
	return;
}

Cat::Cat( const Cat & src ) : AAnimal( src ) {
	type = "Cat";
	brain = new Brain( *src.brain );
	std::cout << "Cat copy created" << std::endl;
	return;
}

Cat::~Cat( void ) {
	delete brain;
	std::cout << "Cat destroyed" << std::endl;
	return;
}

Cat &	Cat::operator=( const Cat & rhs ) {
	if ( this != &rhs ) {
		this->type = rhs.type;
		delete this->brain;
		this->brain = new Brain( *rhs.brain );
	}
	return *this;
}

void	Cat::makeSound( void ) const {
	std::cout << "Cat sound : *Mewww Miaou!*" << std::endl;
	return;
}
