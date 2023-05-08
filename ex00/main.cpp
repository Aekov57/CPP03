/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:57:57 by misimon           #+#    #+#             */
/*   Updated: 2023/05/08 17:33:37 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap Steve("Steve");
	ClapTrap evetS;

	evetS = Steve;
	evetS.attack("George");
	Steve.takeDamage(9);
	Steve.beRepaired(10);
	Steve.takeDamage(11);
	Steve.attack("TRUC");
	
	return EXIT_SUCCESS;
}
