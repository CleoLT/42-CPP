/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:27:12 by cle-tron          #+#    #+#             */
/*   Updated: 2025/04/09 18:23:56 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>
#include <iostream>

int main() {

	std::list<int> lst;

	lst.push_back(88);
	lst.push_back(4);
	lst.push_back(68);
	lst.push_back(99);
	lst.push_back(80);
	lst.push_back(9);

	try {
		std::cout << *easyfind( lst, 80 ) << std::endl;
		std::cout << *easyfind( lst, -3 ) << std::endl;
	} catch ( std::exception & e ) {
		std::cout <<  e.what() << std::endl;
	}

	std::cout << std::endl;

	std::vector<int> vec( lst.begin(), lst.end() );
	
	try {
		std::cout << *easyfind( vec, 9 ) << std::endl;
		std::cout << *easyfind( vec, 89 ) << std::endl;
	} catch ( std::exception & e ) {
		std::cout <<  e.what() << std::endl;
	}


	return 0;
}
