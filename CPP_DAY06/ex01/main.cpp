/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 22:59:46 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/20 23:17:11 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main(void)
{
    Data data;

    data.x = 15;
    data.y = 14;
    data.z = 25;
    uintptr_t ptr;

    ptr = serialize(&data);
    Data *data_ptr;
    data_ptr = deserialize(ptr);
    std::cout << data_ptr->x << " " << data_ptr->y << " " << data_ptr->z << std::endl;
    return (0);
}