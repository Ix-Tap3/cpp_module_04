/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWrongAnimal.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:10:03 by pcaplat           #+#    #+#             */
/*   Updated: 2026/07/03 16:11:00 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AWrongAnimal.hpp"

AWrongAnimal::~AWrongAnimal	( void ) { std::cout << "WrongAnimal destructor called" << std::endl; }
AWrongAnimal::AWrongAnimal	( void )
{ 
	type = "WrongAnimal";
	std::cout << "WrongAnimal construtor called" << std::endl;
}
AWrongAnimal::AWrongAnimal	( const AWrongAnimal &other )
{
	std::cout << "WrongAnimal copy construtor called" << std::endl;
	if (this != &other)
		*this = other;
}

AWrongAnimal	&AWrongAnimal::operator= ( const AWrongAnimal &other )
{
	std::cout << "WrongAnimal assignement operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

std::string	AWrongAnimal::getType( void ) { return type; }
