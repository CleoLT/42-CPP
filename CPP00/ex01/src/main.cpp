/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:48:06 by cle-tron          #+#    #+#             */
/*   Updated: 2024/10/31 17:16:45 by cle-tron         ###   ########.fr       */
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
	int			index = 0;
	int			input_id;

	std::cout << "Welcome to your phonebook!" << std::endl;
	std::cout << "This program only accepts ADD, SEARCH and EXIT commands." <<std::endl;
	while (1) 
	{
	//	std::getline(std::cin, input);
		input = get_input("\033[92m>>\033[0m ");
		if (input.compare("ADD") == 0)
		{
			phonebook.add_contact(index);
			if (index < 7)
				index++;
			else 
				index = 0;
		}
		else if (input.compare("SEARCH") == 0)
		{
			phonebook.display_contacts();
			std::cout << "Index: ";
			std::cin >> input_id;
			if (std::cin.fail() || input_id < 0 || input_id >= phonebook.get_size_contact())
			{
				std::cerr << "Error: invalid index." << std::endl;
				std::cin.clear();
				std::getline(std::cin, input);
				continue;
			}
			phonebook.print_contact(input_id);
			std::cin.clear();
			std::getline(std::cin, input);
		}
		else if (input.compare("EXIT") == 0)
		{
			std::cout << "Goodbye!" << std::endl;
			break;
		}
		else if (input.length() > 0)
			std::cerr << "Error: '" << input << "': invalid input. You must type ADD, SEARCH or EXIT." << std::endl;
	//	std::cout << "wtf "  << std::endl;
	}
	return 0;
}
