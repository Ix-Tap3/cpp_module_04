/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 07:52:15 by pcaplat           #+#    #+#             */
/*   Updated: 2026/06/30 16:40:35 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Brain.hpp"

// --- Static members initialisation
std::string	Brain::randomIdeas[12] = {
	"Eating some snacks",
	"Eating your socks",
	"Dominating the World",
	"Drinking water",
	"Destroying the main entrance carpet",
	"Using his acting talent to have some candys",
	"Making sound to have some candys",
	"Runing and jumping everywhere in the house",
	"Going to pee on the crouch",
	"Having some random ideas",
	"Dreaming about meat and bones",
	"Taking a nap"
};

// --- constructors and destructors
Brain::Brain	( void ) : ideas() { std::cout << "Brain constructor called" << std::endl; }
Brain::~Brain	( void ) { std::cout << "Brain Destructor called" << std::endl; }
Brain::Brain	( const Brain &other )
{
	std::cout << "Brain copy constructor called" << std::endl;
	if (this != &other )
		*this = other;
}

std::string	Brain::getRandomIdea( void ) const
{
	int	idx;

	idx = std::rand() % 100;
	return (ideas[idx]);
}

Brain	&Brain::operator=	( const Brain &other )
{
	std::cout << "Brain assignement operator called" << std::endl;
	if (this != &other)
		for(int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	return (*this);
}

void	Brain::fillRandomIdeas( int count )
{
	int				idx;

	std::srand(std::time(NULL));
	while (count < 100)
	{
		idx = std::rand() % 12;
		this->ideas[count] = this->randomIdeas[idx];
		count++;
	}
}

void	Brain::fillIdeas( const std::string animal )
{
	std::string	line;
	int			count;

	std::cout << "Please fill " << animal << "'s Brain with some evil ideas";
	std::cout << std::endl;
	count = 0;
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
		this->fillRandomIdeas(count);
}

void	Brain::displayIdeas( void )
{
	for (int i = 0; i < 100; i++)
	  std::cout << ideas[i] << std::endl;
}
