/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 12:06:36 by cle-tron          #+#    #+#             */
/*   Updated: 2025/05/07 17:17:39 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <exception>
#include <string>

BitcoinExchange::BitcoinExchange( char const * filename ) {
	std::fstream	fs( filename, std::fstream::in );
	if ( !fs.is_open() ) 
		throw InvalidFileException();

	char		line[256];
	time_t		date;
	int			i = 0;
	
	while ( !fs.eof() ) {
		fs.getline( line, 256 );
		std::string	l( line );
		if ( i == 0 && l == "date,exchange_rate" )
			continue;
		date = 0;
		if ( l.empty() || l.length() < 12 || invalidDate( l.substr( 0, 10 ), &date ) || l.at( 10 ) != ',' \
			|| invalidFloat( l.substr( 11, l.length() -1 )))
			continue;
		db[ date ] = atof( l.substr( 11, l.length() -1).c_str() );
		i++;
		l.clear();
	}
}

BitcoinExchange::BitcoinExchange( BitcoinExchange const & src ) { 
	*this = src;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange &	BitcoinExchange::operator=( BitcoinExchange const & rhs ) {
	if ( this != &rhs ) {
		this->db = std::map<time_t, float>( rhs.db );
	}
	return *this;
}

void	BitcoinExchange::printDataBase() {
	std::map<time_t, float>::iterator	it;
	std::map<time_t, float>::iterator	ite = this->db.end();

	for ( it = this->db.begin(); it != ite; ++it ) 
		std::cout << it->first << " " << it->second << std::endl;
}

void	BitcoinExchange::printExchangedValues( std::fstream & file ) const {
	
	char		line[256];
	int			i = 0;
	time_t		date;

	while ( !file.eof() ) {
		file.getline( line, 256 );
		std::string l( line );
		if ( l.empty() )
			continue;
		if ( i == 0 && l == "date | value" )
			continue;
		try {
			date = 0;
			parseLine( l, &date );
			printLine( l, date );
		} catch( std::exception &e ) {
			std::cout << "Error: " << e.what() << std::endl;
		}
		l.clear();
		i++;
	}
}

void	BitcoinExchange::parseLine( std::string const & l, time_t * date ) const {
	if ( l.length() < 13 || l.at(10) != ' ' || l.at(11) != '|' || l.at(12) != ' ' )
		throw BadInputException( l );
	if ( invalidFloat( l.substr( 13, l.length() -1 )))
		throw BadInputException( l );
	if ( invalidDate( l.substr( 0, 10 ), date))
		throw InvalidDateException( l.substr( 0, 10 ) );
}

void	BitcoinExchange::printLine( std::string const & l, time_t date ) const {
	
	std::string	year( l.substr( 0 , 4 ));
	std::string	month( l.substr( 5, 2 ));
	std::string	day( l.substr( 8, 2 ));
	std::string	v( l.substr( 13, l.length() -1 ));

	float		value = atof( v.c_str());

	if ( value <= 0 )
		throw NotPositiveNumberException();
	if ( value >= 1000 )
		throw TooLargeNumberException();

	std::map<time_t, float>::const_iterator	it = this->db.lower_bound( date );
	if ( it->first > date )
		it--;
	std::cout << year << "-" << month << "-" << day << " => " << value << " = " << value * it->second << std::endl;
	
}

BitcoinExchange::BadInputException::BadInputException( std::string const & arg ) : arg( arg ) {}

BitcoinExchange::BadInputException::~BadInputException() throw() {}

const char *	BitcoinExchange::BadInputException::what() const throw() {
	std::cout << "bad input => ";
	return  this->arg.c_str();
}

BitcoinExchange::InvalidDateException::InvalidDateException( std::string const & arg ) : arg( arg ) {}

BitcoinExchange::InvalidDateException::~InvalidDateException() throw() {}

const char *	BitcoinExchange::InvalidDateException::what() const throw() {
	std::cout << "invalid date  => ";
	return  this->arg.c_str();
}

const char *	BitcoinExchange::NotPositiveNumberException::what() const throw() {
	return "not a positive number.";
}

const char *	BitcoinExchange::TooLargeNumberException::what() const throw() {
	return "too large number.";
}

const char *	BitcoinExchange::InvalidFileException::what() const throw() {
	return "cannot open file.";
}
