/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 19:22:50 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/21 19:31:40 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class	MateriaSource : public IMateriaSource {
private:
	AMateria*	inventory[4];

public:
	MateriaSource( void );
	MateriaSource( MateriaSource const & src );
	virtual ~IMateriaSource( void );
	
	virtual void		learnMateria( AMateria* m ) = 0;
	virtual AMateria*	createMateria( std::string const & type ) = 0;
};

#endif
