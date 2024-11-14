/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:39:20 by cle-tron          #+#    #+#             */
/*   Updated: 2024/11/14 12:39:42 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie( std::string str ) : name( str ) {
}

Zombie::~Zombie( void ) {
	std::cout << "'" << this->name << "' destroyed" << std::endl;
}

void	Zombie::announce( void ) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
