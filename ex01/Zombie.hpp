/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 20:30:07 by gshekari          #+#    #+#             */
/*   Updated: 2026/04/14 16:10:48 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <sstream>
#include <new>
#include <string>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		void setName(std::string n);
		void announce(void);
		~Zombie();

};

Zombie* zombieHorde( int N, std::string name );

#endif
