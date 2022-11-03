/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:22:26 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/03 08:25:30 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <string>
# include "Fixed.hpp"

class Point
{

	public:
		Point();
		Point( Point const & src );
		Point(const float _x, const float _y);
		~Point();

		Point &		operator=( Point const & rhs );
		float	GetXValue(void) const;
		float	GetYvalue(void) const;
	private:
		Fixed const x;
		Fixed const y;
};

std::ostream &			operator<<( std::ostream & o, Point const & i );
bool	bsp(Point const a, Point const b, Point const c, Point const point);


#endif /* *********************************************************** POINT_H */