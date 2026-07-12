/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:27:51 by pcaplat           #+#    #+#             */
/*   Updated: 2026/06/27 14:14:36 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Animal.hpp"

Animal::~Animal	(void) {std::cout << "Animal Destructor called" << std::endl;}
Animal::Animal	(void): type("Animal") {std::cout << "Animal Default constructor called" << std::endl;}
Animal::Animal	(const Animal &other)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

Animal	&Animal::operator= (const Animal &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

std::string	Animal::getType(void) const {return (type);}

void	Animal::makeSound(void) const {std::cout << "Animal make some random Animal noises!" << std::endl;}
