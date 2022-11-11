/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 21:18:11 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/11 08:58:54 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:

		ClapTrap();
		ClapTrap( ClapTrap const & src );
		ClapTrap(std::string _name);
		virtual ~ClapTrap();

		ClapTrap &		operator=( ClapTrap const & rhs );
		virtual void		attack(const std::string & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		std::string	get_Name(void) const;
		int			get_HitPoint(void) const;
		int			get_EnergyPoint(void) const;
		int			get_AttackDamage(void) const;
	protected:
		std::string Name;
		int	HitPoint;
		int	EnergyPoint;
		int	AttackDamage;
};

#endif /* ******************************************************** CLAPTRAP_H */