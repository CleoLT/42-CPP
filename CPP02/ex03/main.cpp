/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:52:26 by cle-tron          #+#    #+#             */
/*   Updated: 2025/01/21 18:14:26 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

int	main( void ) {
	Point	a( 20.0f, 20.0f );
	Point	b( 20.0f, 40.0f );
	Point	c( 40.0f, 30.0f );
	Point	d( 20.53f, 32.1666f );
	Point	e( 20.0f, 30.8787f );
	Fixed	x;
	Fixed	y;
	int		i = 0;
	int		j = 0;

	while( x <= 50 )
	{
		y = 0;
		j = 0;
		while( y <= 50 )
		{
			Point point( x.toFloat(), y.toFloat() );
			if( bsp( a, b, c, point ) ) 				
				std::cout << "xx";
			else 
				std::cout<< "  ";
			j++;
			while ( y < j )
				y++;
		}
		i++;
		while ( x < i )
			x++;
		std::cout << "|" << std::endl;
	}
	if ( bsp( a, b, c, d) )
		std::cout << "YES" << std::endl;
	if ( bsp( a, b, c, e) )
		std::cout << "YES" << std::endl;
	return 0;
}
