/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 00:09:53 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/19 13:38:30 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat obj("mohamed",2);
        obj.incrementGrade();
        std::cout << obj;
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}