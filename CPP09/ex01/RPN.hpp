/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 16:10:55 by cle-tron          #+#    #+#             */
/*   Updated: 2025/05/15 17:13:18 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <stack>
#include <iterator>
#include <iostream>

enum	Operators {
	ADD,
	SUBSTRACT,
	MULTIPLY,
	DIVIDE
};

class	RPN {
private:
	std::stack<std::string>	in;
	std::stack<int>			out;
	
	
	RPN();

	void	parse( std::string const & s );
	int		whichOperator() const;
	void	makeCalculation();

	template<typename T>
	void	printStack( std::stack<T> const & st ) const;

public:
	RPN( std::string const & );
	RPN( RPN const & src );
	~RPN();

	RPN &	operator=( RPN const & rhs );

	int		output();

	class	TooManyNumbersException: public std::exception {
	public:
		virtual const char *	what() const throw();
	};

	class	CannotDivideBy0Exception: public std::exception {
	public:
		virtual const char *	what() const throw();
	};
	
	class	NotEnoughNumbersException: public std::exception {
	public:
		virtual const char *	what() const throw();
	};
};

template<typename T>
void	RPN::printStack( std::stack<T> const & st) const {
	std::stack<T>	tmp( st );

	while ( !tmp.empty() ) {
		std::cout << tmp.top() << " ";
		tmp.pop();
	}
	std::cout << std::endl;
}

#endif
