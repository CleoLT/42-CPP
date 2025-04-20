/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 12:02:55 by cle-tron          #+#    #+#             */
/*   Updated: 2025/04/20 16:00:50 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template<typename T>
class	MutantStack : public std::stack<T> {
public:
	MutantStack<T>() : std::stack<T>() {}
	MutantStack<T>( MutantStack<T> const & src ) : std::stack<T>( src ) { *this = src; }
	~MutantStack<T>() {}

	MutantStack<T> &	operator=( MutantStack<T> const & rhs ) {
		if ( this != &rhs )
			std::stack<T>::operator=( rhs );
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator				iterator;
	typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

	iterator				begin()		{ return this->c.begin(); }
	iterator				end()		{ return this->c.end(); }
	
	reverse_iterator		rbegin()	{ return this->c.rbegin(); }
	reverse_iterator		rend()		{ return this->c.rend(); }

	const_iterator			cbegin()	const { return this->c.cbegin(); }
	const_iterator			cend()		const { return this->c.cend(); }

	const_reverse_iterator	crbegin()	const { return this->c.crbegin(); }
	const_reverse_iterator	crend()		const { return this->c.rend(); }
};

//#include "MutantStack.tpp"

#endif
