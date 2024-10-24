/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:48:06 by cle-tron          #+#    #+#             */
/*   Updated: 2024/10/24 18:29:31 by cle-tron         ###   ########.fr       */
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

int	main()
{
	PhoneBook	phonebook;
	std::string	input;

	std::cout << "Welcome to your phonebook!" << std::endl;
	std::cout << "This program only accepts ADD, SEARCH and EXIT commands." <<std::endl;
	while (1) 
	{
		//std::getline(std::cin, input);
		input = get_input("> ");
		if (input.compare("ADD") == 0)
			phonebook.add_contact();
		else if (input.compare("SEARCH") == 0)
			std::cout << "you type " << input << std::endl;
		else if (input.compare("EXIT") == 0)
		{
			std::cout << "Goodbye!" << std::endl;
			break;
		}
		else if (input.length() > 0)
			std::cerr << "Error: '" << input << "': invalid input. You must type ADD, SEARCH or EXIT." << std::endl;
	}
	return 0;
}
