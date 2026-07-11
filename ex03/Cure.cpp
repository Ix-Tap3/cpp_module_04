/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 11:22:49 by pcaplat           #+#    #+#             */
/*   Updated: 2026/07/04 11:28:44 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"

// Constructors and destructor
Cure::Cure	( void ): AMateria() { type = "cure"; std::cout << "Cure constructor" << std::endl; }
Cure::Cure	( Cure const &other ): AMateria( other )
{
	std::cout << "Cure copy constructor" << std::endl;
	if (this != &other)
		*this = other;
}
Cure::~Cure	( void ) { std::cout << "Cure destructor" << std::endl; }

// --- Operator overloading
Cure	&Cure::operator=( Cure const &other )
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

// --- Member Functions
Cure	*Cure::clone( void ) const
{
	Cure	*newCure = new Cure();

	return (newCure);
}

void	Cure::use( ICharacter &target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
