/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:11:34 by cle-tron          #+#    #+#             */
/*   Updated: 2024/11/24 14:23:57 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#define DEBUG	1
#define INFO	2
#define WARNING	3
#define ERROR	4

#include <string>

class	Harl {
private:
	void		debug( void );
	void		info( void );
	void		warning( void );
	void		error( void );
	int			intLevel;
	std::string	strLevel;
	void		setLevel( void );

public:
	Harl( std::string level );
	~Harl( void );
	void	complain( void );
};

#endif
