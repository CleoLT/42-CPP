/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:44:59 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/08 13:36:53 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class	Cure : public AMateria {
public :
	Cure( void );
	Cure( Cure const & src );
	~Cure( void );

	Cure &	operator=( Cure const & rhs );

	virtual AMateria*	clone( void ) const;
	virtual void		use( ICharacter & target );
};

#endif
