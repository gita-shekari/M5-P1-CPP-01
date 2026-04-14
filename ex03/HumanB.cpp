/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 17:01:58 by gshekari          #+#    #+#             */
/*   Updated: 2026/04/14 18:51:44 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"


HumanB::HumanB(std::string n)
{
	name = n;
}

void HumanB::setWeapon(Weapon &w)
{
	weaponB = &w;
}
void HumanB::attack()
{
	if (weaponB)
	{
		std::cout << name << " attacks with " << weaponB->getType() << std::endl;
	}
	else
	{
		std::cout << name << " has no weapon" << std::endl;
	}
}
HumanB::~HumanB()
{
}
