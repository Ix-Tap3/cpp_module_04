/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 14:32:50 by pcaplat           #+#    #+#             */
/*   Updated: 2026/07/13 14:42:50 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/MateriaSource.hpp"

// --- Constructors and Destructor
MateriaSource::MateriaSource	( void )
{
	std::cout << "MateriaSource constructor" << std::endl;

	for (int i = 0; i < sourceSize; i++)
		_source[i] = NULL;
}
MateriaSource::MateriaSource	( MateriaSource const &other )
{
	std::cout << "MateriaSource copy constructor" << std::endl;

	if (this != &other)
		*this = other;
}
MateriaSource::~MateriaSource	( void )
{
	std::cout << "MateriaSource Destructor" << std::endl;

	for (int i = 0; i < sourceSize; i++)
		if (_source[i])
			delete _source[i];
}

// --- Operator overloading
MateriaSource	&MateriaSource::operator= ( MateriaSource const &other )
{
	if (this != &other)
	{
		for (int i = 0; i < sourceSize; i++)
		{
			if (this->_source[i])
				delete _source[i];
			if (other._source[i])
				this->_source[i] = other._source[i]->clone();
			else
				this->_source[i] = NULL;
		}
	}
	return (*this);
}

// --- Getters and Setters
int	MateriaSource::getSourceSize( void ) const { return (sourceSize); }

// --- Member functions
void	MateriaSource::learnMateria( AMateria *m )
{
	for (int i = 0; i < sourceSize; i++)
	{
		if (_source[i] == NULL)
		{
			_source[i] = m->clone();
			delete m;
			return ;
		}
	}
	std::cerr << "Impossible to learn more Materia !" << std::endl;
	delete m;
}

AMateria	*MateriaSource::createMateria( std::string const &type )
{
	for (int i = 0; i < sourceSize; i++)
		if (_source[i] && _source[i]->getType() == type)
			return (_source[i]->clone());
	std::cerr << "Impossible to create Materia of type " << type << std::endl;
	return (NULL);
}
