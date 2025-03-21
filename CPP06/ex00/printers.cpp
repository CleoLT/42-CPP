/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printers.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 13:20:38 by cle-tron          #+#    #+#             */
/*   Updated: 2025/03/21 14:48:27 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <string>
#include <limits>

void	printChar( char const c, double const value) {
	if ( value < 0 || value > 127 ) {
		std::cout << "char:	impossible" << std::endl;
		return;
	}
	if ( c < 32 || c > 126 ) {
		std::cout << "char:	non displayable" << std::endl;
		return;
	}
	std::cout << "char:	'" << c << "'" << std::endl;
}

void	printInt( int const num, double const value ) {
	if ( value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max() ) {
		std::cout << "int:	impossible" << std::endl;
		return;
	}
	std::cout << "int:	" << num << std::endl;
}

void	printFloat( float const num, double const value ) {
	if ( value < std::numeric_limits<float>::min() 
	|| value > std::numeric_limits<float>::max() ) {
		std::cout << "float:	impossible" << std::endl;
		return;
	}
	std::cout << "float:	" << num << std::endl;
	}
/*
void	printDouble( double const d ) {}
*/
