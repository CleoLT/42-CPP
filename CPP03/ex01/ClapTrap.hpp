/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:51:16 by cle-tron          #+#    #+#             */
/*   Updated: 2025/01/26 11:34:01 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap {
protected:
	std::string		name;
	unsigned int	hit;
	unsigned int	energy;
	unsigned int	damage;

	bool	checkDoAction( void ) const;

public:
	ClapTrap( void );
	ClapTrap( std::string str );
	ClapTrap( const ClapTrap & src );
	~ClapTrap( void );
	ClapTrap & operator=( const ClapTrap & rhs);

	void		attack( const std::string & target );
	void		takeDamage( unsigned int amount );
	void		beRepaired( unsigned int amount );	
};

#endif
