/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:58:09 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/06 15:23:24 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <string>

class	WrongCat : public WrongAnimal {
public :
	WrongCat( void );
	WrongCat( const WrongCat & src);
	~WrongCat( void );

	WrongCat &	operator=( const WrongCat & rhs );
	
	void	makeSound( void ) const;
};

#endif

