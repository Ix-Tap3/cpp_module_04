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
#include "../includes/Dog.hpp"

Dog::Dog	( void ): Animal() { type = "Dog"; std::cout << "Dog constructor called !" << std::endl; }
Dog::~Dog	( void ) { std::cout << "Dog Destructor called !" << std::endl; };
Dog::Dog	( const Dog &other ): Animal( other )
{
	std::cout << "Dog copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

Dog	&Dog::operator=	( const Dog &other )
{
	std::cout << "Dog = operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void	Dog::makeSound( void ) const { std::cout << "wouf wouf wouf wouf" << std::endl; }
