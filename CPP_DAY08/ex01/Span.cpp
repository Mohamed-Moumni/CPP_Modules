/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:11:31 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/25 21:02:07 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <exception>
#include <vector>

Span::Span()
{
    sp = std::vector<int> (0);
    N = 0;
    index = 0;
}

Span::~Span()
{
    
}

Span::Span(unsigned int n)
{
    sp = std::vector<int> (n);
    this->N = n;
    this->index = 0;
}

void    Span::addNumber( int n )
{
    if (N == index)
        throw std::runtime_error("Full Span");
    else
    {
        sp[index] = n;
        index++;
    }
}

int Span::shortestSpan(void)
{
    int min = 1e9;
    
    std::sort(sp.begin(), sp.end());
    std::vector<int>::iterator it = sp.begin();
    while (it != sp.end() - 1)
    {
        if ((*(it + 1) - *it ) < min)
            min = (*(it + 1) - *it );
        it++;
    }
    return(min);
}

int Span::longestSpan(void)
{
    std::sort(sp.begin(), sp.end());
    std::vector<int>::iterator it = sp.begin();
    std::vector<int>::iterator it2 = sp.end() - 1;
    return (*it2 - *it);
}

void Span::fill_all(unsigned int n)
{
    if (n >= N)
        throw std::runtime_error("Full span");
    else
    {
        srand(time(NULL));
        for (unsigned int i = 0;i < N - n;i++)
        {
            sp[i] = rand() % 10000;
        }   
    }
}