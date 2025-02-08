/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:44:52 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/08 13:10:49 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class	Ice : public AMateria {
public :
	Ice( void );
	Ice( Ice const & src );
	~Ice( void );

	Ice &	operator=( Ice const & rhs );

	virtual AMateria*	clone( void ) const;
	virtual void		use( ICharacter & target );
};

#endif
