/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 23:20:18 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/24 20:57:48 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify_Real_Type.hpp"
class D
{
};
int main(void)
{
    Base * ptr = generate();
    D *ptr2;
    identify(ptr2);
    // identify(*ptr);
    return (0);
}