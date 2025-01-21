/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:13:41 by cle-tron          #+#    #+#             */
/*   Updated: 2025/01/16 14:19:43 by cle-tron         ###   ########.fr       */
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

	static Fixed &			min( Fixed & first, Fixed & second );
	const static Fixed &	min( Fixed const & first, Fixed const & second );
	static Fixed &			max( Fixed & first, Fixed & second );
	const static Fixed &	max( Fixed const & first, Fixed const & second );
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif
