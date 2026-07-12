/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:42:24 by pcaplat           #+#    #+#             */
/*   Updated: 2026/06/29 18:38:55 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "includes/Dog.hpp"
#include "includes/Cat.hpp"
#include "includes/WrongCat.hpp"
#include "includes/WrongAnimal.hpp"

int	main( void )
{
	{
		std::cout << "========================= Test 1 =========================" << std::endl;
		Dog		*wouf = new Dog();
		Cat		*miou = new Cat();
		Animal	*randomSound = new Animal();

		std::cout << std::endl;
		std::cout << "wouf: ";
		wouf->makeSound();
		std::cout << "wouf type: " << wouf->getType() << std::endl;
		std::cout << "miou: ";
		miou->makeSound();
		std::cout << "miou type: " << miou->getType() << std::endl;
		std::cout << "animal: ";
		randomSound->makeSound();
		std::cout << "animal type: " << randomSound->getType() << std::endl;
		std::cout << std::endl;

		delete wouf;
		delete miou;
		delete randomSound;
		std::cout << "==========================================================" << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "========================= Test 2 =========================" << std::endl;
		WrongAnimal	*randomEvilAnimal = new WrongAnimal();
		WrongAnimal	*notCat = new WrongCat();
		WrongCat	*batCat = new WrongCat();

		std::cout << std::endl;
		std::cout << "randomEvilAnimal: ";
		randomEvilAnimal->makeSound();
		std::cout << "randomEvilAnimal type: " << randomEvilAnimal->getType() << std::endl;
		std::cout << "notCat: ";
		notCat->makeSound();
		std::cout << "notCat type: " << notCat->getType() << std::endl;
		std::cout << "batCat: ";
		batCat->makeSound();
		std::cout << "batCat type: " << batCat->getType() << std::endl;

		std::cout << std::endl;
		delete randomEvilAnimal;
		delete notCat;
		delete batCat;
		std::cout << "==========================================================" << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "========================= Test 3 =========================" << std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		std::cout << std::endl;
		delete meta;
		delete i;
		delete j;
		std::cout << "==========================================================" << std::endl;
		return 0;
	}
}
