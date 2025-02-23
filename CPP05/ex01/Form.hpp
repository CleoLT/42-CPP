/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 17:11:26 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/23 17:28:29 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>

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
	~Form;

	Form &	Form::operator=( Form const & rhs );

	void	beSigned( Bureaucrat const & bureaucrat );
};

std::ostream &	operator<<( std::ostream & o, Form const & rhs );

#endif
