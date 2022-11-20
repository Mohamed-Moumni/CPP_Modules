/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 23:20:18 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/21 00:28:01 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify_Real_Type.hpp"

int main(void)
{
    Base * ptr = generate();

    identify(ptr);
    identify(*ptr);
    return (0);
}