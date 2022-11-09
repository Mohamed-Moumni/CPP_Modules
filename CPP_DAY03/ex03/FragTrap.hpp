/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:20:46 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/09 18:22:15 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{

	public:
		FragTrap();
		FragTrap( FragTrap const & src );
		~FragTrap();
		FragTrap(std::string);
		FragTrap &		operator=( FragTrap const & rhs );
		void			highFivesGuys(void);
};

std::ostream &			operator<<( std::ostream & o, FragTrap const & i );

#endif /* ******************************************************** FRAGTRAP_H */