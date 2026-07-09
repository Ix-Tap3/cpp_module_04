/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 10:53:28 by pcaplat           #+#    #+#             */
/*   Updated: 2026/07/04 11:16:25 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::~Ice	( void )
{
	std::cout << "Ice destructor" << std::endl;
}
Ice::Ice	( void ): AMateria() { type = "ice"; std::cout << "Ice constructor" << std::endl; }
Ice::Ice	( Ice const &other ): AMateria( other )
{
	std::cout << "Ice copy constructor" << std::endl;
	if (this != &other)
		*this = other;
}

Ice	&Ice::operator=( Ice const &other )
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Ice	*Ice::clone( void ) const
{
	Ice	*newIce = new Ice();
	return (newIce);
}

void	Ice::use( ICharacter &target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}
