/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:13:35 by misimon           #+#    #+#             */
/*   Updated: 2023/05/06 15:57:31 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# define COLOR_RESET "\033[0m"
# define COLOR_BLACK "\033[1;49;30m"
# define COLOR_RED "\033[1;49;31m"
# define COLOR_GREEN "\033[1;49;32m"
# define COLOR_YELLOW "\033[1;49;33m"
# define COLOR_BLUE "\033[1;49;34m"
# define COLOR_MAGENTA "\033[1;49;35m"
# define COLOR_CYAN "\033[1;49;36m"
# define COLOR_WHITE "\033[1;49;37m"


# include <string>
# include <iostream>

class ClapTrap
{
	private:
		std::string name;
		int hitPoint;
		int energyPoint;
		int attackDamage;
		
		void sendMessage(const std::string color, const std::string msg);
	public:
		ClapTrap();
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap& other);
		~ClapTrap();
		
		std::string getName();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void consumeEnergy();
		std::string getAttackDamage();
		bool checkStatus();
};

#endif