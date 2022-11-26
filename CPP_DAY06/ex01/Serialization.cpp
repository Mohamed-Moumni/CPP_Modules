/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 22:59:48 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/20 23:13:37 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t   serialize(Data* ptr)
{
    uintptr_t conv;

    conv = reinterpret_cast < uintptr_t > (ptr);
    return (conv);
}

Data* deserialize(uintptr_t raw)
{
    Data* data_ptr;

    data_ptr = reinterpret_cast < Data * > (raw);
    return (data_ptr); 
}