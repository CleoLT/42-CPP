/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printers.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 13:20:38 by cle-tron          #+#    #+#             */
/*   Updated: 2025/03/23 18:36:43 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <string>
#include <limits>
#include <cmath>

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
	if ( value < std::numeric_limits<int>::min() 
		|| value > std::numeric_limits<int>::max() )
		std::cout << "int:	impossible" << std::endl;
	else
		std::cout << "int:	" << num << std::endl;
}

void	printFloat( float const num, std::string const & s ) {
	int	count = 0;

	for ( size_t i = 0; i < s.length(); i++ ) {
		if ( s.at( i ) == '.' )
			break;
		count++;
	}
	std::cout << "float:	" << num;	
	std::cout << ( std::fmod( num, 1.0 ) == 0.0 && count < 7 ? ".0f" : "f" );
	std::cout << std::endl;
}

void	printDouble( double const num, std::string const & s) {
	int	count = 0;

	for ( size_t i = 0; i < s.length(); i++ ) {
		if ( s.at( i ) == '.' )
			break;
		count++;
	}
	std::cout << "double:	" << num;
	if ( std::fmod( num, 1.0 ) == 0.0 && count < 7 )
		std::cout << ".0";
	std::cout << std::endl;
}

void	printSpecial( std::string const & input ) {
	double				num;

	if ( input.at( 0 ) == '+' )			// +inf / +inff
		num = 1.0 / 0.0;
	else if ( input.at( 0 ) == '-' )	// -inf / -inff
		num = -1.0 / 0.0;	
	else {								// nan / nanf
		num = 0.0 / 0.0;
		num = std::fabs( num );
	}

	std::cout << "char:	impossible" << std::endl;
	std::cout << "int:	impossible" << std::endl;
	std::cout << "float:	" << num << "f" << std::endl;
	std::cout << "double:	" << num << std::endl;
}
