/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 09:26:12 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/07 15:49:21 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap( ScavTrap const & src);
		ScavTrap( std::string _name);
		~ScavTrap();
		void	guardGate();
		ScavTrap & operator =(ScavTrap const & rhs);
		
};

std::ostream &			operator<<( std::ostream & o, ScavTrap const & i );

#endif
