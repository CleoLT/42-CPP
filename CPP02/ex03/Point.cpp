/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:33:44 by cle-tron          #+#    #+#             */
/*   Updated: 2025/01/21 17:59:14 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <cmath>

Point::Point( void ) {
	return;
}

Point::Point( float const nb1, float const nb2 ) : x( nb1 ), y( nb2 ) {
	return;
}

Point::Point( Point const & src ) : x( src.x ), y( src.y ) {
	return;
}

Point::~Point( void ) {
	return;
}

float	Point::getValueX( void ) const {
	return this->x.toFloat();
}

float	Point::getValueY( void ) const {
	return this->y.toFloat();
}
/*
void	Point::setValueX( float const nb ) {
	this->x.setRawBits( roundf( nb * float( 1 << 8 ) ) );
	return;
}

void	Point::setValueY( float const nb ) {
	this->y.setRawBits( roundf( nb * float( 1 << 8 ) ) );
	return;
}


void	Point::increaseX( void ) {
	this->x++;
	return;
}

void	Point::increaseY( void ) {
	this->y++;
	return;
}*/

