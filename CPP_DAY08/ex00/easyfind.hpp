/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:38:49 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/26 08:57:04 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include<algorithm>
#include<iostream>

template<typename T> bool easyfind(T const & cont, int value)
{
    bool finded;

    std::sort(cont.begin(), cont.end());
    finded = std::binary_search(cont.begin(), cont.end(), value);
    return (finded);
}

#endif