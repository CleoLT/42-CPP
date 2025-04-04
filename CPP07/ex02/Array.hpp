/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:41:34 by cle-tron          #+#    #+#             */
/*   Updated: 2025/04/04 14:50:41 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class	Array {
private:
	T *				arr;
	unsigned int	size;

public:
	Array();
	Array( unsigned int n );
	Array( Array const & src );
	~Array();

	Array &	operator=( Array const & rhs );
	
	unsigned int	size() const;
};

#endif
