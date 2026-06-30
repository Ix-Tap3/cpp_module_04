/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 09:50:58 by pcaplat           #+#    #+#             */
/*   Updated: 2026/06/29 18:35:44 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat	( void ): Animal() { type = "Cat"; std::cout << "Cat Constructor Called" << std::endl; }
Cat::~Cat	( void ) { std::cout << "Cat Destructor Called" << std::endl; };
Cat::Cat	( const Cat &other): Animal( other )
{
	std::cout << "Cat copy Constructor Called" << std::endl;
	if (this != &other)
		*this = other;
}

Cat	&Cat::operator=	( const Cat &other )
{
	std::cout << "Cat equal assignement called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void	Cat::makeSound( void ) { std::cout << "Miou Miou... hum miaou miaou" << std::endl; }
