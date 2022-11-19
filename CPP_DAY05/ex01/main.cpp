/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 00:09:53 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/19 13:44:25 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try
    {
        Bureaucrat obj("moha", 12);
        Form form("messi", 15, 15);
        form.beSigned(obj);
        obj.signForm(form);
        std::cout << obj;
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}