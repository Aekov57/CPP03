/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:12:23 by misimon           #+#    #+#             */
/*   Updated: 2023/05/09 11:15:14 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		
	public:
		FragTrap();
		FragTrap(const std::string name);
		FragTrap(const FragTrap& other);
		~FragTrap();
		
		FragTrap& operator=(const FragTrap& other);
		void	attack(const std::string& target);
		void	highFivesGuys(void);
};

#endif