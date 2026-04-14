/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:18:19 by gshekari          #+#    #+#             */
/*   Updated: 2026/04/14 16:35:51 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	 std::string str = "HI THIS IS BRAIN";

	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Memory address of str:" << &str << std::endl;
	std::cout << "Memory address of PTR:" << stringPTR << std::endl;
	std::cout << "Memory address of REF:" << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "Value of str: " << str << std::endl;
	std::cout << "Value of PTR: " << *stringPTR << std::endl;
	std::cout << "Value of REF: " << stringREF << std::endl;

	return 0;
}
