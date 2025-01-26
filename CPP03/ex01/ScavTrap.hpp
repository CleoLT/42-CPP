/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 11:14:23 by cle-tron          #+#    #+#             */
/*   Updated: 2025/01/26 11:40:44 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class	ScavTrap : public ClapTrap {
public:
	ScavTrap( void );
	ScavTrap( std::string str );
	ScavTrap( ScavTrap const & src );
	~ScavTrap( void );

	ScavTrap & operator=( ScavTrap const & rhs );
	
	void	attack( const std::string & target );
	void	guardGate( void );
};

#endif
