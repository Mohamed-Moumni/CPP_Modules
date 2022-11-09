/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:12:32 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/10 00:11:18 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->get_type() << " " << std::endl;
    std::cout << i->get_type() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
    return (0);
}