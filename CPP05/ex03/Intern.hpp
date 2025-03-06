/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 16:29:00 by cle-tron          #+#    #+#             */
/*   Updated: 2025/03/06 18:14:03 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <exception>

class	AForm;

class	Intern {
private:
	AForm*	makeShrubberyForm( std::string target );
	AForm*	makeRobotomyForm( std::string target );
	AForm*	makePresidencialForm( std::string target);

public:
	Intern( void );
	Intern( Intern const & src );
	~Intern( void );

	Intern &	operator=( Intern const & rhs );

	AForm*	makeForm( std::string name, std::string target );

	class	WrongNameException : public std::exception {
	public:
		virtual const char *	what( void ) const throw();
	};

};

#endif
