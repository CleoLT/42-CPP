/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:38:06 by cle-tron          #+#    #+#             */
/*   Updated: 2024/11/14 12:39:42 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

Zombie*	newZombie( std::string name );

void	randomChump( std::string name );

int	main( void ) {
	Zombie*	zom1 = newZombie("zomzom1");
	
	zom1->announce();
	randomChump("zom2");
	delete zom1;
	return 0;
}
