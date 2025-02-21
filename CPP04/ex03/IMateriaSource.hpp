/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 19:14:52 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/21 19:31:40 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMateriaSource_HPP
#define	IMateriaSource_HPP

#include <string>
#include "AMateria.hpp"

class	IMateriaSource {
public:
	virtual ~IMateriaSource() {}
	
	virtual void		learnMateria( AMateria* m ) = 0;
	virtual AMateria*	createMateria( std::string const & type ) = 0;
};

#endif
