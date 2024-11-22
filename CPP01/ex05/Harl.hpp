/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:11:34 by cle-tron          #+#    #+#             */
/*   Updated: 2024/11/22 14:29:29 by cle-tron         ###   ########.fr       */
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
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
	int		level;
	void	setLevel( std::string level );
//	void	*f(void);	

public:
	Harl( void );
	~Harl( void );
	void	complain( std::string level );
};

#endif
