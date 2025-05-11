/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 16:10:55 by cle-tron          #+#    #+#             */
/*   Updated: 2025/05/11 16:14:52 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <stack>
#include <iterator>
#include <iostream>

class	RPN {
private:
	std::stack<std::string>	in;
	std::stack<int>			out;
	
	RPN();

	void	parse( std::string const & s );

	template<typename T>
	void	printStack( std::stack<T> const & st ) const;

public:
	RPN( std::string const & );
	RPN( RPN const & src );
	~RPN();

	RPN &	operator=( RPN const & rhs );

	int		output();
};

template<typename T>
void	RPN::printStack( std::stack<T> const & st) const {
//	typename std::stack<T>::container_type::const_iterator	it;
//	typename std::stack<T>::container_type::const_iterator	ite = st.c.end();

//	for ( it = st.c.begin(); it != ite; ++it )
//		std::cout << *it << " ";
//	std::cout << std::endl;
	std::stack<T>	tmp( st );

	while ( !tmp.empty() ) {
		std::cout << tmp.top() << " ";
		tmp.pop();
	}
	std::cout << std::endl;
}


#endif
