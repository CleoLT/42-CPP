/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:40:06 by cle-tron          #+#    #+#             */
/*   Updated: 2025/03/06 15:57:52 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int	main( void ) {

try	{
	Bureaucrat	random = Bureaucrat();
	Form		form = Form();

	std::cout << random << form;	
	random.signForm( form );	
}
catch ( std::exception & e ) {
	std::cout << e.what() << std::endl;
}

std::cout << std::endl;

try {
	Bureaucrat	tommy = Bureaucrat( "Tommy", 1 );
	Form		proc = Form( "Procuration", 45, 70 );

	std::cout << tommy << proc;
	tommy.signForm( proc );
	std::cout << proc;
	tommy.signForm( proc );
}
catch ( std::exception & e ) {
	std::cout<< e.what() << std::endl;
}

std::cout << std::endl;

try {
	Bureaucrat	kiki = Bureaucrat( "Kiki", 45 );
	Form		form1 = Form( "Autorisation", 45, 100);
	Form		form2 = Form( form1 );

	std::cout << kiki << form2;
	kiki.signForm( form1 );
	kiki.decrementGrade();
	std::cout << form1 << kiki << form2;
	kiki.signForm( form2 );
}
catch( std::exception & e ) {
	std::cout<< e.what() << std::endl;
}

std::cout << std::endl;

try {
	Bureaucrat*	kiki = new Bureaucrat( "Kiki", -10 );
	std::cout << kiki;
}
catch( std::exception & e ) {
	std::cout << e.what() << std::endl;
}

std::cout << std::endl;

try  {
	Form*	form = new Form( "random_name", 50, 0 );
	std::cout << * form;
}
catch( std::exception & e ) {
	std::cout << e.what() << std::endl;
}

}
