/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:40:44 by cle-tron          #+#    #+#             */
/*   Updated: 2025/03/09 11:35:02 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class	AForm;


class	Bureaucrat {
private:
	std::string const	name;
	int					grade;

public:
	Bureaucrat( void );
	Bureaucrat( std::string const name, int grade );
	Bureaucrat( Bureaucrat const & src );
	~Bureaucrat( void );

	Bureaucrat &	operator=( Bureaucrat const & rhs );

	std::string	getName( void ) const;
	int			getGrade( void ) const;

	void	incrementGrade( void );
	void	decrementGrade( void );
	void	signForm( AForm & form ) const;
	void	executeForm( AForm const & form ) const;

	class	GradeTooHighException : public std::exception {
	public:
		virtual const char*	what() const throw();
	};

	class	GradeTooLowException : public std::exception {
	public:
		virtual const char*	what() const throw();
	};
};

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & rhs );

#endif
