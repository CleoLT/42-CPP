/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:32:23 by cle-tron          #+#    #+#             */
/*   Updated: 2024/10/31 18:35:05 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myphonebook.hpp"

std::string	get_input(std::string type)
{
	std::string	input;

	std::cout << type;
	std::getline(std::cin, input);
	return input;
}

std::string	get_input_loop(std::string type) {
	std::string	input;
	std::string	type_copy;

	type_copy = type;
	type_copy.erase(type.length()-2, 2);
	while (1)
	{
		input = get_input(type);
		if (input.length() > 0)
			return input;
		std::cout << "You must type a " << type_copy << std::endl;
	}
}

void	print_10_char(std::string value) {
	if (value.length() > 10)
	{
		value = value.substr(0, 9);
		value.push_back('.');
	}
	std::cout << std::setw(10) << value << "|";
}
