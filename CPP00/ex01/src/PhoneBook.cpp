/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:07:04 by cle-tron          #+#    #+#             */
/*   Updated: 2024/10/24 17:45:22 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myphonebook.hpp"

PhoneBook::PhoneBook(void) {
}

//PhoneBook::~PhoneBook(void) {
//}

void PhoneBook::add_contact() {
	std::string	name;

	std::cout << "Enter a name: " << std::endl;
	std::getline(std::cin, name);
	std::cout << "You enter " << name << std::endl;
}
