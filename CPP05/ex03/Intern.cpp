/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 16:29:03 by cle-tron          #+#    #+#             */
/*   Updated: 2025/03/06 18:14:34 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidencialPardonForm.hpp"
#include <string>
#include <iostream>

Intern::Intern( void ) {}

Intern::Intern( Intern const & src ) {
	*this = src;
}

Intern::~Intern( void ) {}

Intern &	Intern::operator=( Intern const & rhs ) {
	( void )rhs;
	return *this;
}

AForm*	Intern::makeShrubberyForm( std::string target ) {
	AForm*	form = new ShrubberyCreationForm( target );
	return form;
}

AForm*	Intern::makeRobotomyForm( std::string target ) {
	return new RobotomyRequestForm( target );
}

AForm*	Intern::makePresidencialForm( std::string target ) {
	return new PresidencialPardonForm( target );
}

AForm*	Intern::makeForm( std::string name, std::string target ) {
		const std::string	type[3] = 
		{ "shrubbery creation", "robotomy request", "presidencial pardon" };
		AForm*	(Intern::*f[3])( std::string type ) = 
		{ &Intern::makeShrubberyForm, &Intern::makeRobotomyForm, 
		&Intern::makePresidencialForm };

	for( int i = 0; i < 3; i++)
		if( name == type[i] ) {
			std::cout << "Intern creates " << type[i] << " form";
			std::cout << std::endl;
			return  (this->*f[i])( target );
		}
	throw WrongNameException();
	return NULL;
}

const char *	Intern::WrongNameException::what( void ) const throw() {
	return "Wrong form Name!";
}
