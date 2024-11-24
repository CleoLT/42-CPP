/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:11:40 by cle-tron          #+#    #+#             */
/*   Updated: 2024/11/24 14:27:26 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

Harl::Harl( std::string level ) : strLevel(level) { 
	setLevel();
	}

Harl::~Harl( void ) { }

void	Harl::debug( void ) {
	std::cout << "debug	level 1" << std::endl;
}

void	Harl::info( void ) {
	std::cout << "info	level 2" << std::endl;
}

void	Harl::warning( void ) {
	std::cout << "warning	level 3" << std::endl;
}

void	Harl::error( void ) {
	std::cout << "error	level 4" << std::endl;
}

void	Harl::setLevel( void ) {
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++) {
		if (this->strLevel == levels[i]) {
			this->intLevel = i + 1;
			return;
		}
	}
	this->intLevel = 0;
}

void	Harl::complain( void ) {
	switch (this->intLevel) {
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
