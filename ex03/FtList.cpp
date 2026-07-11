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
	std::cout << "FtList constructor" << std::endl;
}

FtList::FtList	( AMateria &content ): _next(NULL)
{
	std::cout << "FtList content constructor" << std::endl;
	this->_content = &content;
}

FtList::FtList	( FtList const &other )
{
	std::cout << "FtList copy constructor" << std::endl;
	if (this != &other)
		*this = other;
}

FtList::~FtList	( void ) { std::cout << "FtList destructor" << std::endl; }

// --- Operator Overloading
FtList	&FtList::operator= ( FtList const &other )
{
	if (this != &other)
	{
		if (this->_content)
			delete this->_content;
		if (other._content)
			this->_content = other._content->clone();
		if (other._next)
		{
			if (this->_next)
				ftLstClear(&this->_next);
			*this->_next = *other._next;
		}
	}
	return (*this);
}

// --- Setters and Getters
AMateria	*FtList::getContent( void ) const { return (_content); }
FtList		*FtList::getNextElem( void ) const { return (_next); }
void		FtList::setContent( AMateria *m ) { this->_content = m; }
void		FtList::setNextElem( FtList *next ) { this->_next = next; }

// --- Member functions
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

// --- Non member functions
void	ftLstPushBack( FtList **lst, FtList *node )
{
	FtList	*tmp;

	if (!lst || !node)
		return ;
	if (!(*lst)->getContent())
	{
		(*lst)->setContent(node->getContent());
		if (node->getNextElem())
			(*lst)->setNextElem(node->getNextElem());
		delete node;
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

void	ftLstClear( FtList **lst )
{
	FtList	*tmp = *lst;
	FtList	*next;

	if (!lst || !*lst)
		return ;
	while (tmp)
	{
		next = tmp->getNextElem();
		delete tmp->getContent();
		delete tmp;
		tmp = next;
	}
	*lst = NULL;
}
