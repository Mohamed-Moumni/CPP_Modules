/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:11:34 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/26 21:17:14 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include<vector>

class Span
{
    private:
        std::vector<int> sp;
        unsigned int N;
        unsigned int index;
    public:
        Span();
        ~Span();
        Span(unsigned int n);
        Span(const Span & src);
        Span    & operator=(const Span & rhs);
        void    addNumber( int n);
        int     shortestSpan();
        int     longestSpan();
        void    fill_all(std::vector<int>::iterator start, std::vector<int>::iterator end);
};

#endif