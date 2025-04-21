/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 12:06:24 by cle-tron          #+#    #+#             */
/*   Updated: 2025/04/21 12:20:37 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>

int	main( int argc, char **argv ) {
	if ( argc != 2 ) {
		std::cerr << "Error: could not open file." << std::endl;
		return 1;
	}
	std::cout << argv[1] << std::endl;
	return 0;
}
