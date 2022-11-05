/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:26:42 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/03 10:14:24 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

static  float   claculate_traingle_area(Point const a, Point const b, Point const c)
{
    float   result;
    float   x,y,z;
    
    x = a.GetXValue()*(b.GetYvalue() - c.GetYvalue());
    y = b.GetXValue()*(c.GetYvalue() - a.GetYvalue());
    z = c.GetXValue()*(a.GetYvalue() - b.GetYvalue());
    result = (x + y + z) / 2;
    if (result < 0)
        result *= -1;
    return (result);
}

bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
    float area,a1,a2,a3;
    
    area = claculate_traingle_area(a, b, c);
    if (area == 0)
        return (false);
    a1 = claculate_traingle_area(point, b, c);
    if (a1 == 0)
        return (false);
    a2 = claculate_traingle_area(a, point, c);
    if (a2 == 0)
        return (false);
    a3 = claculate_traingle_area(a, b, point);
    if (a3 == 0)
        return (false);
    if (area == (a1 + a2 + a3))
        return (true);
    return (false);
}