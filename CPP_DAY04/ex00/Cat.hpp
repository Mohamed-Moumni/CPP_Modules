/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:44:47 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/10 00:09:45 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
#include "Animal.hpp"
class Cat:public Animal
{

	public:

		Cat();
		Cat( Cat const & src );
		~Cat();

		Cat &		operator=( Cat const & rhs );
		void makeSound(void) const;
};

std::ostream &			operator<<( std::ostream & o, Cat const & i );

#endif /* ************************************************************* CAT_H */