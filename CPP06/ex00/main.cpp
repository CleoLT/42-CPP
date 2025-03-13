/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 13:23:40 by cle-tron          #+#    #+#             */
/*   Updated: 2025/03/12 14:25:30 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

#include <iostream>

int	main( int argc, char **argv ) {
	if ( argc != 2 ) {
		std::cout << "Converter needs one parameter, try again!" << std::endl;
		return 1;
	}
	ScalarConverter::convert( argv[1] );
	return 0;
}

