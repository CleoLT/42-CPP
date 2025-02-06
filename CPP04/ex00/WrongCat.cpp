/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:58:17 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/06 15:25:03 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal() {
	type = "WrongCat";
	std::cout << "WrongCat created" << std::endl;
	return;
}

WrongCat::WrongCat( const WrongCat & src ) : WrongAnimal( src ) {
	type = "WrongCat";
	std::cout << "WrongCat copy created" << std::endl;
	return;
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat destroyed" << std::endl;
	return;
}

WrongCat &	WrongCat::operator=( const WrongCat & rhs ) {
	if ( this != &rhs ) {
		this->type = rhs.type;
	}
	return *this;
}

void	WrongCat::makeSound( void ) const {
	std::cout << "WrongCat sound : *Mewww Miaou!*" << std::endl;
	return;
}
