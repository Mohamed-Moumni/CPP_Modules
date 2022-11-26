/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:22:31 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/21 19:10:06 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Point.hpp"
#include"Fixed.hpp"

int main(void)
{
    Point a(0,0);
    Point b(10,10);
    Point c(0,20);
    Point point(5,10);
    if (bsp(a, b, c, point) == true)
        std::cout << "The given point is inside the triangle\n" << std::endl;
    else
        std::cout << "The given point isn't inside the triangle\n" << std::endl;
}