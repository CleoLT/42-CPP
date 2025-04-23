/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 12:06:29 by cle-tron          #+#    #+#             */
/*   Updated: 2025/04/23 17:28:21 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define	BITCOINEXCHANGE_HPP

#include <string>
#include <map>

class	BitcoinExchange {
private:
	std::map<std::string, int>	db;
	std::map<int, float>		input;

	void	parseLine( char * line ) const;

public:
	BitcoinExchange();
//	BitcoinExchange( std::string const & filename );
	BitcoinExchange( BitcoinExchange const & src );
	~BitcoinExchange();

	BitcoinExchange &	operator=( BitcoinExchange const & rhs );
	
	void	printExchangedValues( std::fstream & file ) const;
};

#endif
