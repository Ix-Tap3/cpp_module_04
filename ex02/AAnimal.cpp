/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:27:51 by pcaplat           #+#    #+#             */
/*   Updated: 2026/07/03 16:05:45 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::~AAnimal	(void) {std::cout << "Animal Destructor called" << std::endl;}
AAnimal::AAnimal	(void): type("Animal") {std::cout << "Animal Default constructor called" << std::endl;}
AAnimal::AAnimal	(const AAnimal &other)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

AAnimal	&AAnimal::operator= (const AAnimal &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

std::string	AAnimal::getType(void) {return (type);}
