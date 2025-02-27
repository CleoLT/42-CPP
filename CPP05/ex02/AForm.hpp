/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 17:11:26 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/27 18:35:39 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>

class Bureaucrat;

class	AForm {
protected:
	std::string const	name;
	std::string const	target;
	bool				isSigned;
	int	const			signGrade;
	int	const			execGrade;

public:
	AForm( void );
	AForm( std::string const name, std::string const target, 
		   int const signGrade, int execGrade );
	AForm( AForm const & src );
	virtual ~AForm( void );

	AForm &	operator=( AForm const & rhs );

	std::string const	getName( void ) const;
	bool				getIsSigned( void ) const;
	int					getSignGrade( void ) const;
	int					getExecGrade( void ) const;

	void			beSigned( Bureaucrat const & bureaucrat );
	void			execute( Bureaucrat const & executor ) const;
	virtual void	executeSpecificForm( void ) const = 0;	

	class	GradeTooHighException : public std::exception {
	public:
		virtual const char *	what( void ) const throw();
	};

	class	GradeTooLowException : public std::exception {
	public:
		virtual const char *	what( void ) const throw();
	};
};

std::ostream &	operator<<( std::ostream & o, AForm const & rhs );

#endif
