/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 12:59:16 by cle-tron          #+#    #+#             */
/*   Updated: 2025/03/21 13:08:44 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <string>
//#include <sstream>
#include <exception>
//#include <limits>

ScalarConverter::ScalarConverter( void ) {}

ScalarConverter::ScalarConverter( ScalarConverter const & src ) {
	*this = src;
}

ScalarConverter::~ScalarConverter( void ) {}

ScalarConverter &	ScalarConverter::operator=( ScalarConverter const & rhs ) {
	(void)rhs;
	return *this;
}

void	ScalarConverter::convert( std::string const & input ) {
	try {
		e_type	type = parsing( input );
		//std::cout << "Type: " << type << std::endl;
		switch ( type ) {
			case CHAR:
				toChar( input );	
				break;
			case INT:
				toInt( input );
				break;
			case FLOAT:
				toFloat( input );
				break;
			case DOUBLE:
				toDouble( input );
				break;
			default:
				return;
		}
	}
	catch( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}
}

const char *	ScalarConverter::InvalidArgumentException::what() const throw() {
	return "Invalid Argument!";
}
