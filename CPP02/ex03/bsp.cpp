/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:33:20 by cle-tron          #+#    #+#             */
/*   Updated: 2025/01/21 18:12:24 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float sign( Point const p1, Point const p2, Point const p3 ) {
	return ( p3.getValueY() - p2.getValueY() ) * \
		   ( p1.getValueX() - p2.getValueX() ) + \
		   ( p2.getValueX() - p3.getValueX() ) * \
		   ( p1.getValueY() - p2.getValueY() );
}

bool bsp( Point const a, Point const b, Point const c, Point const point ) {
	if ( sign( point, a, b ) > 0 && sign( point, b, c ) > 0 \
		 && sign( point, c, a ) > 0 )
		return true;
	else
		return false;
}
