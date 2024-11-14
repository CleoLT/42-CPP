/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:57:11 by cle-tron          #+#    #+#             */
/*   Updated: 2024/11/14 17:30:07 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class	HumanA {
private:
	std::string	_name;
	Weapon&		_weapon;

public:
	HumanA( std::string name, Weapon& weapon );
	~HumanA( void );

	void	attack( void ) const;
};

#endif
