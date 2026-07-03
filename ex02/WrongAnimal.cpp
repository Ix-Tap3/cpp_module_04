/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:10:03 by pcaplat           #+#    #+#             */
/*   Updated: 2026/06/29 18:20:18 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::~WrongAnimal	( void ) { std::cout << "WrongAnimal destructor called" << std::endl; }
WrongAnimal::WrongAnimal	( void )
{ 
	type = "WrongAnimal";
	std::cout << "WrongAnimal construtor called" << std::endl;
}
WrongAnimal::WrongAnimal	( const WrongAnimal &other )
{
	std::cout << "WrongAnimal copy construtor called" << std::endl;
	if (this != &other)
		*this = other;
}

WrongAnimal	&WrongAnimal::operator= ( const WrongAnimal &other )
{
	std::cout << "WrongAnimal assignement operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

std::string	WrongAnimal::getType( void ) { return type; }

void	WrongAnimal::makeSound( void ) 
{
	std::cout << "WrongAnimal do some random wrong noises" << std::endl;
}
