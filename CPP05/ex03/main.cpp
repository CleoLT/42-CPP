/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:40:06 by cle-tron          #+#    #+#             */
/*   Updated: 2025/03/06 18:14:03 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidencialPardonForm.hpp"
#include "AForm.hpp"
#include <iostream>

int	main( void ) {

try	{
	Bureaucrat	felix = Bureaucrat( "Felix", 2 );
	AForm*		form;
	Intern		intern;

	form = intern.makeForm( "presidencial pardon", "bob" );
		std::cout << felix << *form;	
	felix.signForm( *form );
	felix.executeForm( *form );
	delete form;
}
catch ( std::exception & e ) {
	std::cout << e.what() << std::endl;
}

std::cout << std::endl;

try {
	AForm*		wrong_form;
	Intern		intern;
	
	wrong_form = intern.makeForm( "invalid name", "target" );
	std::cout << *wrong_form;
}
catch ( std::exception & e ) {
	std::cout<< e.what() << std::endl;
}

}
