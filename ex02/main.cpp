/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:42:24 by pcaplat           #+#    #+#             */
/*   Updated: 2026/07/03 16:07:26 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int	main( void )
{
	AAnimal	*animals[10];
	Cat		batcat = Cat();
	Dog		batdog = Dog();

	std::cout << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			animals[i] = new Cat();
		else
	  		animals[i] = new Dog();
	}
	std::cout << std::endl;
	for (int j = 0; j < 10; j++)
	{
		animals[j]->makeSound();
		std::cout << "Animal[" << j << "] is a " << animals[j]->getType() << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "batcat is thinking about: " << batcat.think() << std::endl;
	std::cout << "batdog is thinking about: " << batdog.think() << std::endl;
	std::cout << std::endl;
	batcat.thinkALot();
	std::cout << std::endl;
	for (int k = 0; k < 10; k++)
		delete animals[k];
}
