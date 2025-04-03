/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 17:30:14 by cle-tron          #+#    #+#             */
/*   Updated: 2025/04/03 18:48:01 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template<typename T>
void	increment( T & num ) {
	num++;
}

int	main() {
	int	nums[6] = { 1, 3, 6, 8, 9, 99 };

	::iter( nums, 6, print<int> );
	std::cout << std::endl;
	::iter( nums, sizeof(nums) / sizeof(nums[0]), increment<int> );  
	::iter( nums, 6, print<int> );
	std::cout << std::endl;

	//tests con otros tipos de array!!!



	return 0;
}
