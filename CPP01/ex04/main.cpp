/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:38:22 by cle-tron          #+#    #+#             */
/*   Updated: 2024/11/21 15:17:01 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplace.hpp"
#include <iostream>

int	main( int argc, char** argv ) {
	if (argc != 4) {
		std::cerr << "this program needs 3 parameters, try again!" << std::endl;
		return 1;
	}
	if (argv[2][0] == '\0') {
		std::cerr << "s1 string cannot be an empty string, try again!";
		std::cerr << std::endl;
		return 1;
	}
	
	FileReplace	fr(argv[1], argv[2], argv[3]);
	if (fr.checkInputFile() == false)
		return 1;
	if (fr.openOutputFile() == false)
	{
		fr.closeIfs();
		return 1;
	}
	fr.copyAndReplaceContent();
	fr.closeIfs();
	fr.closeOfs();
}
