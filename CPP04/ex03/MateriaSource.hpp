/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 19:22:50 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/22 16:32:51 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <string>
#include "IMateriaSource.hpp"

class	AMateria;

class	MateriaSource : public IMateriaSource {
private:
	AMateria*	inventory[4];

public:
	MateriaSource( void );
	MateriaSource( MateriaSource const & src );
	~MateriaSource( void );

	MateriaSource &	operator=( MateriaSource const & rhs );
	
	virtual void		learnMateria( AMateria* m );
	virtual AMateria*	createMateria( std::string const & type );
};

#endif
