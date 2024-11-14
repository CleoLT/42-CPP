/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:39:38 by cle-tron          #+#    #+#             */
/*   Updated: 2024/11/14 12:39:42 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie {
private:
	std::string	name;
public:
	Zombie( std::string str );
	~Zombie( void );
	
	void	announce( void );
};

#endif
