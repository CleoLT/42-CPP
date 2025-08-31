/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:40:43 by cle-tron          #+#    #+#             */
/*   Updated: 2025/08/31 18:27:21 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <exception>
#include <vector>
#include <complex>
#include <algorithm>
#include <deque>

class	PmergeMe {
private:
	std::vector<std::string>	param;
	std::vector<int>			vec;
	std::deque<int>				deq;
	int							size;
	
	void	parse();
	
	template<typename C>
	void	mergeInsertion( C & v );

	template<typename C>
	void	printContainer( C const & c ) const;

	template<typename C>
	void	binaryInsertion( C & main_chain, int b );

	template<typename C>
	void	makePairs( C & a, C & b, C & v );

	void		printUs( timeval start, timeval end, std::string container_type );	
	
	PmergeMe();

public:
	PmergeMe( char **arg );
	PmergeMe( const PmergeMe & src );
	~PmergeMe();

	PmergeMe &	operator=( const PmergeMe & rhs );

	void		sort();
	void		testSameOrder() const ;
	static int	tEquation(int k); 

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
void	PmergeMe::mergeInsertion( C & v ) {
	int	n = v.size();
	if ( n <= 1 ) return;

	C	a;
	C	b;

	makePairs( a, b, v ); 
		
	mergeInsertion( a );
	
	C	t;
	int	i = 0;
	
	while (true) {
		int next = PmergeMe::tEquation( i );
		if ( next >= (int)b.size())
			break;
		t.push_back( next );
		++i;
	}
	
	C	main_chain( a );

	binaryInsertion( main_chain, b[0] );
	
	for ( int i = t.size() - 1; i > 0; --i )
		for( int j = std::min( t[i], (int)b.size()) - 1; j >= t[i - 1]; --j ) 
			binaryInsertion( main_chain, b[j] );

	for ( size_t j = t.empty() ? 1 : t.back(); j < b.size(); ++j )
		binaryInsertion( main_chain, b[j] );

	v = main_chain;
} 

template<typename C>
void	PmergeMe::binaryInsertion( C & main_chain, int b ) {

if (main_chain.empty()) {
        main_chain.push_back(b);
        return;
    }

    int left = 0;
    int right = main_chain.size() - 1;
    int mid;

    while (left <= right) {
        mid = left + (right - left) / 2;
        if (main_chain[mid] < b) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    int temp = b;

    main_chain.push_back(0);

    for (int i = main_chain.size() - 2; i >= left; --i) {
        main_chain[i + 1] = main_chain[i];
    }

    main_chain[left] = temp;
}

template<typename C>
void	PmergeMe::makePairs( C & a, C & b, C & v ) {

	int n = v.size();

	for ( int i = 0; i + 1 < n; i +=2 ) {	
		if ( v[i] > v[i + 1] ) {
			a.push_back( v[i] );
			b.push_back( v[i + 1] );
		} else {
			a.push_back( v[i + 1] );
			b.push_back( v[i] );
		}
	}

	if ( n % 2 != 0 ) a.push_back( v[n - 1] );	//si v.size() impar
}

#endif
