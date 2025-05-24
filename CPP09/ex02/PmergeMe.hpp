/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:40:43 by cle-tron          #+#    #+#             */
/*   Updated: 2025/05/24 16:28:54 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <exception>
#include <vector>

class	PmergeMe {
private:
	std::vector<std::string>	param;
	std::vector<int>			before;
	std::vector<int>			after;
	
	void	parse();
	
	template<typename T>
	void	printVector( std::vector<T> const & v ) const;

	PmergeMe();

public:
	PmergeMe( char **arg );
	PmergeMe( const PmergeMe & src );
	~PmergeMe();

	PmergeMe &	operator=( const PmergeMe & rhs );

	void	sort();

	class	WrongSyntaxisException : public std::exception {
	public:
		virtual const char *	what() const throw();
	};
};

template<typename T>
void	PmergeMe::printVector( std::vector<T> const & v ) const {
	std::vector<T>					tmp( v );

	typename std::vector<T>::const_iterator	it;
	typename std::vector<T>::const_iterator	ite = tmp.end();

	for ( it = tmp.begin(); it != ite; ++it )
		std::cout << *it << " ";
	std::cout << std::endl;
}


#endif
