/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:29:45 by cle-tron          #+#    #+#             */
/*   Updated: 2025/03/09 11:52:25 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include "ShrubberyCreationForm.hpp" 

ShrubberyCreationForm::ShrubberyCreationForm( void )
	: AForm( "Shrubbery Creation", "default_target", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm( std::string str )
	: AForm( "Shrubbery Creation", str, 145, 137 ) {}

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

void	ShrubberyCreationForm::execute( Bureaucrat const & b ) const {
	try {
		this->checkIsSignedAndGrade( b );
	
		std::ofstream	file;
		std::string		name = this->target + "_shrubbery";

		file.open( name.c_str(), std::ofstream::out | std::ofstream::trunc);
		file << "       /\\" << std::endl;
		file <<	"      /  \\" << std::endl;
		file << "     /    \\" << std::endl;
		file <<	"    /      \\" << std::endl;
		file << "   /        \\" << std::endl;
		file <<	"  /          \\" << std::endl;
		file << " /            \\" << std::endl;
		file <<	"/              \\" << std::endl;
		file <<	"- - - - - - - - -" << std::endl;
		file << "       ||" << std::endl;
		file << "       ||" << std::endl;
		file.close();
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
}

