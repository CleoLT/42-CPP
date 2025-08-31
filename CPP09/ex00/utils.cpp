/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:19:37 by cle-tron          #+#    #+#             */
/*   Updated: 2025/08/31 14:27:20 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <string>
#include <cstdlib>
#include <iostream>
#include <ctime>

time_t	makeFirstBitcoin() {
	std::tm t;
    t.tm_year = 2009 - 1900; 
    t.tm_mon  = 0;           
    t.tm_mday = 2;           
	t.tm_hour = 0;
    t.tm_min  = 0;
    t.tm_sec  = 0;
    t.tm_isdst = -1;        

    return std::mktime(&t);
}

bool	invalidDate( std::string const & l, time_t * date ) {
	int	num[] = { 0, 1, 2, 3, 5, 6, 8, 9 };

	for ( int i = 0; i < 8; i++ )
		if ( !isdigit( l.at( num[i] )))
			return true;

	if (  l.at(4) != '-' || l.at(7) != '-' )
		return true;

	time_t		current = std::time( NULL );
	time_t		first_bitcoin = makeFirstBitcoin();
	struct tm 	timeinfo;
	int			y = atoi( l.substr( 0, 4 ).c_str());
	int			m = atoi( l.substr( 5, 2 ).c_str());
	int			d = atoi( l.substr( 8, 2 ).c_str());

	timeinfo.tm_year = y - 1900;
	timeinfo.tm_mon = m - 1;
	timeinfo.tm_mday = d;
	timeinfo.tm_hour = 0;
    timeinfo.tm_min = 0;
    timeinfo.tm_sec = 0;
    timeinfo.tm_isdst = -1;   

	*date = mktime( &timeinfo );

	if ( *date == -1 || timeinfo.tm_year != y - 1900 || timeinfo.tm_mon != m - 1 || timeinfo.tm_mday != d )
		return true;

	if ( *date > current || *date < first_bitcoin )
		return true;

	return false;
}

bool	invalidFloat( std::string const & l ) {
	int			point = 0;
	std::string	tmp( l );
	
	if ( tmp.at( 0 ) == '+' && tmp.at( 1 ) != '-' )
		tmp.erase( 0, 1 );
	if ( tmp.at( 0 ) == '-' ) 
		tmp.erase( 0, 1 );
	for ( size_t i = 0; i < tmp.length(); i++) {
		if ( tmp.at( i )  == '.' )
			point++;
		else if ( !isdigit( tmp.at(i)))
			return true;
	}	
	if ( point > 1 || tmp.at( tmp.length() - 1 ) == '.' )
		return true;

	return false;
}
