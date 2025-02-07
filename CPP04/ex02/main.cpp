/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:57:45 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/07 14:44:32 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main( void ) {
//	const AAnimal*	meta = new AAnimal();
	const AAnimal*	j = new Dog();
	const AAnimal*	i = new Cat();
	const Cat*		cat = new Cat();
	const AAnimal*	catcopy = new Cat( *cat );
	const AAnimal*	dog;
	dog = j;

	std::cout << std::endl;	
//	std::cout << meta->getType() << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << catcopy->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
//	meta->makeSound();
	catcopy->makeSound();
	dog->makeSound();

	std::cout << std::endl;
//	delete meta;
	delete j;
	delete i;
	delete cat;
	delete catcopy;
	std::cout << std::endl;
	
	const AAnimal*	animal[10];
	for( int i = 0; i < 5; i++ )
		animal[i] = new Dog();
	for( int i = 5; i < 10; i++ )
		animal[i] = new Cat();
	std::cout << std::endl;
	for( int i = 9; i >=0; i-- )
		delete animal[i];

	return 0;
}
