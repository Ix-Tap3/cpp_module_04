/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 17:46:41 by pcaplat           #+#    #+#             */
/*   Updated: 2026/07/13 14:00:09 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Dog.hpp"

Dog::Dog	( void ): Animal()
{
	std::cout << "Dog constructor called !" << std::endl;
	type = "Dog";
	_brain = new Brain();
	_brain->fillIdeas("Dog");
}
Dog::Dog	( const Dog &other ): Animal( other ), _brain(NULL)
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
		if (this->_brain)
			delete this->_brain;
		this->_brain = other._brain->clone();
	}
	return (*this);
}

void		Dog::makeSound( void ) const { std::cout << "wouf wouf wouf wouf" << std::endl; }
void		Dog::thinkALot( void ) const { _brain->displayIdeas(); }
std::string	Dog::think( void ) const { return (_brain->getRandomIdea()); }
