/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 12:06:24 by cle-tron          #+#    #+#             */
/*   Updated: 2025/05/07 15:15:09 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
//#include <exception>

int	main( int argc, char **argv ) {
	if ( argc != 2 ) {
		std::cerr << "Error: could not open file." << std::endl;
		return 1;
	}

	try {
		BitcoinExchange	btc( "data.csv" );
		std::fstream	fs( argv[1], std::fstream::in ); // open and close automatical in this scope

		if ( !fs.is_open() ) {
			std::cerr << "Error: could not open file" << std::endl;
			return 2;
		}
		btc.printExchangedValues( fs );
	} catch( std::exception &e ) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	return 0;
}
