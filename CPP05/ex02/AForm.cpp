/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 17:11:31 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/27 18:35:39 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

AForm::AForm( void )
	: name( "default form" ), target( "default target" ), isSigned( false ), 
	signGrade( 50 ), execGrade( 100 ) {
	return;
}

AForm::AForm( std::string const str1, std::string const str2, int const n1, 
int const n2 ) : name( str1 ), target( str2 ), isSigned( false ),
				 signGrade( n1 ), execGrade( n2 ) {
	//Lanzar excepciones si signGrade and execGrade no validos !!????
	// en el ex01 TAMBIEN!!???? 
	//y hacer los tests de iniciar forms con numeros invalidos con try catch en el main
	return;
}
		
AForm::AForm( AForm const & src ) 
	: name( src.name ), target( src.target ), signGrade( src.signGrade), 
	execGrade( src.execGrade ) {
	*this = src;
	return;
}

AForm::~AForm( void ) {
	return;
}

AForm &	AForm::operator=( AForm const & rhs ) {
	if( this != &rhs ) {
		this->isSigned = rhs.isSigned;
	}
	return *this;
}

std::string const	AForm::getName( void ) const {
	return this->name;
}

bool	AForm::getIsSigned( void ) const {
	return this->isSigned;
}

int	AForm::getSignGrade( void ) const {
	return this->signGrade;
}

int	AForm::getExecGrade( void ) const {
	return this->execGrade;
}

void	AForm::beSigned( Bureaucrat const & b ) {
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
		std::cout << " form because ";
		throw GradeTooLowException();
		std::cout << std::endl;
	}
}

void	AForm::execute( Bureaucrat const & b ) const {
	//Check if not signed!!!!
	/// cuidadoooooooo ne pas oublier 
	if( this->execGrade >= b.getGrade() ) {
		std::cout << b.getName() << " executed " << this->name << " form";
		std::cout << std::endl;
		this->executeSpecificForm();
	}
	else if( this->execGrade < b.getGrade() ) {
		std::cout << b.getName() << " couldn't execute " << this->name;
		std::cout << " form because ";
		throw GradeTooLowException();
		std::cout << std::endl;
	}
}

const char *	AForm::GradeTooLowException::what( void ) const throw() {
	return "grade too low!";
}

const char *	AForm::GradeTooHighException::what( void ) const throw() {
	return "grade too high!";
}

std::ostream &	operator<<( std::ostream & o, AForm const & form ) {
	o << form.getName() << " form is ";
	if( !form.getIsSigned() )
		o << "not ";
	o << "signed, sign grade: " << form.getSignGrade();
	o << ", execution grade: " << form.getExecGrade() << std::endl;
	return o;
}
