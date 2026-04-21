/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 21:04:19 by gshekari          #+#    #+#             */
/*   Updated: 2026/04/21 21:29:42 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}
void Harl::debug(void)
{
	std::cout << "Debug level : " << std::endl;
}
void Harl::info(void)
{
	std::cout << "Info level : " << std::endl;
}
void Harl::warning(void)
{
	std::cout << "Warning level : " << std::endl;
}
void Harl::error(void)
{
	std::cout << "Error level : " << std::endl;
}

void complain(std::string level)
{
	
}
