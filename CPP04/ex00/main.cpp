/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:57:45 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/05 19:18:55 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.cpp"
#include "Cat.hpp"

int main( void ) {
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
//	const Animal*	i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
//	std::cout << i->getType() << " " << std::endl;
//	i->makeSound(); //will output the cat sound!
	j->makeSound();
//	std::cout << meta->getType() << std::endl;
	meta->makeSound();
	
	delete meta;
	return 0;
}
