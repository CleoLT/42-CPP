/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 17:11:31 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/26 18:10:42 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

Form::Form( void ) : name( "default" ), isSigned( false ),
					 signGrade( 50 ), execGrade( 100 ) {
	return;
}

Form::Form( std::string const str, int const n1, int const n2 ) : name( str ),
															isSigned( false ),
															signGrade( n1 ),
															execGrade( n2 ) {
	return;
}
		
Form::Form( Form const & src ) : name( src.name ), signGrade( src.signGrade ),
								 execGrade( src.execGrade ) {
	*this = src;
	return;
}

Form::~Form( void ) {
	return;
}

Form &	Form::operator=( Form const & rhs ) {
	if( this != &rhs ) {
		this->isSigned = rhs.isSigned;
	}
	return *this;
}

std::string const	Form::getName( void ) const {
	return this->name;
}

bool	Form::getIsSigned( void ) const {
	return this->isSigned;
}

int	Form::getSignGrade( void ) const {
	return this->signGrade;
}

int	Form::getExecGrade( void ) const {
	return this->execGrade;
}

void	Form::beSigned( Bureaucrat const & b ) {
	if( this->isSigned ) {
		std::cout << "This " << this->name << " form is already signed!";
		std::cout << std::endl;
		return;
	}
	if( this->signGrade >= b.getGrade() ) {
		this->isSigned = true;
		std::cout << b.getName() << " signed " << this->name << " form";
		std::cout << std::endl;
	}
	if( this->isSigned == false ) {
		std::cout << b.getName() << " couldn't sign " << this->name;
		std::cout << " because ";
		throw GradeTooLowException();
		std::cout << std::endl;
	}
}

const char *	Form::GradeTooLowException::what( void ) const throw() {
	return "grade too low!";
}

const char *	Form::GradeTooHighException::what( void ) const throw() {
	return "grade too high!";
}

std::ostream &	operator<<( std::ostream & o, Form const & form ) {
	o << form.getName() << " form is ";
	if( !form.getIsSigned() )
		o << "not ";
	o << "signed, sign grade: " << form.getSignGrade();
	o << ", execution grade: " << form.getExecGrade() << std::endl;
	return o;
}
	
