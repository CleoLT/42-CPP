/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 15:57:43 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/06 17:06:39 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Brain created" << std::endl;
	return;
}

Brain::Brain( const Brain & src ) {
	*this = src;
	std::cout << "Brain copy created" << std::endl;
	return;
}

Brain::~Brain( void ) {
	std::cout << "Brain destroyed" << std::endl;
	return;
}

Brain &	Brain::operator=( const Brain & rhs ) {
	if ( this != &rhs ) {
		for ( int i = 0; i < 100; i++ )
			this->ideas[i] = rhs.ideas[i];
	}
	return *this;
}
