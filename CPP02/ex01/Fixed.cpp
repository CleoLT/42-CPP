/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:20:22 by cle-tron          #+#    #+#             */
/*   Updated: 2024/12/04 18:38:02 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int const	Fixed::bits = 8;

Fixed::Fixed( void ) : nb( 0 ) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed( int const value ) : nb( value ) {
	std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed( float const value ) : nb( value ) {
	std::cout << "Float constructor called" << std::endl;
	return;
}

Fixed::Fixed( Fixed const & src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed &	Fixed::operator=( Fixed const & rhs ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &rhs )
		this->nb = rhs.getRawBits();
	return *this;
}

int	Fixed::getRawBits( void ) const {
	return this->nb;
}

void	Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->nb = raw;
	return;
}

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs ) {
	o << rhs.getRawBits();
	return o;
}
