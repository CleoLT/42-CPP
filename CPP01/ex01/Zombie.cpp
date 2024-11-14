/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:57:12 by cle-tron          #+#    #+#             */
/*   Updated: 2024/11/14 14:04:58 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie( std::string str ) : name(str) {
	std::cout << this->name << " created" << std::endl;
}

Zombie::Zombie( void ) { 
	std::cout << "zombie created" << std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << this->name << " destroyed" << std::endl;
}

void	Zombie::setName( std::string name ) {
	this->name = name;
}

void	Zombie::announce( void ) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
