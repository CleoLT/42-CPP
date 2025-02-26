/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:57:45 by cle-tron          #+#    #+#             */
/*   Updated: 2025/02/06 18:00:58 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void ) {
	const Dog*		test1 = new Dog();
	std::cout << std::endl;
	const Animal*	test2 = new Dog( *test1 );
	std::cout << std::endl;
	const Animal*	test3;
	test3 = test2;
	std::cout << std::endl;
	delete test1;
	std::cout << std::endl;
	delete test2;
	std::cout << std::endl;


	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	std::cout << std::endl;
	
	std::cout << meta->getType() << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	delete meta;
	delete j;
	delete i;
	std::cout << std::endl;

	const WrongAnimal*	kiki = new WrongAnimal();
	const WrongAnimal*	cat = new WrongCat();
	std::cout << std::endl;
	
	std::cout << kiki->getType() << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();
	kiki->makeSound();

	std::cout << std::endl;
	delete kiki;
	delete cat;
	return 0;
}
