/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:44:41 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/22 15:29:31 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
class	ICharacter;

class	AMateria {
protected :
	std::string	type;
		
public :
	AMateria( void );
	AMateria( std::string const & type );
	AMateria( AMateria const & src );
	virtual ~AMateria( void );

	AMateria &	operator=( AMateria const & rhs );

	std::string const &	getType( void ) const;
	virtual AMateria*	clone( void ) const = 0;
	virtual void		use( ICharacter & target ) = 0;
};

#endif
