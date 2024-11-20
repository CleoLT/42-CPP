/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:38:22 by cle-tron          #+#    #+#             */
/*   Updated: 2024/11/20 18:45:06 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplace.hpp"
#include <iostream>
#include <fstream>
#include <string>

int	main( int argc, char** argv ) {
	if ( argc != 4 ) {
		std::cerr << "this program needs 3 parameters, try again!" << std::endl;
		return 1;
	}

	FileReplace	fr(argv[1]);
	if ( fr.checkInputFile() == false )
		return 1;
	fr.copyInputFile();
	
	
}
