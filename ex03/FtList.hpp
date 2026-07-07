/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FtList.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 16:35:09 by pcaplat           #+#    #+#             */
/*   Updated: 2026/07/06 16:53:42 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "AMateria.hpp"

class FtList
{
private:
	AMateria	*_content;
	FtList		*_next;

public:
	FtList	( void );
	FtList	( FtList const & );
	FtList	( AMateria & );
	~FtList	( void );

	FtList &operator=	( FtList const & );

	AMateria	*getContent( void ) const;
	FtList		*getNextElem( void ) const;
	void		setContent( AMateria * );
	void		setNextElem( FtList * );

	FtList	*ftLstLast( FtList * ) const;
};

void	ftLstPushBack( FtList **, FtList * );
void	ftLstAddFront( FtList **, FtList * );
