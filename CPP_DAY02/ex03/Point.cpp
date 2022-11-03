/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:22:18 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/02 15:44:54 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Point::Point(): x(0),y(0)
{
	
}

Point::Point( const Point & src ) : x(src.x), y(src.y)
{
	
}

Point::Point(const float _x, const float _y):x(_x), y(_y)
{

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Point::~Point()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// Point &				Point::operator=( Point const & rhs )
// {
// 	if ( this != &rhs )
// 	{
		
// 	}
// 	return *this;
// }

// std::ostream &			operator<<( std::ostream & o, Point const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

float	Point::GetXValue(void) const
{
	return (this->x.toFloat());
}


float	Point::GetYvalue(void) const
{
	return (this->y.toFloat());
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */