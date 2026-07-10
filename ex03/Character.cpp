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
	FtList	*next;

	std::cout << "Character destructor" << std::endl;
	while (this->_materiaCollector && this->_materiaCollector->getContent())
	{
		next = this->_materiaCollector->getNextElem();
		delete this->_materiaCollector->getContent();
		delete this->_materiaCollector;
		this->_materiaCollector = next;
	}
	for (int i = 0; i < inventorySize; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
}
Character::Character	( void ): _name("Le Pyrobarbare")
{
	std::cout << "Character constructor" << std::endl;
	for (int i = 0; i < inventorySize; i++)
		_inventory[i] = NULL;
	_materiaCollector = new FtList();
}
Character::Character	( std::string name ): _name(name)
{
	std::cout << "Character string constructor" << std::endl;
	for (int i = 0; i < inventorySize; i++)
		_inventory[i] = NULL;
	_materiaCollector = new FtList();
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
		this->_name = other._name;
		this->_materiaCollector = other._materiaCollector;
		for (int i = 0; i < inventorySize; i ++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			if (other._inventory[i])
				this->_inventory[i] = other._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return (*this);
}

std::string const	&Character::getName( void ) const { return (_name); }
int 				Character::getInventorySize( void ) const { return (inventorySize); }

void	Character::equip( AMateria &m )
{
	int	i = 0;

	while (i < inventorySize)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = &m;
			return ;
		}
		i++;
	}
	ftLstPushBack(&this->_materiaCollector, new FtList(m));
	std::cout << "Your Inventory is currently full, impossible to add " << m.getType();
	std::cout << " materia." << std::endl;
}

void	Character::unequip( int idx )
{
	if ( idx < 0 || idx > inventorySize || !_inventory[idx])
		return ;
	ftLstPushBack(&this->_materiaCollector, new FtList(*this->_inventory[idx]));
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

