/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converters.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 13:01:35 by cle-tron          #+#    #+#             */
/*   Updated: 2025/03/23 17:54:10 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <exception>
#include <limits>
#include <cmath>

e_type	parsing( std::string const & input ) {
	bool		isfloat = false;
	int			point = 0;
	std::string	s = input;

	if ( s.compare( "-inff" ) == 0 || s.compare( "+inff" ) == 0 
		|| s.compare( "nanf" ) == 0 )
		return SPECIAL;
	if ( s.compare( "-inf" ) == 0 || s.compare( "+inf" ) == 0 
		|| s.compare( "nan" ) == 0 )
		return SPECIAL;
	if ( s.length() == 1 && !isdigit( s[0] ) )
		return CHAR;	
	if ( s.at( 0 ) == '+' && s.at( 1 ) != '-' )
		s.erase( 0, 1 );
	if ( s.at( 0 ) == '-' ) 
		s.erase( 0, 1 );
	for ( size_t i = 0; i < s.length(); i++) {
		if ( !isdigit( s[i] ) )
			break;
		else if ( i == s.length() - 1 )
			return INT;
	}
	if ( s.at( s.length() - 1 ) == 'f' ) {
		s.erase( s.length() - 1 );
		isfloat = true;
	}
	for ( size_t i = 0; i < s.length(); i++) {
		if ( s.at( i )  == '.' )
			point++;
		else if ( !isdigit( s[i] ) )
			throw ScalarConverter::InvalidArgumentException();
	}
	if ( point == 1 && s.at( s.length() -1 ) != '.' && isfloat )
		return FLOAT;
	else if ( point == 1 && s.at( s.length() -1 ) != '.' )
		return DOUBLE;

	throw ScalarConverter::InvalidArgumentException(); 
}

void	toChar( std::string const & input ) {
	char	c = input.at( 0 );

	printChar( c, static_cast<double>( c ) );
	printInt( static_cast<int>( c ), static_cast<double>( c ) );
	printFloat( static_cast<float>( c ), input );
	printDouble(static_cast<double>( c ), input );
}

void	toInt( std::string const & input ) {
	std::stringstream	ss( input );
	int					num;

	ss >> num;
	if (ss.fail() || !ss.eof()) {
		std::cout << "Limits integer format: ";
		throw ScalarConverter::InvalidArgumentException(); 
	}
	
	printChar( static_cast<char>( num ), static_cast<double>( num ) );	
	printInt( num , static_cast<double>( num ) );
	printFloat( static_cast<float>( num ), input );
	printDouble(static_cast<double>( num ), input );
}

void	toFloat( std::string const & input ) {
	std::string			s = input;
	s.erase( s.length() - 1 );
	std::stringstream	ss( s );
	float				num;

	ss >> num;
	if (ss.fail() || !ss.eof()) {
		std::cout << "Limits float format: ";
		throw ScalarConverter::InvalidArgumentException(); 
	}

	printChar( static_cast<char>( num ), static_cast<double>( num ) );
	printInt( static_cast<int>( num ), static_cast<double>( num ) );
	printFloat( num, input);
	printDouble(static_cast<double>( num ), input);
}

void	toDouble( std::string const & input ) {
	std::stringstream	ss( input );
	double				num;
	
	ss >> num;
	if (ss.fail() || !ss.eof()) {
		std::cout << "Limits double format: ";
		throw ScalarConverter::InvalidArgumentException(); 
	}

	printChar( static_cast<char>( num ), num ); 
	printInt( static_cast<int>( num ), num );
	printFloat( static_cast<float>( num ), input );
	printDouble( num, input );
}


