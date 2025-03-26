/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:41:54 by cle-tron          #+#    #+#             */
/*   Updated: 2025/03/26 17:14:58 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BASE_HPP
#define BASE_HPP

class	Base {
public:
	virtual ~Base( void );
};

Base *			generate( void );
void			identify( Base * p );
void			identify( Base & p );
#endif

