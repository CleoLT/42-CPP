/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:51:12 by cle-tron          #+#    #+#             */
/*   Updated: 2025/01/24 13:13:31 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main( void ) {
	ClapTrap	jammie( "Jammie" );
	ClapTrap	random;
	ClapTrap	a( "Jinks" );
	ClapTrap	b = a;
	ClapTrap	x;

	int			i = 0;

	jammie.attack( "alguien" );
	jammie.takeDamage( 10 );
	jammie.beRepaired( 3 );
	
	while ( i < 12 )
	{
		random.attack( "somebody" );
		i++;
	}

	b.takeDamage( 5 );
	b.beRepaired( 5 );
	x = jammie;
	x.takeDamage( 40 );
}
