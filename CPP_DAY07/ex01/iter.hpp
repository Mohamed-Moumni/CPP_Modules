/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 23:36:29 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/22 00:07:59 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T> void iter(T *a, int len, void (*func)(T x))
{
    for (int i = 0; i < len; i++)
    {
        func(a[i]);       
    }
}

template<typename T> void   func(T x)
{
    std::cout << x << " ";
}

#endif