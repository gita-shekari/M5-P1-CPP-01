/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 19:34:59 by gshekari          #+#    #+#             */
/*   Updated: 2026/04/14 16:06:29 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::string name;
	std::cout << "Enter the name of zombie horde :" << std::endl;
	std::cin >> name;
	int n;
	std::cout << "Enter the number of zombies :" << std::endl;
	std::cin >> n;
	Zombie *zombie1 = zombieHorde(n,name);
	for (int i = 0; i < n; i++)
	{
		zombie1[i].announce();
	}

	delete[] zombie1;
}

