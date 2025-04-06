/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:41:34 by cle-tron          #+#    #+#             */
/*   Updated: 2025/04/06 13:34:56 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template<typename T>
class	Array {
private:
	T *				_arr;
	unsigned int	_size;

public:
	Array<T>();
	Array<T>( unsigned int n );
	Array<T>( Array<T> const & src );
	~Array<T>();

	Array<T> &	operator=( Array<T> const & rhs );
	T &			operator[]( const int index );
	
	unsigned int	size() const;

	class	WrongIndexException : public std::exception {
	public:
		virtual const char *	what() const throw();
	};
};

#include "Array.tpp"

#endif
