/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:57:50 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/07 14:41:15 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>

class	AAnimal {
protected:
	std::string	type;

public:
	AAnimal( void );
	AAnimal( const AAnimal & src );
	virtual ~AAnimal( void );

	AAnimal & operator=( const AAnimal & rhs );

	std::string		getType( void ) const;	
	virtual void	makeSound( void ) const = 0;
};

#endif
