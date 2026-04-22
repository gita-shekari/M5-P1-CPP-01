/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 21:04:24 by gshekari          #+#    #+#             */
/*   Updated: 2026/04/22 17:42:19 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		std::cout << "Level is not entered" << std::endl;
		return 1;
	}
	Harl harl;
	harl.complain(argv[1]);
	return 0;
}
