/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:40:39 by cle-tron          #+#    #+#             */
/*   Updated: 2025/05/24 15:45:00 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>

int main( int argc, char * argv[] ) {
	if ( argc < 3 ) {
		std::cout << "You must enter at least 2 numbers" << std::endl;
		return 1;
	}

	try {
		PmergeMe	algo( argv );
	} catch ( std::exception & e ) {
		std::cout << "Error: " << e.what() << std::endl;
	}


	return 0;
}
		
