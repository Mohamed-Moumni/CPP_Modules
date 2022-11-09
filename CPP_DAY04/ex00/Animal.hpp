/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:39:13 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/10 00:11:39 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{

	public:

		Animal();
		Animal( Animal const & src );
		virtual ~Animal();

		Animal &		operator=( Animal const & rhs );
		std::string		get_type( void ) const;
		virtual void	makeSound(void) const;
	protected:
		std::string type;
};

std::ostream &			operator<<( std::ostream & o, Animal const & i );

#endif /* ********************************************************** ANIMAL_H */