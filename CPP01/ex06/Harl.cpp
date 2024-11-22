/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:11:40 by cle-tron          #+#    #+#             */
/*   Updated: 2024/11/22 14:51:39 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

Harl::Harl( void ) { }

Harl::~Harl( void ) { }

void	Harl::debug( void ) {
	std::cout << "debug level 1" << std::endl;
}

void	Harl::info( void ) {
	std::cout << "info level 2" << std::endl;
}

void	Harl::warning( void ) {
	std::cout << "warning level 3" << std::endl;
}

void	Harl::error( void ) {
	std::cout << "error level 4" << std::endl;
}

void	Harl::setLevel( std::string level ) {
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++) {
		if (level == levels[i]) {
			this->level = i + 1;
			return;
		}
	}
	this->level = 0;
}

void	Harl::complain( std::string level ) {
	setLevel(level);
	switch (this->level) {
		case DEBUG:
			debug();
		case INFO:
			info();
		case WARNING:
			warning();
		case ERROR:
			error();
			break;
		default:
			std::cout << "Invalid level, try again!" << std::endl;
			return;
	}
}
