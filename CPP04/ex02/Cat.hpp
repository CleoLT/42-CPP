/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:58:09 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/07 14:34:52 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <string>

class	Cat : public AAnimal {
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

