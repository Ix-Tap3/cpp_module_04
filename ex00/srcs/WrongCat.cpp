/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 18:08:58 by pcaplat           #+#    #+#             */
/*   Updated: 2026/06/29 18:40:35 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/WrongCat.hpp"

WrongCat::WrongCat	( void ) : WrongAnimal()
{
	std::cout << "WrongCat constructor called" << std::endl;
	type = "WrongCat";
}
WrongCat::~WrongCat	( void ) { std::cout << "WrongCat destructor called" << std::endl; }
WrongCat::WrongCat	( const WrongCat &other ) : WrongAnimal( other )
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

WrongCat	&WrongCat::operator= ( const WrongCat &other )
{
	std::cout << "WronCat assignement operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Wrong miou miou because it's batcat" << std::endl;
}
