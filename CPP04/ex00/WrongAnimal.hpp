/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:57:50 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/06 15:23:24 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class	WrongAnimal {
protected:
	std::string	type;

public:
	WrongAnimal( void );
	WrongAnimal( const WrongAnimal & src );
	~WrongAnimal( void );

	WrongAnimal & operator=( const WrongAnimal & rhs );

	std::string		getType( void ) const;	
	void	makeSound( void ) const;
};

#endif
