/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 16:48:05 by cle-tron          #+#    #+#             */
/*   Updated: 2025/04/10 17:44:10 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <vector>

class	Span {
private:
	unsigned int	 	_size;
	std::vector<int>	_vec;

public:
	Span();
	Span( unsigned int N );
	Span( Span const & src );
	~Span();

	Span &	operator=( Span const & rhs );
	
	void	addNumber( int i );
	void	addNumber( std::vector<int> const & v );
	void	printContent()	const;
	int		shortestSpan()	const;
	int		longestSpan()	const;

	class	FullException : public std::exception {
	public:
		virtual const char *	what() const throw();
	};

	class	EmptyException : public std::exception {
	public:
		virtual const char *	what() const throw();
	};
};

#endif
