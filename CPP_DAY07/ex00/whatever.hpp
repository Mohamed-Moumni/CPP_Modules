/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:19:08 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/21 23:34:19 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T> void   swap(T &x, T &y)
{
    T   temp;

    temp = x;
    x = y;
    y = temp;
}

template<typename T> T max(T x, T y)
{
    if (x == y)
        return (y);
    if (x < y)
        return (y);
    return (x);
}

template<typename T> T min(T x, T y)
{
    if (x == y)
        return (y);
    if (x < y)
        return (x);
    return (y);
}

#endif