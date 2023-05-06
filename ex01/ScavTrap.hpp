/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 13:44:45 by misimon           #+#    #+#             */
/*   Updated: 2023/05/06 15:59:06 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private :
		void sendMessage(const std::string color, const std::string msg);
		bool	gateMode;
	public :
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap& other);
		~ScavTrap();

		void attack(const std::string& target);
		void guardGate();
};


#endif