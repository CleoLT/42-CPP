/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:51:12 by cle-tron          #+#    #+#             */
/*   Updated: 2025/01/26 11:41:07 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
//#include <iostream>

int	main( void ) {
	ScavTrap	jammie( "Jammie" );
	ScavTrap	random;
	ScavTrap	x( jammie );
	ScavTrap	a( "Jinks" );
	ScavTrap	b;
	b = a;
	int			i = 0;

	jammie.attack( "alguien" );
	jammie.takeDamage( 107 );
	jammie.beRepaired( 3 );
	
	while ( i < 51 )
	{
		random.attack( "somebody" );
		i++;
	}
	b.takeDamage( 5 );
	b.beRepaired( 5 );
	x.takeDamage( 34 );
	x.guardGate();
	x.beRepaired( 34 );
}
