/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:11:34 by cle-tron          #+#    #+#             */
/*   Updated: 2024/11/21 16:20:02 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

class	Harl {
private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

public:
	void complain( std::string level );
};
