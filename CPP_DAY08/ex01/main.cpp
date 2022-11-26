/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:11:29 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/26 21:00:14 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<vector>
#include<iostream>
#include "Span.hpp"

int main()
{
    try
    {
        Span sp;
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Span t(4);
        t.addNumber(6);
        t.addNumber(6);
        t.addNumber(6);
        t.addNumber(6);
        std::vector<int> arr;
        arr.push_back(5);
        arr.push_back(6);
        arr.push_back(7);
        arr.push_back(8);
        
        t.fill_all(arr.begin(), arr.end());
        std::cout << t.shortestSpan() << std::endl;
        std::cout << t.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}