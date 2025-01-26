/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:51:12 by cle-tron          #+#    #+#             */
/*   Updated: 2025/01/26 14:07:24 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main( void ) {
	FragTrap	jammie( "Jammie" );
	FragTrap	x( jammie );
	FragTrap	a( "Jinks" );
	FragTrap	b;
	int			i = 0;
	b = a;

	jammie.attack( "alguien" );
	jammie.takeDamage( 107 );
	jammie.beRepaired( 3 );
	
	while ( i < 101 )
	{
		a.attack( "somebody" );
		i++;
	}
	b.takeDamage( 5 );
	b.beRepaired( 5 );
	x.takeDamage( 34 );
	x.highFivesGuys();
	x.beRepaired( 34 );
}
