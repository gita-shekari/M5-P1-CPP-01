/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:10:54 by gshekari          #+#    #+#             */
/*   Updated: 2026/04/21 20:41:53 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of inputs" << std::endl;
		return 1;
	}
	std::string fileName = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string fileNameReplace = fileName + ".replace";
	std::ifstream inFile(fileName.c_str());
	if (!inFile.is_open())
	{
		std::cout << "Error opening file" << std::endl;
		return 1;
	}
	std::ofstream outFile(fileNameReplace.c_str());
	if (!outFile.is_open())
	{
		std::cout << "Error creating output file" << std::endl;
		return 1;
	}
	std::string line;
	while (std::getline(inFile, line))
	{
		size_t pos = 0;
		pos = line.find(s1, pos);
		while (pos != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
			pos = line.find(s1, pos);
		}

		outFile << line;
		if (!inFile.eof())
			outFile << std::endl;
	}
	outFile.close();
	inFile.close();
	return 0;
}
