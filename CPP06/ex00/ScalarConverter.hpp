/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 12:45:43 by cle-tron          #+#    #+#             */
/*   Updated: 2025/03/20 16:25:33 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <exception>

enum	e_type {
//	INVALID	= 0,
	CHAR	= 1,
	INT		= 2,
	FLOAT	= 3,
	DOUBLE	= 4
};

class	ScalarConverter {
private:	
	ScalarConverter( void );
	ScalarConverter( ScalarConverter const & src );
	~ScalarConverter( void );

	ScalarConverter &	operator=( ScalarConverter const & rhs );

	
public:
	static void	convert( std::string const & input );

	class	InvalidArgumentException : public std::exception {
	public:
		virtual const char *	what( void ) const throw();
	};
};

e_type	parsing( std::string const & input );


#endif
