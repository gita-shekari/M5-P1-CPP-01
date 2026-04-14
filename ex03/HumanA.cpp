/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 17:19:11 by gshekari          #+#    #+#             */
/*   Updated: 2026/04/14 18:51:39 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"


HumanA::HumanA(std::string n, Weapon& w) : name(n), weaponA(w)
{
}

void HumanA::attack()
{
	std::cout << name << " attacks with " << weaponA.getType() << std::endl;
}
HumanA::~HumanA()
{
}
