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

Cure::Cure	( void ): AMateria() { type = "cure"; std::cout << "Cure constructor" << std::endl; }
Cure::~Cure	( void ) { std::cout << "Cure destructor" << std::endl; }
Cure::Cure	( Cure const &other ): AMateria( other )
{
	std::cout << "Cure copy constructor" << std::endl;
	if (this != &other)
		*this = other;
}

Cure	&Cure::operator=( Cure const &other )
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Cure	*Cure::clone( void ) const
{
	Cure	*newCure = new Cure();

	return (newCure);
}
