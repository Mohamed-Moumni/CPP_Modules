/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:49:25 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/11 11:22:04 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public FragTrap,  public ScavTrap
{

	public:

		DiamondTrap();
		DiamondTrap( DiamondTrap const & src );
		DiamondTrap( std::string _name);
		~DiamondTrap();
		DiamondTrap &		operator=( DiamondTrap const & rhs );
		void	WhoAmI();
		std::string	get_Name(void) const;
		int			get_HitPoint(void) const;
		int			get_EnergyPoint(void) const;
		int			get_AttackDamage(void) const;
	private:
		std::string Name;

};

#endif /* ***************************************************** DIAMONDTRAP_H */