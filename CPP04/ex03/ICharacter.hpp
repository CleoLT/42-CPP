/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 16:50:46 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/21 18:42:11 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "AMateria.hpp"

class	ICharacter {
public:
	virtual ~ICharacter() {}
	
	virtual std::string const & getName() const = 0;
	virtual AMateria*			getAddress( int idx ) const = 0;

	virtual void	equip( AMateria* m ) = 0;
	virtual void	unequip( int idx ) = 0;
	virtual void	use( int idx, ICharacter& target ) = 0;
};

#endif
