/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 17:38:46 by cle-tron          #+#    #+#             */
/*   Updated: 2025/01/12 19:47:55 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed	a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed	c( 67.7f );
	Fixed	d = c;

	if ( c > a )
		std::cout << "more > " << std::endl;
	if ( a < c )
		std::cout << "less < " << std::endl;
	if ( d >= c && d >= a )
		std::cout << "more or equal >= " << std::endl;
	if ( d <= c && a <= c )
		std::cout << "less or equal <= " << std::endl;
	if ( d == c )
		std::cout << "equal ==" << std::endl;
	if ( d != a )
		std::cout << "not equal !=" << std::endl;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

//	std::cout << Fixed::max( a, b ) << std::endl;
	
	return 0;
}
