/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 12:06:36 by cle-tron          #+#    #+#             */
/*   Updated: 2025/04/21 13:52:12 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

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

void	printExchangedValues( std::fstream const & file ) const {
	


}

