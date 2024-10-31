/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:07:04 by cle-tron          #+#    #+#             */
/*   Updated: 2024/10/31 18:35:05 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myphonebook.hpp"

PhoneBook::PhoneBook(void) {
	this->size = 0;
}

PhoneBook::~PhoneBook(void) {
}

int	PhoneBook::get_size_contact(void) {
	return this->size;
}

void	PhoneBook::add_contact(int index) {
	std::string	first_name = get_input_loop("First name: ");
	std::string last_name = get_input_loop("Last name: ");
	std::string nickname = get_input_loop("Nickname: ");
	std::string phone_num = get_input_loop("Phone number: ");
	std::string secret = get_input_loop("Darkest secret: ");
	this->contact[index].set_data(first_name, last_name, nickname, phone_num, secret);
	if (this->size < 8)
		this->size++;
}

void	PhoneBook::print_contact(int index) {
	std::cout << "First name: " << this->contact[index].get_first_name();
	std::cout << std::endl;
	std::cout << "Last name: " << this->contact[index].get_last_name();
	std::cout << std::endl;
	std::cout << "Nickname: " << this->contact[index].get_nickname();
	std::cout << std::endl;
	std::cout << "Phone number: " << this->contact[index].get_phone_num();
	std::cout << std::endl;
	std::cout << "Darkest secret: " << this->contact[index].get_secret();
	std::cout << std::endl;
}

void	PhoneBook::display_contacts() {
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	for (int index = 0; index < this->size; index++)
	{
		std::cout << "|" << std::setw(10) << index << "|";
		print_10_char(this->contact[index].get_first_name());
		print_10_char(this->contact[index].get_last_name());
		print_10_char(this->contact[index].get_nickname());
		std::cout << std::endl;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
}
