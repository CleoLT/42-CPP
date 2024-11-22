/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:11:26 by cle-tron          #+#    #+#             */
/*   Updated: 2024/11/22 13:01:34 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main( void ) {
	Harl	harl;

	std::cout << "harl.complain('DEBUG');" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;
	std::cout << "harl.complain('INFO');" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;
	std::cout << "harl.complain('WARNING');" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;
	std::cout << "harl.complain('ERROR');" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;
	std::cout << "harl.complain('RANDOM');" << std::endl;
	harl.complain("RANDOM");
	return 0;
}
