/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 15:57:26 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/06 17:02:42 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class	Brain {
private :
	std::string	ideas[100];

public :
	Brain( void );
	Brain( const Brain & src );
	~Brain( void );

	Brain &	operator=( const Brain & rhs );
};

#endif
