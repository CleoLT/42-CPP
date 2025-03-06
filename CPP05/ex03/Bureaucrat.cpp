/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:40:49 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/27 18:25:24 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include <string>
#include <exception>

Bureaucrat::Bureaucrat( void ) : name( "default bureaucrat" ), grade( 150 ) {
	return;
}

Bureaucrat::Bureaucrat( std::string const str, int nb ) : name( str ) {
	if ( nb > 150 )
		throw GradeTooLowException();
	else if( nb < 1 )
		throw GradeTooHighException();
	else
		grade = nb;
	return;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ) : name( src.name ), 
												   grade( src.grade ) {
	return;
}

Bureaucrat::~Bureaucrat( void ) {
	return;
}

Bureaucrat &	Bureaucrat::operator=( Bureaucrat const & rhs ) {
	if( this != &rhs ) {
		this->grade = rhs.grade;
	}
	return *this;
}

std::string	Bureaucrat::getName( void ) const {
	return this->name;
}
int	Bureaucrat::getGrade( void ) const {
	return this->grade;
}

void	Bureaucrat::incrementGrade( void ) {
	if ( this->grade == 1 )
		throw GradeTooHighException();
	else
		this->grade--;
	return;
}

void	Bureaucrat::decrementGrade( void ) {
	if( this->grade == 150 )
		throw GradeTooLowException();
	else
		this->grade++;
	return;
}

void	Bureaucrat::signForm( AForm & form ) const {
	try {
		form.beSigned( *this );
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm( AForm & form ) const {
	try {
		form.execute( *this );
	}
	catch( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
}

const char*	Bureaucrat::GradeTooHighException::what( void ) const throw() {
	return "Grade Too High!";
}

const char*	Bureaucrat::GradeTooLowException::what( void ) const throw() {
	return "Grade Too Low!";
}

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & rhs ) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return o;
}
