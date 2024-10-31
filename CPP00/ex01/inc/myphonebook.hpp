/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myphonebook.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:28:33 by cle-tron          #+#    #+#             */
/*   Updated: 2024/10/31 18:34:50 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYPHONEBOOK_HPP
# define MYPHONEBOOK_HPP

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <iomanip>

#include <stdlib.h>

#include "PhoneBook.hpp"
#include "Contact.hpp"

std::string	get_input(std::string type);
std::string	get_input_loop(std::string type);
void		print_10_char(std::string value);

#endif
