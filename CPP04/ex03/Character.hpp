/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:55:04 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/13 14:59:21 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>

class	Character : public ICharacter {
private :
	std::string	name;
	AMateria*	inventory[4];

public :
	Character( void );
	Character( std::string const & str );
	Character( Character const & src );
	~Character( void );

	Character &	operator=( Character const & rhs );
	
	virtual std::string const & getName() const;
	
	virtual void	equip( AMateria* m );
	virtual void	unequip( int idx );
	virtual void	use( int idx, ICharacter& target );
};

#endif

