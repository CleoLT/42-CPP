/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 12:59:16 by cle-tron          #+#    #+#             */
/*   Updated: 2025/03/13 18:52:40 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <exception>

ScalarConverter::ScalarConverter( void ) {}
/*
ScalarConverter::ScalarConverter( int i ) {
	std::cout << "int: " << i << std::endl;
}*/

ScalarConverter::ScalarConverter( ScalarConverter const & src ) {
	*this = src;
}

ScalarConverter::~ScalarConverter( void ) {}

ScalarConverter &	ScalarConverter::operator=( ScalarConverter const & rhs ) {
	(void)rhs;
	return *this;
}

e_type	parsing( std::string const & input ) {
	bool		isfloat = false;
//	bool		negative = false;
	int			point = 0;
//	size_t		s.length() = input.s.length()();
	std::string	s = input;

	if ( s.length() == 1 && !isdigit( s[0] ) )
		return CHAR;
	if ( s.at( 0 ) == '+' )
		s.erase( 0, 1 );
	if ( s.at( 0 ) == '-' ) {
	//	negative = true;
		s.erase( 0, 1 );
	//	std::cout << s << std::endl;
	}
	for ( size_t i = 0; i < s.length(); i++) {
		if ( !isdigit( s[i] ) )
			break;
		else if ( i == s.length() - 1 )
			return INT; //checkINT MAX/ MIN
	}
	if ( s.at( s.length() - 1 ) == 'f' ) {
		s.erase( s.length() - 1 );
		isfloat = true;
	//	std::cout << s << std::endl;
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



//	(void)negative;
//	(void)isfloat;
	throw ScalarConverter::InvalidArgumentException(); 
//	return INVALID;
}


void	ScalarConverter::convert( std::string const & input ) {
//	std::cout << input << std::endl;
//	std::stringstream	ss( input );

//	try {
	//	std::stringstream	ss( input );
//		int					num;

//		ss >> num;
//		ScalarConverter::ScalarConverter( num );
//	}
//	catch ( std
	try {
		e_type	type = parsing( input );
		std::cout << "Type: " << type << std::endl;
	}
	catch( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}
}

const char *	ScalarConverter::InvalidArgumentException::what() const throw() {
	return "Invalid Argument!";
}
