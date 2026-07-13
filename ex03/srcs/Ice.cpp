/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 10:53:28 by pcaplat           #+#    #+#             */
/*   Updated: 2026/07/13 14:42:43 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"
#include <iostream>

// Constructors and destructor
Ice::Ice	( void ): AMateria() { type = "ice"; std::cout << "Ice constructor" << std::endl; }
Ice::Ice	( Ice const &other ): AMateria( other )
{
	std::cout << "Ice copy constructor" << std::endl;
	if (this != &other)
		*this = other;
}
Ice::~Ice	( void ) { std::cout << "Ice destructor" << std::endl; }

// --- Operator overloading
Ice	&Ice::operator=( Ice const &other )
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

// --- Member Functions
Ice	*Ice::clone( void ) const
{
	Ice	*newIce = new Ice();
	return (newIce);
}

void	Ice::use( ICharacter &target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}
