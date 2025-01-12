/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:20:22 by cle-tron          #+#    #+#             */
/*   Updated: 2025/01/12 19:10:13 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

int const	Fixed::bits = 8;

Fixed::Fixed( void ) : nb( 0 ) {
//	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed( int const value ) {
	setRawBits( value * 1 << bits );
//	std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed( float const value ) {
	setRawBits( roundf( value * float( 1 << bits ) ) );
//	std::cout << "Float constructor called " << std::endl;
	return;
}

Fixed::Fixed( Fixed const & src ) {
//	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::~Fixed( void ) {
//	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed &	Fixed::operator=( Fixed const & rhs ) {
//	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &rhs )
		this->nb = rhs.getRawBits();
	return *this;
}

bool	Fixed::operator>( Fixed const rhs ) {
	if ( this->nb > rhs.getRawBits() )
		return true;
	else
		return false;
}

bool	Fixed::operator<( Fixed const rhs ) {
	if ( this->nb < rhs.getRawBits() )
		return true;
	else
		return false;
}

bool	Fixed::operator>=( Fixed const rhs ) {
	if ( this->nb >= rhs.getRawBits() )
		return true;
	else
		return false;
}

bool	Fixed::operator<=( Fixed const rhs ) {
	if ( this->nb <= rhs.getRawBits() )
		return true;
	else
		return false;
}

bool	Fixed::operator==( Fixed const rhs ) {
	if ( this->nb == rhs.getRawBits() )
		return true;
	else
		return false;
}

bool	Fixed::operator!=( Fixed const rhs ) {
	if ( this->nb != rhs.getRawBits() )
		return true;
	else
		return false;
}

float	Fixed::operator+( Fixed const rhs ) {
		return this->toFloat() + rhs.toFloat();
}

float	Fixed::operator-( Fixed const rhs ) {
		return this->toFloat() - rhs.toFloat();
}

float	Fixed::operator*( Fixed const rhs ) {
	return this->toFloat() * rhs.toFloat();
}

float	Fixed::operator/( Fixed const rhs ) {
	return this->toFloat() / rhs.toFloat();
}

int	Fixed::getRawBits( void ) const {
	return this->nb;
}

void	Fixed::setRawBits( int const raw ) {
	this->nb = raw;
	return;
}

float	Fixed::toFloat( void ) const {
	return float( this->getRawBits() ) / float( 1 << bits );
}

int	Fixed::toInt( void ) const {
	return int( this->nb * 1 >> bits );
}

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs ) {
	o << rhs.toFloat();
	return o;
}
