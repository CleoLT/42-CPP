/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:27:15 by cle-tron          #+#    #+#             */
/*   Updated: 2025/04/09 18:18:49 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <exception>

class	ValueNotFoundException: public std::exception {
public:
	virtual char const *	what() const throw() { return "Value not found!"; }
};

template<typename T>
typename T::iterator	easyfind( T & container, int i ) {
	typename T::iterator	it;
	
	it = std::find( container.begin(), container.end(), i );
	if ( it != container.end() )
		return it;
	throw ValueNotFoundException();
}

#endif	
