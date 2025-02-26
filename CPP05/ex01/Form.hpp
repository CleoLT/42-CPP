/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 17:11:26 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/26 17:47:17 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>

class Bureaucrat;

class	Form {
private:
	std::string const	name;
	bool				isSigned;
	int	const			signGrade;
	int	const			execGrade;

public:
	Form( void );
	Form( std::string const name, int const signGrade, int execGrade );
	Form( Form const & src );
	~Form( void );

	Form &	operator=( Form const & rhs );

	std::string const	getName( void ) const;
	bool				getIsSigned( void ) const;
	int					getSignGrade( void ) const;
	int					getExecGrade( void ) const;

	void	beSigned( Bureaucrat const & bureaucrat );

	class	GradeTooHighException : public std::exception {
	public:
		virtual const char *	what( void ) const throw();
	};

	class	GradeTooLowException : public std::exception {
	public:
		virtual const char *	what( void ) const throw();
	};
};

std::ostream &	operator<<( std::ostream & o, Form const & rhs );

#endif
