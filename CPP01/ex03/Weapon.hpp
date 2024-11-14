/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:48:47 by cle-tron          #+#    #+#             */
/*   Updated: 2024/11/14 17:51:45 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class	Weapon {
private:
	std::string	_type;

public:
	Weapon( void );
	Weapon( std::string type );
	~Weapon( void );

	std::string	getType( void ) const;
	void		setType( std::string type );
};

#endif
