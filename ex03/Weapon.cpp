/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:50:02 by gshekari          #+#    #+#             */
/*   Updated: 2026/04/14 18:51:32 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string s)
{
	type = s;
}
void Weapon::setType(std::string t)
{
	type = t;
}
std::string Weapon::getType()
{
	return type;
}

Weapon::~Weapon()
{
}
