/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    randomChump.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 19:34:56 by gshekari          #+#    #+#             */
/*   Updated: 2026/04/10 21:24:00 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie randomChump(name);
	randomChump.announce();
}
