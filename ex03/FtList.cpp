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
#include "AMateria.hpp"

// --- constructors / Destructor
FtList::FtList	( void ): _content(NULL), _next(NULL)
{
	std::cout << "FtList constructor called" << std::endl;
}

FtList::FtList	( AMateria &content ): _next(NULL)
{
	std::cout << "FtList content constructor called" << std::endl;
	this->_content = &content;
}

FtList::FtList	( FtList const &other )
{
	std::cout << "FtList copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

FtList::~FtList	( void )
{
	std::cout << "FtList destructor called" << std::endl;
}

// --- Operator Overloading
FtList	&FtList::operator= ( FtList const &other )
{
	std::cout << "enter =" << std::endl;
	if (this != &other)
	{
		if (this->_content)
			delete	this->_content;
		this->_content = other._content->clone();
		this->_next = const_cast<FtList *>(other.getNextElem());
	}
	return (*this);
}

AMateria	*FtList::getContent( void ) const { return (_content); }
FtList		*FtList::getNextElem( void ) const { return (_next); }
void		FtList::setContent( AMateria *m ) { this->_content = m; }
void		FtList::setNextElem( FtList *next ) { this->_next = next; }

FtList	*FtList::ftLstLast( FtList *lst ) const
{
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (!lst->_next)
			return (lst);
		lst = lst->_next;
	}
	return (NULL);
}

void	ftLstPushBack( FtList **lst, FtList *node )
{
	FtList	*tmp;

	if (!lst || !node)
		return ;
	if (!(*lst)->getContent())
	{
		*lst = node;
		return ;
	}
	tmp = (*lst)->ftLstLast(*lst);
	if (!tmp)
		return ;
	tmp->setNextElem(node);
}

void	ftLstAddFront( FtList **lst, FtList *node )
{
	if (!lst || !node)
		return ;
	node->setNextElem(*lst);
	*lst = node;
}
