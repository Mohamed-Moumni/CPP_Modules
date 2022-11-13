/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:49:38 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/13 12:30:31 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
    typedef Animal* ptr;
    ptr* arr = new ptr[6];
    arr[0] = new Cat();
    arr[1] = new Cat();
    arr[2] = new Cat();
    arr[3] = new Dog();
    arr[4] = new Dog();
    arr[5] = new Dog();
    *arr[0] = *arr[2];
    for(int i=0;i<6;i++)
    {
        delete arr[i];
    }
    return (0);
}