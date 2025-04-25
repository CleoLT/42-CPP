/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 12:06:36 by cle-tron          #+#    #+#             */
/*   Updated: 2025/04/25 17:08:53 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <exception>
#include <string>

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange( BitcoinExchange const & src ) { 
	*this = src;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange &	BitcoinExchange::operator=( BitcoinExchange const & rhs ) {
	if ( this != &rhs ) {
		this->db = std::map<std::string, int>( rhs.db );
	}
	return *this;
}

void	BitcoinExchange::printExchangedValues( std::fstream & file ) const {
	
	char		line[256];
//	std::string	l;
	int			i = 0;

	while ( !file.eof() ) {
		file.getline( line, 256 );
		std::string l( line );
		if ( l.empty() )
			continue;
		if ( i == 0 && l == "date | value" )
			continue;
		try {	
			parseAndPrintLine( l );
		} catch( std::exception &e ) {
			std::cout << "Error: " << e.what() << std::endl;
		}
		l.clear();
		i++;
	}
}

void	BitcoinExchange::parseAndPrintLine( std::string l ) const {
	if ( l.length() < 13 || l.at(4) != '-' || l.at(7) != '-' || l.at(10) != ' ' || l.at(11) != '|' || l.at(12) != ' ' )
		throw BadInputException( l );
	
	std::string	year( l.substr( 0 , 4 ));
	std::string	month( l.substr( 5, 2 ));
	std::string	day( l.substr( 8, 2 ));
	std::string	v( l.substr( 13, l.length() -1 ));

	float		value = atof( v.c_str());

	if ( value <= 0 )
		throw NotPositiveNumberException();


	std::cout << year << "-" << month << "-" << day << " => " << value << std::endl;
}



BitcoinExchange::BadInputException::BadInputException( std::string const & arg ) : arg( arg ) {}

BitcoinExchange::BadInputException::~BadInputException() throw() {}

const char *	BitcoinExchange::BadInputException::what() const throw() {
	std::cout << "bad input => ";
	return  this->arg.c_str();
}

const char *	BitcoinExchange::NotPositiveNumberException::what() const throw() {
	return "not a positive number.";
}
