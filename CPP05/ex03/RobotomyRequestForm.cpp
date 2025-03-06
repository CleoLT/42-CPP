/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:29:53 by cle-tron          #+#    #+#             */
/*   Updated: 2025/03/06 15:06:57 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) 
	: AForm( "Robotomy Request", "default_target", 72, 45 ) {}

RobotomyRequestForm::RobotomyRequestForm( std::string target )
	: AForm( "Robotomy Request", target, 72, 45 ) {}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src )
	: AForm( src ) {}

RobotomyRequestForm::~RobotomyRequestForm( void ) {}

RobotomyRequestForm &	RobotomyRequestForm::operator=
	( RobotomyRequestForm const & rhs ) {
	if ( this != &rhs ) {
		this->isSigned = rhs.isSigned;
	}
	return *this;
}

void	RobotomyRequestForm::executeSpecificForm( void ) const {
	srand( time( NULL ) );
	
	if( rand() % 2 == 0 ) {
		std::cout << this->target << " has been robotomized successfully";
		std::cout << std::endl;
	}
	else
		std::cout << "The robotomy failed" << std::endl;
}
