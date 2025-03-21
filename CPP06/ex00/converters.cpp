/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converters.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 13:01:35 by cle-tron          #+#    #+#             */
/*   Updated: 2025/03/21 14:48:27 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <exception>

e_type	parsing( std::string const & input ) {
	bool		isfloat = false;
	int			point = 0;
	std::string	s = input;

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
			return INT; //checkINT MAX/ MIN
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
		return FLOAT; //check Float max & min
	else if ( point == 1 && s.at( s.length() -1 ) != '.' )
		return DOUBLE; //check double max and min
	//check nan nanf etc

	throw ScalarConverter::InvalidArgumentException(); 
}



void	toChar( std::string const & input ) {
	char	c = input.at( 0 );

	printChar( c, static_cast<double>( c ) );
	printInt( static_cast<int>( c ), static_cast<double>( c ) );
	printFloat( static_cast<float>( c ), static_cast<double>( c ) );
//	std::cout << "int:	" << static_cast<int>( c ) << std::endl;
//	std::cout << "float:	" << static_cast<float>( c ) << ".0f" << std::endl;
	std::cout << "double:	" << static_cast<double>( c ) << ".0" << std::endl;

}

void	toInt( std::string const & input ) {
	std::stringstream	ss( input );
	int					num;

	ss >> num;
	if (ss.fail() || !ss.eof())
        throw std::invalid_argument("Invalid integer format: limits");
	printChar( static_cast<char>( num ), static_cast<double>( num ) );	
	printInt( num , static_cast<double>( num ) );
	printFloat( static_cast<float>( num ), static_cast<double>( num ) );
	//std::cout << "float:	" << static_cast<float>( num ) << ".0f" << std::endl;
	std::cout << "double:	" << static_cast<double>( num ) << ".0" << std::endl;

}
/*
void	toInt( std::string const & input ) {
	std::stringstream	ss( input );
	int					num;

	ss >> num;
	if (ss.fail() || !ss.eof())
        throw std::invalid_argument("Invalid integer format: limits");
	//std::cout << "char:	'" << static_cast<char>( num ) << "'" << std::endl;
	// not displayable or impossible
	printChar( static_cast<char>( num ), static_cast<double>( num ) );
	std::cout << "int:	" << static_cast<int>( num ) << std::endl;
	std::cout << "float:	" << static_cast<float>( num ) << ".0f" << std::endl;
	std::cout << "double:	" << static_cast<double>( num ) << ".0" << std::endl;

}
*/




void	toFloat( std::string const & input ) {
	std::string			s = input;
	
	s.erase( s.length() - 1 );
	
	std::stringstream	ss( s );
	float				num;

	ss >> num;
	if (ss.fail() || !ss.eof())
        throw std::invalid_argument("Invalid float format: limits");

//num = 1.0 / 0.0; //if arg == inff 
//	num = -1.0 / 0.0; //if arg == -inff 
//	num = 0.0 / 0.0; // if arg nanf


	printChar( static_cast<char>( num ), static_cast<double>( num ) );
//	std::cout << "char:	'" << static_cast<char>( num ) << "'" << std::endl;
//	if ( num > std::numeric_limits<int>::max() ) 
//		std::cout << "int:	impossible" << std::endl;
//	else
//		std::cout << "int:	" << static_cast<int>( num ) << std::endl;

	printInt( static_cast<int>( num ), static_cast<double>( num ) );
	printFloat( num , static_cast<double>( num ) );
	//std::cout << "float:	" << static_cast<float>( num ) << ".0f" << std::endl;
	std::cout << "double:	" << static_cast<double>( num ) << ".0" << std::endl;

}

void	toDouble( std::string const & input ) {
	std::stringstream	ss( input );
	double				num;

	ss >> num;
	if (ss.fail() || !ss.eof())
        throw std::invalid_argument("Invalid double format: limits");

	//num = 1.0 / 0.0; if arg == inf 
	//num = -1.0 / 0.0; //if arg == -inf 
	//num = 0.0 / 0.0; // if arg nan
	printChar( static_cast<char>( num ), static_cast<double>( num ) );
	printInt( static_cast<int>( num ), static_cast<double>( num ) );
//	std::cout << "int:	" << static_cast<int>( num ) << std::endl;
	printFloat( static_cast<float>( num ), static_cast<double>( num ) );
//	std::cout << "float:	" << static_cast<float>( num );
//	if ( num - static_cast<int>( num ) < 0.0000001 )
//		std::cout << ".0";
//	std::cout<< "f" << std::endl;

	std::cout << "double:	" <<  num  << ".0" << std::endl;

}
