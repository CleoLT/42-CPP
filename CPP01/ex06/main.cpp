/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:11:26 by cle-tron          #+#    #+#             */
/*   Updated: 2024/11/24 14:27:26 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main( int argc, char **argv ) {	
	if (argc != 2) {
		std::cout << "wrong number of arguments, try again" << std::endl;
		return 1;
	}

	Harl	harl(argv[1]);
	
	harl.complain();
	return 0;
}
