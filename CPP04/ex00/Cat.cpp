/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:58:17 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/06 14:22:08 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat( void ) : Animal() {
	type = "Cat";
	std::cout << "Cat created" << std::endl;
	return;
}

Cat::Cat( const Cat & src ) : Animal( src ) {
	type = "Cat";
	std::cout << "Cat copy created" << std::endl;
	return;
}

Cat::~Cat( void ) {
	std::cout << "Cat destroyed" << std::endl;
	return;
}

Cat &	Cat::operator=( const Cat & rhs ) {
	if ( this != &rhs ) {
		this->type = rhs.type;
	}
	return *this;
}

void	Cat::makeSound( void ) const {
	std::cout << "Cat sound : *Mewww Miaou!*" << std::endl;
	return;
}
