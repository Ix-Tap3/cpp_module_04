/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 07:52:15 by pcaplat           #+#    #+#             */
/*   Updated: 2026/06/30 13:31:28 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain::Brain	( void ) : ideas() { std::cout << "Brain constructor called" << std::endl; }
Brain::~Brain	( void ) { std::cout << "Brain Destructor called" << std::endl; }
Brain::Brain	( const Brain &other )
{
	std::cout << "Brain copy constructor called" << std::endl;
	if (this != &other )
		*this = other;
}

Brain	&Brain::operator=	( const Brain &other )
{
	std::cout << "Brain assignement operator called" << std::endl;
	if (this != &other)
		for(int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	return (*this);
}

void	Brain::fillIdeas( const std::string animal )
{
	std::string	line;
	int			count;

	std::cout << "Please fill " << animal << "'s Brain with some evil ideas";
	std::cout << std::endl;
	while (count < 100)
	{
		std::cout << "Enter an Idea, press q to stop and fill with random ideas" << std::endl;
		std::getline(std::cin, line);
		if (std::cin.eof() || line == "q")
			break ;
		this->ideas[count] = line;
		count++;
	}
	if (count < 100)

}
