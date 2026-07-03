/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 17:46:41 by pcaplat           #+#    #+#             */
/*   Updated: 2026/06/29 18:36:09 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog	( void ): Animal()
{
	std::cout << "Dog constructor called !" << std::endl;
	type = "Dog";
	_brain = new Brain();
	_brain->fillIdeas("Dog");
}
Dog::Dog	( const Dog &other ): Animal( other )
{
	std::cout << "Dog copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}
Dog::~Dog	( void )
{
	std::cout << "Dog Destructor called !" << std::endl;
	delete _brain;
}

Dog	&Dog::operator=	( const Dog &other )
{
	std::cout << "Dog = operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		this->_brain = other._brain;
	}
	return (*this);
}

void		Dog::makeSound( void ) { std::cout << "wouf wouf wouf wouf" << std::endl; }
void		Dog::thinkALot( void ) { _brain->displayIdeas(); }
std::string	Dog::think( void ) { return (_brain->getRandomIdea()); }
