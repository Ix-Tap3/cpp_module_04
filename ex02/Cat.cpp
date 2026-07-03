/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 09:50:58 by pcaplat           #+#    #+#             */
/*   Updated: 2026/06/30 16:40:24 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat	( void ): Animal()
{
	std::cout << "Cat Constructor Called" << std::endl;
	type = "Cat";
	_brain = new Brain();
	_brain->fillIdeas("Cat");
}
Cat::Cat	( const Cat &other): Animal( other )
{
	std::cout << "Cat copy Constructor Called" << std::endl;
	if (this != &other)
		*this = other;
}
Cat::~Cat	( void )
{
	std::cout << "Cat Destructor Called" << std::endl;
	delete _brain;
}

Cat	&Cat::operator=	( const Cat &other )
{
	std::cout << "Cat equal assignement called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		this->_brain = other._brain;
	}
	return (*this);
}

void		Cat::makeSound( void ) { std::cout << "Miou Miou... hum miaou miaou" << std::endl; }
void		Cat::thinkALot( void ) { _brain->displayIdeas(); }
std::string	Cat::think( void ) { return (_brain->getRandomIdea()); }
