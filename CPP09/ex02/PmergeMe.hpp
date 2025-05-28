/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:40:43 by cle-tron          #+#    #+#             */
/*   Updated: 2025/05/28 17:51:28 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <exception>
#include <vector>
#include <list>

class	PmergeMe {
private:
	std::vector<std::string>	param;
	std::vector<int>			vec;
	std::list<int>				list;
	
	void	parse();
	
	template<typename T>
	void	printVector( std::vector<T> const & v ) const;
	
	void	mergeInsertionVec( std::vector<int> & v );
	
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
	
	int i = 0;
	
	for ( it = tmp.begin(); it != ite; ++it ) {
		if ( i >= 10 ) break;
		std::cout << *it << " ";
		i++;
	}
	std::cout << ( (v.size() > 10 ) ? " [...]" : " " ) << std::endl;
}

int		tEquation( int k );
void	binaryInsertion( std::vector<int> & main_chain, int b );
void	makePairs( std::vector<int> & a, std::vector<int> & b, std::vector<int> & v );
void	testBinaryInsertion();
void	testTSequence();
void	testOrderB();
void	testDividePairs();


#endif
