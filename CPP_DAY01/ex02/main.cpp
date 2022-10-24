/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:33:18 by mmoumni           #+#    #+#             */
/*   Updated: 2022/10/24 18:39:01 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main(void)
{
    std::string s = "HI THIS IS BRAIN";
    std::string* stringPTR;
    std::string & stringREF = s;

    stringPTR = &s;

    std::cout << "Address of string: " << &s << " Address held by stringPTR: " << stringPTR << " Address held by stringREF: " << &stringREF << std::endl;
    std::cout << "The value of The String: " << s << " The value pointed bystring PTR: " << *stringPTR << " The value pointed by stringREF: " << stringREF << std::endl;
}