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

#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "FtList.hpp"
#include "Character.hpp"

int	main( void )
{
	AMateria	*test = new Ice();
	AMateria	*test2 = new Ice();
	AMateria	*c1 = new Cure();
	AMateria	*c2 = new Cure();
	AMateria	*c3 = new Cure();
	Character	player("Ix-Tap3");
	
	std::cout << std::endl;
	std::cout << std::endl;
	player.equip(*test);
	player.equip(*test2);
	player.equip(*c1);
	player.equip(*c3);
	player.equip(*c2);
}
