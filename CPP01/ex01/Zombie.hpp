/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:57:06 by cle-tron          #+#    #+#             */
/*   Updated: 2024/11/14 13:45:32 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class	Zombie {
private:
	std::string	name;

public:
	Zombie( std::string str );
	Zombie( void );
	~Zombie( void );

	void	setName( std::string name );
	void	announce( void );
};

#endif
