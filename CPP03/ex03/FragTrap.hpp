/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 11:49:41 by cle-tron          #+#    #+#             */
/*   Updated: 2025/01/29 17:52:17 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class	FragTrap : virtual public ClapTrap {
public:
	FragTrap( void );
	FragTrap( const std::string & str );
	FragTrap( const FragTrap & src );
	~FragTrap( void );

	FragTrap &	operator=( const FragTrap & rhs );

	void	highFivesGuys( void ) const;
};

#endif
