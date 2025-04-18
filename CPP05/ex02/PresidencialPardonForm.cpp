/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidencialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:31:00 by cle-tron          #+#    #+#             */
/*   Updated: 2025/03/09 11:52:25 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "PresidencialPardonForm.hpp"

PresidencialPardonForm::PresidencialPardonForm( void ) 
	: AForm( "Presidencial Pardon", "default_target", 25, 5 ) {}

PresidencialPardonForm::PresidencialPardonForm( std::string target )
	: AForm( "Presidencial Pardon", target, 25, 5 ) {}

PresidencialPardonForm::PresidencialPardonForm
	( PresidencialPardonForm const & src ) : AForm( src ) {}

PresidencialPardonForm::~PresidencialPardonForm( void ) {}

PresidencialPardonForm &	PresidencialPardonForm::operator=
	( PresidencialPardonForm const & rhs ) {
	if ( this != &rhs ) {
		this->isSigned = rhs.isSigned;
	}
	return *this;
}

void	PresidencialPardonForm::execute( Bureaucrat const & b ) const {
	try {
		this->checkIsSignedAndGrade( b );
		std::cout << this->target << " has been pardoned by Zaphod Beeblebrox";
		std::cout << std::endl;
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
}
