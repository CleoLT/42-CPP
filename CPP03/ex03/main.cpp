/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:51:12 by cle-tron          #+#    #+#             */
/*   Updated: 2025/01/29 19:27:24 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int	main( void ) {
//	DiamondTrap	jammie( "Jammie" );
//	//	DiamondTrap	a( "Jinks" );
	DiamondTrap	b;
	DiamondTrap	jammie( "Jammie" );
	DiamondTrap	x( jammie );
	
	std::cout << std::endl;
	b.takeDamage( 10 );
	b.beRepaired( 5 );
	b.attack( "Coco" );
	b.highFivesGuys();
	b.guardGate();
	b.whoAmI();
	
	std::cout << std::endl;
	jammie.attack( "alguien" );
	jammie.takeDamage( 107 );
	jammie.beRepaired( 3 );
	jammie.highFivesGuys();
	jammie.whoAmI();
	
	std::cout << std::endl;
	x.attack( "alguien" );
	x.takeDamage( 17 );
	x.beRepaired( 3 );
	x.highFivesGuys();
	x.whoAmI();

	std::cout << std::endl;
//	int			i = 0;
	//b = a;

//	jammie.attack( "alguien" );
//	jammie.takeDamage( 107 );
//	jammie.beRepaired( 3 );
	
/*	while ( i < 101 )
	{
		a.attack( "somebody" );
		i++;
	}*/
//	x.takeDamage( 34 );
//	b.highFivesGuys();
//	x.beRepaired( 34 );
}
