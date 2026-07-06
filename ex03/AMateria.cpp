/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 10:40:59 by pcaplat           #+#    #+#             */
/*   Updated: 2026/07/04 10:52:51 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::~AMateria	( void ) { std::cout << "AMateria destructor" << std::endl; }
AMateria::AMateria	( void ): type("Unknown") { std::cout << "AMateria constructor" << std::endl; }
AMateria::AMateria	( std::string const &type ): type(type) { std::cout << "AMateria string constructor" << std::endl; }
AMateria::AMateria	( AMateria const &other )
{
	std::cout << "AMateria copy constructor" << std::endl;
	if (this != &other)
		*this = other;
}

std::string const	&AMateria::getType( void ) const { return (type); }

AMateria	&AMateria::operator=( AMateria const &other )
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}
