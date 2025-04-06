/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:41:31 by cle-tron          #+#    #+#             */
/*   Updated: 2025/04/06 13:32:55 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include "Array.hpp"

int main() {
/*	int *	a = new int();
	for ( int i = 0; i < 5; i++ )
		a[i] = i; //std::endl;
	for ( int i = 0; i < 5; i++ ) {
		std::cout << *a << " "; //std::endl;
		a++;
	}

	std::cout << std::endl;
*/
{
	Array<int> array( 5 );
	
	try {
		int count = 500;
		for ( int i = 0; i < 5; i++ ) {
			array[i] = count;
			count -= 100;
		}
		for ( int i = 0; i < 5; i++ ) 
			std::cout << array[i] << " ";
		std::cout << std::endl;
	} catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
}
{ 
	try {

		Array<std::string>	array( 5 );

		std::string	tmp[ array.size() ] = { "soy", "un", "array", "!", "!" };
		for ( int i = 0; i < 5; i++ ) 
			array[i] = tmp[i];
		for ( int i = 0; i < 5; i++ ) 
			std::cout << array[i] << " ";
		std::cout << std::endl;

		Array<std::string>	copy( array );
		copy[2] = "ARRAY";
		for ( int i = 0; i < 5; i++ ) 
			std::cout << copy[i] << " ";
		std::cout << std::endl;

		for ( int i = 0; i < 5; i++ ) 
			std::cout << array[i] << " ";
		std::cout << std::endl;

	} catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	} 
}
	return 0;
}
