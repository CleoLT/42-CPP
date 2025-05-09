/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 16:10:48 by cle-tron          #+#    #+#             */
/*   Updated: 2025/05/09 17:21:18 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>
#include <string>

bool	parse( std::string const & arg ) {
	std::string	s( arg );
	int			i = 0;

	std::string::iterator	it;
	std::string::iterator	ite = s.end();
	

	for ( it = s.begin(); it != ite; ++it ) {
		if ( s.at( i ) == ' ' ) {
			i++;
			continue;
		}
		if ( isdigit( s.at( i ) ) && s.at( i + 1 ) && s.at( i + 1 ) != ' ' )
			return true;
		if ( s.at( i ) == '+' || s.at( i ) == '-' || s.at( i ) == '*' || s.at( i ) == '/' )
			if ( s.at( i + 1 ) && s.at( i + 1 ) != ' ' )
				return true;
		i++;
	}


	return false;
}

int	main( int argc, char ** argv ) {
	if ( argc != 2 ) {
		std::cerr << "Error: RPN needs" << ( argc > 2 ? " only " : " ") <<  "one argument!" << std::endl;
		return 1;
	}


	if ( parse( argv[1] ) ){
		std::cerr << "Error: wrong argument!" << std::endl;
		return 1;
	}

	return 0;
}
