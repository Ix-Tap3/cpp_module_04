/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FtList.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 16:41:45 by pcaplat           #+#    #+#             */
/*   Updated: 2026/07/06 17:48:12 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FtList.hpp"

FtList::FtList	( void ): _content(NULL), _next(NULL) { std::cout << "FtList constructor called" << std::endl; }
FtList::~FtList	( void ) { std::cout << "FtList destructor called" << std::endl; }
FtList::FtList	( FtList const &other )
{
	std::cout << "FtList copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

AMateria	*FtList::getContent( void ) const { return (_content); }
FtList		*FtList::getNextElem( void ) const { return (_next); }
void		FtList::setContent( AMateria *m ) { this->_content = m; }
void		FtList::setNextElem( FtList *next ) { this->_next = next; }

FtList	&FtList::operator= ( FtList const &other )
{
	if (this != &other)
	{
		this->_content = other._content->clone();
		this->_next = new FtList(other);
	}
	return (*this);
}
