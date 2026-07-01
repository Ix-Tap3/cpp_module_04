/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:42:24 by pcaplat           #+#    #+#             */
/*   Updated: 2026/06/30 16:44:13 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

int	main( void )
{
	Animal	animals[10];

	for (int i = 0; i < 10; i++)
	{
		if (i / 2 < 5)
			animals[i] = new Cat();
		else
	  		animals[i] = new Dog();
	}
}
