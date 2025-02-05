/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:57:50 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/05 19:18:55 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class	Animal {
protected:
	std::string	type;

public:
	Animal( void );
	Animal( const Animal & src );
	virtual ~Animal( void );

	Animal & operator=( const Animal & rhs );

	std::string	getType( void ) const;	
	virtual void		makeSound( void ) const;
};

#endif
