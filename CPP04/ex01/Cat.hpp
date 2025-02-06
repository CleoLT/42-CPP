/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:58:09 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/06 17:29:49 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class	Cat : public Animal {
private :
	Brain*	brain;

public :
	Cat( void );
	Cat( const Cat & src);
	virtual ~Cat( void );

	Cat &	operator=( const Cat & rhs );
	
	virtual void	makeSound( void ) const;
};

#endif

