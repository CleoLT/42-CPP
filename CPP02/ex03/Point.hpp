/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:33:31 by cle-tron          #+#    #+#             */
/*   Updated: 2025/01/21 17:18:57 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class	Point {
private:
	Fixed const	x;
	Fixed const y;

public:
	Point( void );
	Point( float const x, float const y);
	Point( Point const & src );
	Point & operator=( Point const & rhs );
	~Point( void );

	float	getValueX( void ) const;
	float	getValueY( void ) const;
//	void	setValueX( float const nb );
//	void	setValueY( float const nb );
//	void	increaseX( void );
//	void	increaseY( void );

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
