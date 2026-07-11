/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 11:10:48 by pcaplat           #+#    #+#             */
/*   Updated: 2026/07/11 15:54:20 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int	main( void )
{
	{
		std::cout << "===== First Test =====" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		std::cout << std::endl;
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		std::cout << std::endl;
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);

		std::cout << std::endl;
		delete bob;
		delete me;
		delete src;
		std::cout << "======================" << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "===== Second Test =====" << std::endl;
		AMateria	*i1 = new Ice();
		AMateria	*i2 = new Ice();
		AMateria	*c1 = new Cure();
		AMateria	*c2 = new Cure();
		AMateria	*c3 = new Cure();
		Character	player("Ix-Tap3");
		Character	player2("p2");

		player2 = player;
		std::cout << std::endl;
		player.equip(i1);
		player.equip(i2);
		player.equip(c1);
		player.equip(c3);
		player.equip(c2);
		player.unequip(2);
		player.equip(c2);
		std::cout << std::endl;

		for (int i = 0; i < player.getInventorySize(); i++)
			player.use(i, player);
		std::cout << std::endl;
	}
}
