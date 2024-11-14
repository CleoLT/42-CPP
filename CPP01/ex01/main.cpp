/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:55:43 by cle-tron          #+#    #+#             */
/*   Updated: 2024/11/14 14:04:48 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"
#include <string>
#include <sstream>

Zombie*	zombieHorde( int N, std::string name );

int	main ( void ) {
	int					size = 12;
	std::stringstream	ss;
	std::string			rename;
	Zombie*				horde = zombieHorde( size, "default name" );

	for( int i = 0; i < size; i++ )
		horde[i].announce();
	for( int i = 0; i < size; i ++) {
		ss << i;
		rename = "Zom" + ss.str();
		ss.str("");
		horde[i].setName(rename);
		horde[i].announce();
	}
	delete [] horde;
	return 0;
}
