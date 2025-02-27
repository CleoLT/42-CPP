/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:29:45 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/27 18:34:04 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ShrubberyCreationForm.hpp" 

ShrubberyCreationForm::ShrubberyCreationForm( void )
	: AForm( "Shrubbery creation", "default target", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm( std::string str )
	: AForm( "Shrubbery creation", str, 145, 137 ) {}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &src )
	: AForm( src ) {}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=
( ShrubberyCreationForm const & rhs ) {
	if( this != &rhs ) {
		this->isSigned = rhs.isSigned;
	}
	return *this;
}

void	ShrubberyCreationForm::executeSpecificForm( void ) const {
	std::cout << "execute specific Shrubbery form" << std::endl;
	//create file with ascii trees
}

