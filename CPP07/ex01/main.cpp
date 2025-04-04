/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 17:30:14 by cle-tron          #+#    #+#             */
/*   Updated: 2025/04/04 14:34:54 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"


int	main() {
	int	nums[6] = { 1, 3, 6, 8, 9, 99 };

	::iter( nums, 6, print<int> );
	std::cout << std::endl;
	::iter( nums, sizeof(nums) / sizeof(nums[0]), increment<int> );  
	::iter( nums, 6, print<int> );
	std::cout << std::endl << std::endl;


	double	d[] = { -4.2, 0.0, -2.11, 4.44 };

	::iter( d, sizeof(d) / sizeof(d[0]), print<double> );
	std::cout << std::endl;
	::iter( d, sizeof(d) / sizeof(d[0]), increment<double> );  
	::iter( d, sizeof(d) / sizeof(d[0]), print<double> );
	std::cout << std::endl << std::endl;


	std::string	str[] = { "soy", "un", "array", "de", "strings", "" };

	::iter( str, sizeof(str) / sizeof(str[0]), print<std::string> );
	std::cout << std::endl;
	::iter( str, sizeof(str) / sizeof(str[0]), initials<std::string> );  
	::iter( str, sizeof(str) / sizeof(str[0]), print<std::string> );
	std::cout << std::endl << std::endl;


	return 0;
}
