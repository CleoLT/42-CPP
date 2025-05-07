/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 12:06:29 by cle-tron          #+#    #+#             */
/*   Updated: 2025/05/07 17:17:39 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define	BITCOINEXCHANGE_HPP

#include <string>
#include <map>
#include <exception>
#include <ctime>

class	BitcoinExchange {
private:
	std::map<time_t, float>	db;

	void	parseLine( std::string const & l, time_t * date ) const;
	void	printLine( std::string const & l, time_t date) const;
	BitcoinExchange();

public:
	BitcoinExchange( char const * filename );
	BitcoinExchange( BitcoinExchange const & src );
	~BitcoinExchange();

	BitcoinExchange &	operator=( BitcoinExchange const & rhs );
	
	void	printExchangedValues( std::fstream & file ) const;
	void	printDataBase();

	class	BadInputException : public std::exception {
	private:
		std::string	arg;
	
	public:
		BadInputException( std::string const & arg );
		virtual	~BadInputException() throw();
		virtual const char *	what() const throw();
	};

	class	InvalidDateException : public std::exception {
	private:
		std::string	arg;
	
	public:
		InvalidDateException( std::string const & arg );
		virtual	~InvalidDateException() throw();
		virtual const char *	what() const throw();
	};


	class	NotPositiveNumberException : public std::exception {
	public:
		virtual const char *	what() const throw();
	};

	class	TooLargeNumberException : public std::exception {
	public:
		virtual const char *	what() const throw();
	};

	class	InvalidFileException : public std::exception {
	public:
		virtual const char *	what() const throw();
	};

};

bool	invalidDate( std::string const & d, time_t * date);
bool	invalidFloat( std::string const & f );

#endif
