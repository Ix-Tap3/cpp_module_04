/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:42:24 by pcaplat           #+#    #+#             */
/*   Updated: 2026/06/29 10:21:14 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int	main( void )
{
	Dog		*wouf = new Dog();
	Cat		*miou = new Cat();
	Animal	*randomSound = new Animal();

	wouf->makeSound();
	std::cout << "wouf est de type: " << wouf->getType() << std::endl;
	miou->makeSound();
	std::cout << "miou est de type: " << miou->getType() << std::endl;
	randomSound->makeSound();
	std::cout << "animal est de type: " << randomSound->getType() << std::endl;
	delete wouf;
	delete miou;
	delete randomSound;
}
