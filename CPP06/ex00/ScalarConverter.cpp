/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 12:59:16 by cle-tron          #+#    #+#             */
/*   Updated: 2025/03/09 13:10:02 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void ) {}

ScalarConverter::ScalarConverter( ScalarConverter const & src ) {
	*this = src;
}

ScalarConverter::~ScalarConverter( void ) {}

ScalarConverter &	ScalarConverter::operator=( ScalarConverter const & rhs ) {
	(void)rhs;
	return *this;
}


