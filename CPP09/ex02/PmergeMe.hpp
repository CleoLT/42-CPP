/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:40:43 by cle-tron          #+#    #+#             */
/*   Updated: 2025/06/08 10:52:23 by cle-tron         ###   ########.fr       */
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
	int							size;
	
	void	parse();
	
	template<typename C>
	void	printContainer( C const & c ) const;
	
	void	mergeInsertionVec( std::vector<int> & v );
	void	mergeInsertionList( std::list<int> & v );
	void	printUs( timeval start, timeval end, std::string container_type );	
	
	PmergeMe();

public:
	PmergeMe( char **arg );
	PmergeMe( const PmergeMe & src );
	~PmergeMe();

	PmergeMe &	operator=( const PmergeMe & rhs );

	void	sort();
	void	testSameOrder() const ;

	class	WrongSyntaxisException : public std::exception {
	public:
		virtual const char *	what() const throw();
	};
};

template<typename C>
void	PmergeMe::printContainer( C const & c ) const {
	C					tmp( c );

	typename C::const_iterator	it;
	typename C::const_iterator	ite = tmp.end();
	
	int i = 0;
	
	for ( it = tmp.begin(); it != ite; ++it ) {
		if ( i >= 10 ) break;
		std::cout << *it << " ";
		i++;
	}
	std::cout << ( (c.size() > 10 ) ? " [...]" : " " ) << std::endl;
}

template<typename C>
void	binaryInsertion( C & main_chain, int b ) {
	typename C::iterator	position = lower_bound( main_chain.begin(), main_chain.end(), b );
	main_chain.insert( position, b );
}


int		tEquation( int k );
void	makePairs( std::vector<int> & a, std::vector<int> & b, std::vector<int> & v );
void	makePairsList( std::list<int> & a, std::list<int> & b, std::list<int> & l );

void	testBinaryInsertion();
void	testTSequence();
void	testOrderB();
void	testDividePairs();


#endif
