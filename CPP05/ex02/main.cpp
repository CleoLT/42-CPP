/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:40:06 by cle-tron          #+#    #+#             */
/*   Updated: 2025/03/09 11:52:51 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidencialPardonForm.hpp"
#include "AForm.hpp"
#include <iostream>

int	main( void ) {

try	{
	Bureaucrat	random = Bureaucrat();
	AForm*		form = new ShrubberyCreationForm();

	std::cout << random << *form;	
	random.signForm( *form );
	delete form;
}
catch ( std::exception & e ) {
	std::cout << e.what() << std::endl;
}

std::cout << std::endl;

try {
	Bureaucrat	tommy = Bureaucrat( "Tommy", 137);
	AForm*		proc = new ShrubberyCreationForm( );

	std::cout << tommy << *proc;
	tommy.executeForm( *proc );	
	tommy.signForm( *proc );
	std::cout << *proc;
	tommy.signForm( *proc );
	tommy.executeForm( *proc );
	delete proc;
}
catch ( std::exception & e ) {
	std::cout<< e.what() << std::endl;
}

std::cout << std::endl;

try {
	Bureaucrat				kiki = Bureaucrat( "Kiki", 45 );
	RobotomyRequestForm*	form1 = new RobotomyRequestForm( "El Vecino" );
	AForm*					form2 = new RobotomyRequestForm( *form1 );

	std::cout << kiki << *form2;
	kiki.executeForm( *form2 );
//	std::cout << std::endl;
	kiki.signForm( *form2 );
//	std::cout << std::endl;
	std::cout << *form2;
//	std::cout << std::endl;
	kiki.executeForm( *form2 );
	kiki.executeForm( *form2 );
	kiki.executeForm( *form2 );
	kiki.executeForm( *form2 );
	delete form1;
	delete form2;
}
catch( std::exception & e ) {
	std::cout<< e.what() << std::endl;
}

std::cout << std::endl;;

try {
	Bureaucrat	kiki = Bureaucrat( "Kiki", 20 );
	AForm*		form = new PresidencialPardonForm();

	std::cout << kiki << *form;
	kiki.signForm( *form );
	std::cout << *form;
	kiki.executeForm( *form );
	kiki.executeForm( *form );
	delete form;
}
catch( std::exception & e ) {
	std::cout<< e.what() << std::endl;
}

}
