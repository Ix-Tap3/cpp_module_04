/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:42:24 by pcaplat           #+#    #+#             */
/*   Updated: 2026/07/13 14:19:24 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Dog.hpp"
#include "includes/Cat.hpp"
#include <iostream>

int	main( void )
{
	{
		std::cout << "================== Test 1 ==================" << std::endl;
		Animal	*animals[10];

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
		for (int k = 0; k < 10; k++)
			delete animals[k];
		std::cout << "============================================" << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "================== Test 2 ==================" << std::endl;
		Cat		*batcat = new Cat();
		Dog		*batdog = new Dog();
		Dog		batdog2 = *batdog;

		std::cout << std::endl;
		std::cout << "batcat is thinking about: " << batcat->think() << std::endl;
		std::cout << "batdog is thinking about: " << batdog->think() << std::endl;
		std::cout << std::endl;
		batcat->thinkALot();
		delete batcat;
		delete batdog;
		std::cout << "============================================" << std::endl;
	}
}
