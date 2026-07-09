/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 11:10:48 by pcaplat           #+#    #+#             */
/*   Updated: 2026/07/04 11:18:09 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "FtList.hpp"
#include <iostream>

static void	destroyLst( FtList *lst )
{
	FtList		*next;

	while (lst)
	{
		std::cout << "enter here" << std::endl;
		next = lst->getNextElem();
		delete lst->getContent();
		delete lst;
		lst = next;
	}
}

int	main( void )
{
	AMateria	*test = new Ice();
	AMateria	*test2 = new Ice();
	FtList		*lst = new FtList();
	FtList		*save = lst;

	ftLstPushBack(&lst, new FtList(*test));
	ftLstPushBack(&lst, new FtList(*test2));
	destroyLst(lst);
	delete save;
}
