/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 11:51:25 by pcaplat           #+#    #+#             */
/*   Updated: 2026/07/06 14:07:03 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::~Character	( void )
{
	// for (int i = 0; i < inventorySize; i++)
	// 	if (_inventory[i] != NULL)
	// if (_inventory[i] != NULL)
	// 	delete _inventory;
	std::cout << "Character destructor" << std::endl;
}
Character::Character	( void ): _name("Le Pyrobarbare")
{
	std::cout << "Character constructor" << std::endl;	
	for (int i = 0; i < inventorySize; i++)
	{
		_inventory[i] = NULL;
		_saveMateria[i] = NULL;
	}
}
Character::Character	( std::string name ): _name(name)
{
	std::cout << "Character string constructor" << std::endl;
}
Character::Character	( Character const &other )
{
	std::cout << "Character copy constructor" << std::endl;
	if (this != &other)
		*this = other;
}

Character	&Character::operator= ( Character const &other )
{
	if (this != &other)
	{
		for (int i = 0; i < inventorySize; i ++)
		{
			this->_inventory[i] = other._inventory[i];
			this->_saveMateria[i] = other._saveMateria[i];
			this->_name = other._name;
		}
	}
	return (*this);
}

void	Character::equip( AMateria *m )
{
	for (int i = 0; i < inventorySize; i++)
	{
		if ( _inventory)
	}
}

std::string const	&Character::getName( void ) const { return (_name); }
int const			Character::getInventorySize( void ) const { return (inventorySize); }

