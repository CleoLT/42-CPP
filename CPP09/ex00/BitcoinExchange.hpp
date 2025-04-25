/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 12:06:29 by cle-tron          #+#    #+#             */
/*   Updated: 2025/04/25 17:05:44 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define	BITCOINEXCHANGE_HPP

#include <string>
#include <map>
#include <exception>

class	BitcoinExchange {
private:
	std::map<std::string, int>	db;
	std::map<int, float>		input;

	void	parseAndPrintLine( std::string l ) const;

public:
	BitcoinExchange();
//	BitcoinExchange( std::string const & filename );
	BitcoinExchange( BitcoinExchange const & src );
	~BitcoinExchange();

	BitcoinExchange &	operator=( BitcoinExchange const & rhs );
	
	void	printExchangedValues( std::fstream & file ) const;

	class	BadInputException : public std::exception {
	private:
		std::string	arg;
	public:
		BadInputException( std::string const & arg );
		virtual	~BadInputException() throw();
		virtual const char *	what() const throw();
	};

	class	NotPositiveNumberException : public std::exception {
	public:
		virtual const char *	what() const throw();
	};

};

#endif
