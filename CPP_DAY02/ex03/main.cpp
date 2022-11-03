/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:22:31 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/03 08:31:33 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Point.hpp"
#include"Fixed.hpp"

int main(void)
{
    Point a(1.0f,1.0f);
    Point b(4.0f,2.0f);
    Point c(3.0f,4.0f);
    Point point(3.0f,2.0f);
    if (bsp(a, b, c, point) == true)
        std::cout << "The given point is inside the triangle\n" << std::endl;
    else
        std::cout << "The given point isn't inside the triangle\n" << std::endl;
}