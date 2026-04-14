/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 20:38:27 by gshekari          #+#    #+#             */
/*   Updated: 2026/04/14 16:09:48 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zo = new Zombie[N];
	for(int i = 0; i < N; i++)
	{
		std::stringstream ss;
		ss << name << i;
		zo[i].setName(ss.str());
	}
	return (zo);
}


