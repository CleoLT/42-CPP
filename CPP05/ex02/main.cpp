/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:40:06 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/27 18:29:52 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include <iostream>

int	main( void ) {

try	{
	Bureaucrat	random = Bureaucrat();
	AForm*		form = new ShrubberyCreationForm();

	std::cout << random << *form;	
	random.signForm( *form );	
}
catch ( std::exception & e ) {
	std::cout << e.what() << std::endl;
}

std::cout << std::endl;

try {
	Bureaucrat	tommy = Bureaucrat( "Tommy", 140 );
	AForm*		proc = new ShrubberyCreationForm( "home" );

	std::cout << tommy << *proc;
	tommy.signForm( *proc );
	std::cout << *proc;
	tommy.signForm( *proc );
	tommy.executeForm( *proc );	
}
catch ( std::exception & e ) {
	std::cout<< e.what() << std::endl;
}
/*
std::cout << std::endl;

try {
	Bureaucrat	kiki = Bureaucrat( "Kiki", 45 );
	AForm		form1 = AForm( "Autorisation", 45, 100);
	AForm		form2 = AForm( form1 );

	std::cout << kiki << form2;
	kiki.signForm( form1 );
	kiki.decrementGrade();
	std::cout << form1 << kiki << form2;
	kiki.signForm( form2 );
}
catch( std::exception & e ) {
	std::cout<< e.what() << std::endl;
}

std::cout << std::endl;;

try {
	Bureaucrat*	kiki = new Bureaucrat( "Kiki", -10 );
	std::cout << kiki;
}
catch( std::exception & e ) {
	std::cout<< e.what() << std::endl;
}
*/
}
