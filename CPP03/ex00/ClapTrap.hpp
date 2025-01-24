/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:51:16 by cle-tron          #+#    #+#             */
/*   Updated: 2025/01/24 11:10:15 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap {
private:
	std::string		name;
	unsigned int	hit;
	unsigned int	energy;
	unsigned int	damage;

	bool	checkDoAction( void ) const;

public:
	ClapTrap( void );
	ClapTrap( std::string str );
	ClapTrap( ClapTrap & src );
	~ClapTrap( void );
	ClapTrap & operator=( ClapTrap & rhs);

	void		attack( const std::string & target );
	void		takeDamage( unsigned int amount );
	void		beRepaired( unsigned int amount );	
};

#endif
