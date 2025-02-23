/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:40:06 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/23 16:51:52 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void ) {

try	{
	Bureaucrat	random = Bureaucrat();

	std::cout << random;
	random.incrementGrade();
	std::cout << random;
	random.decrementGrade();
	std::cout << random;
	random.decrementGrade();
}
catch ( std::exception & e ) {
	std::cout << e.what() << std::endl;
}

try {
	Bureaucrat	tommy = Bureaucrat( "Tommy", 1 );
	std::cout << tommy;
	tommy.decrementGrade();
	std::cout << tommy;
	tommy.incrementGrade();
	std::cout << tommy;
	tommy.incrementGrade();
}
catch ( std::exception & e ) {
	std::cout<< e.what() << std::endl;
}

try {
	Bureaucrat*	kiki = new Bureaucrat( "Kiki", 179 );
	std::cout << kiki;
}
catch( std::exception & e ) {
	std::cout<< e.what() << std::endl;
}

try {
	Bureaucrat*	kiki = new Bureaucrat( "Kiki", -10 );
	std::cout << kiki;
}
catch( std::exception & e ) {
	std::cout<< e.what() << std::endl;
}

}
