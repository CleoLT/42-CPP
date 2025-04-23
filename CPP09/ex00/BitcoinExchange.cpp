/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 12:06:36 by cle-tron          #+#    #+#             */
/*   Updated: 2025/04/23 17:28:21 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>

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
	
	char line[256];

	while ( !file.eof() ) {
		file.getline( line, 256 );
		parseLine( line );
		std::cout << line << std::endl;
	}
}

