/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:57:58 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/06 13:45:43 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include "Animal.hpp"

class	Dog : public Animal {
public:
	Dog( void );
	Dog( const Dog & src );
	virtual ~Dog( void );

	Dog & operator=( const Dog & rhs );

	virtual void	makeSound( void ) const;
};

#endif

