/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 19:34:59 by gshekari          #+#    #+#             */
/*   Updated: 2026/04/10 21:30:30 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::string name;
	std::cout << "Enter the name of zombie :" << std::endl;
	std::cin >> name;
	Zombie *zombie1 = newZombie(name);
	zombie1->announce();
	delete zombie1;
	std::cout << "Enter the name of zombie :" << std::endl;
	std::cin >> name;
	randomChump(name);
}

