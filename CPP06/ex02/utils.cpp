/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 17:10:22 by cle-tron          #+#    #+#             */
/*   Updated: 2025/03/26 17:52:23 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

Base *	generate( void ) {
	std::srand( std::time( 0 ));
	
	int	random = std::rand() % 3;
	
	if ( random == 0 )
		return new A();
	else if ( random == 1 )
		return new B();
	else
		return new C();
}

void	identify( Base * p ) {
	if ( dynamic_cast<A*>( p ))
		std::cout << "point to A object" << std::endl;
	if ( dynamic_cast<B*>( p ))
		std::cout << "point to B object" << std::endl;
	if ( dynamic_cast<C*>( p ))
		std::cout << "point to C object" << std::endl;
}

void	identify( Base & p ) {
	try {
		dynamic_cast<A&>( p );
		std::cout << "reference to A object" <<std::endl;
	}
	catch (std::exception &e ) {}
	try {
		dynamic_cast<B&>( p );
		std::cout << "reference to B object" <<std::endl;
	}
	catch (std::exception &e ) {}
	try {
		dynamic_cast<C&>( p );
		std::cout << "reference to C object" <<std::endl;
	}
	catch (std::exception &e ) {}
}
