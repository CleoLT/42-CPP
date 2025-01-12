/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:13:41 by cle-tron          #+#    #+#             */
/*   Updated: 2025/01/12 19:53:21 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed {
private:
	int					nb;
	static int const	bits;

public:
	Fixed( void );
	Fixed( int const value );
	Fixed( float const value);
	Fixed( Fixed const & src );
	~Fixed( void );

	Fixed &	operator=( Fixed const & rhs );
	
	bool	operator>( Fixed const rhs );
	bool	operator<( Fixed const rhs );
	bool	operator>=( Fixed const rhs );
	bool	operator<=( Fixed const rhs );
	bool	operator==( Fixed const rhs );
	bool	operator!=( Fixed const rhs );

	float	operator+( Fixed const rhs );
	float	operator-( Fixed const rhs );
	float	operator*( Fixed const rhs );
	float	operator/( Fixed const rhs );

	Fixed	operator++( void );
	Fixed	operator--( void );
	Fixed	operator++( int );
	Fixed	operator--( int );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif
