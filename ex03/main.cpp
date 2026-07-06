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
#include <iostream>

int	main( void )
{
	Ice	materia;
	Ice	*m = materia.clone();

	std::cout << "materia type: " << materia.getType() << std::endl;
	std::cout << "m type: " << m->getType() << std::endl;
}
