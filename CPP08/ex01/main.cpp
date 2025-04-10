/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 16:48:00 by cle-tron          #+#    #+#             */
/*   Updated: 2025/04/10 17:43:41 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
{
	Span	def = Span();
	Span	sp1( def );
	Span	sp = Span(5);

	try {
		std::cout << sp.longestSpan() << std::endl;
	} catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}

	try {
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(788);
	} catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

{
	srand( time( 0 ));

	Span	sp = Span( 10000 );

	std::vector<int>	v;

	for ( int i = 0; i < 10000; i++ )
		v.push_back( rand() );
	
	sp.addNumber( v );
	sp.printContent();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;


}
	return 0;
}
