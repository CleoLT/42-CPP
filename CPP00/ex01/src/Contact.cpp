/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:28:44 by cle-tron          #+#    #+#             */
/*   Updated: 2024/10/25 14:13:20 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myphonebook.hpp"

Contact::Contact(void) {
}

void	Contact::set_data(std::string first_name, std::string last_name, std::string nickname, std::string phone_num, std::string secret) {
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_num = phone_num;
	this->secret = secret;
}

std::string	Contact::get_first_name(void) {
	return this->first_name;
}

std::string	Contact::get_last_name(void) {
	return this->last_name;
}

std::string	Contact::get_nickname(void) {
	return this->nickname;
}

std::string	Contact::get_phone_num(void) {
	return this->phone_num;
}

std::string	Contact::get_secret(void) {
	return this->secret;
}
