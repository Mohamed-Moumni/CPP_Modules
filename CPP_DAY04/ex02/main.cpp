/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:34:01 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/13 12:46:02 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    Cat c1;
    Dog d1;
    Animal* ptr = new Dog();

    ptr->makeSound();
    c1.makeSound();
    d1.makeSound();
    return (0);
}