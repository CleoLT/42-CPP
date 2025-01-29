/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 14:04:31 by cle-tron          #+#    #+#             */
/*   Updated: 2025/01/29 18:38:07 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

class	DiamondTrap : public ScavTrap, public FragTrap {
private:
	std::string	name;

public:
	DiamondTrap( void );
	DiamondTrap( std::string str );
	DiamondTrap( const DiamondTrap & src );
	~DiamondTrap( void );

	DiamondTrap &	operator=( const DiamondTrap & rhs );

	void	attack( const std::string & target );
	void	whoAmI( void ) const;
};

#endif
