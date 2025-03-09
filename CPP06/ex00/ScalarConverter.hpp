/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 12:45:43 by cle-tron          #+#    #+#             */
/*   Updated: 2025/03/09 13:10:02 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>

class	ScalarConverter {
private:	
	ScalarConverter( void );
	ScalarConverter( ScalarConverter const & src );
	~ScalarConverter( void );

	ScalarConverter &	operator=( ScalarConverter const & rhs );

private:
	static void	convert( std::string const & input );
};

#endif
