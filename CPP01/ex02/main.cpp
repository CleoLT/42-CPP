/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:13:29 by cle-tron          #+#    #+#             */
/*   Updated: 2024/11/14 14:25:34 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>

int	main ( void ) {
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "string address:		" << &string << std::endl;
	std::cout << "stringPTR address:	" << &stringPTR << std::endl;
	std::cout << "stringREF address:	" << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "string value:			" << string << std::endl;
	std::cout << "stringPTR value pointed to:	" << *stringPTR << std::endl;
	std::cout << "stringREF value pointed to:	" << stringREF << std::endl;
}
