/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:40:06 by cle-tron          #+#    #+#             */
/*   Updated: 2025/03/05 18:05:42 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include <iostream>

int	main( void ) {
// probar los operadores de copia de los concrete form
// probar instanciar un invalid Form, no se puede porque los grade son fijos ??
// y no se puede instanciar un AForm()
//pero entonces hacer manejo de errores en el ex01 si se intancia un form 
//con grade incorrecto
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
	Bureaucrat	tommy = Bureaucrat( "Tommy", 137);
	AForm*		proc = new ShrubberyCreationForm( );

	std::cout << tommy << *proc;
	tommy.executeForm( *proc );	
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
