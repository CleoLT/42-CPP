/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:20:22 by cle-tron          #+#    #+#             */
/*   Updated: 2025/01/12 19:53:23 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include <cfloat>
#include "Fixed.hpp"

int const	Fixed::bits = 8;

Fixed::Fixed( void ) : nb( 0 ) {
	return;
}

Fixed::Fixed( int const value ) {
	setRawBits( value * 1 << bits );
	return;
}

Fixed::Fixed( float const value ) {
	setRawBits( roundf( value * float( 1 << bits ) ) );
	return;
}

Fixed::Fixed( Fixed const & src ) {
	*this = src;
	return;
}

Fixed::~Fixed( void ) {
	return;
}

Fixed &	Fixed::operator=( Fixed const & rhs ) {
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

Fixed	Fixed::operator++( void ) {
	this->nb++;
	return *this;
}

Fixed	Fixed::operator--( void ) {
	this->nb--;
	return *this;
}

Fixed	Fixed::operator++( int ) {
	Fixed	tmp = *this;
	this->nb++;
	return tmp;
}

Fixed	Fixed::operator--( int ) {
	Fixed	tmp = *this;
	this->nb--;
	return tmp;
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
