/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 12:02:48 by cle-tron          #+#    #+#             */
/*   Updated: 2025/04/20 16:16:22 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main(){

{	
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl << std::endl;

	mstack.pop();
	
	std::cout << mstack.size() << std::endl << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "_________________________________" << std::endl;

	MutantStack<int>	copy( mstack );
	MutantStack<int>::iterator it_cpy = copy.begin();
	MutantStack<int>::iterator ite_cpy = copy.end();
	
	it = mstack.begin();
	it_cpy[2] = 666666;
	++it_cpy;
	--it_cpy;
	while (it_cpy != ite_cpy) {
		std::cout << *it << "	" << *it_cpy << std::endl;
		++it_cpy;
		++it;
	}
	std::cout << "_________________________________" << std::endl;
}

{	
	std::list<int>	mstack;

	mstack.push_back(5);
	mstack.push_back(17);

	std::cout << mstack.back() << std::endl << std::endl;

	mstack.pop_back();
	
	std::cout << mstack.size() << std::endl << std::endl;

	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	//[...]
	mstack.push_back(0);

	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << std::endl;
}



	return 0;
}
