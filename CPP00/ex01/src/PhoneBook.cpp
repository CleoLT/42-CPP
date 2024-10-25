/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:07:04 by cle-tron          #+#    #+#             */
/*   Updated: 2024/10/25 14:51:19 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myphonebook.hpp"

PhoneBook::PhoneBook(void) {
}

//PhoneBook::~PhoneBook(void) {
//}

void	PhoneBook::add_contact() {
	std::string	first_name = get_input("First name: ");
	std::string last_name = get_input("Last name: ");
	std::string nickname = get_input("Nickname: ");
	std::string phone_num = get_input("Phone number: ");
	std::string secret = get_input("Darkest secret: ");
	this->contact[0].set_data(first_name, last_name, nickname, phone_num, secret);
}

void	PhoneBook::print_contact(int index) {
	std::cout << "First name: " << this->contact[index].get_first_name() << std::endl;
	std::cout << "Last name: " << this->contact[index].get_last_name() << std::endl;
	std::cout << "Nickname: " << this->contact[index].get_nickname() << std::endl;
}
