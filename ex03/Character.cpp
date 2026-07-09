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

#include <iostream>
#include "Character.hpp"
#include "AMateria.hpp"

Character::~Character	( void )
{
	std::cout << "Character destructor" << std::endl;
}
Character::Character	( void ): _name("Le Pyrobarbare")
{
	std::cout << "Character constructor" << std::endl;	
	for (int i = 0; i < inventorySize; i++)
	{
		_inventory[i] = NULL;
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

std::string const	&Character::getName( void ) const { return (_name); }
int 				Character::getInventorySize( void ) const { return (inventorySize); }

void	Character::equip( AMateria &m )
{
	bool	added = false;

	for (int i = 0; i < inventorySize; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = &m;
			added = true;
		}
	}
	if (added)
	{
		for (int i = 0; i < inventorySize; i++)
		{
			if (_saveMateria[i] == NULL)
				_saveMateria[i] = &m;
		}
	}
	else
	{
		std::cout << "Your Inventory is currently full, impossible to add " << m.getType();
		std::cout << " materia." << std::endl;
	}
}

void	Character::unequip( int idx )
{
	if ( idx < 0 || idx > inventorySize || !_inventory[idx])
		return ;
	_inventory[idx] = NULL;
}

void	Character::use( int idx, ICharacter &target )
{
	if (idx < 0 || idx > inventorySize)
	{
		std::cerr << "Impossible to access inventory at index " << idx << "." << std::endl;
		return ;
	}
	_inventory[idx]->use(target);
}

