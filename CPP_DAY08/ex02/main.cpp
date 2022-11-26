/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 21:07:24 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/26 11:16:17 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"


int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737); //[...] mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout << "--------" << std::endl;
    {
        std::list<int> lista;
        lista.push_back(5);
        lista.push_back(17);
        std::cout << lista.back() << std::endl;
        lista.pop_back();
        std::cout << lista.size() << std::endl;
        lista.push_back(3);
        lista.push_back(5);
        lista.push_back(737);
        std::list<int>::iterator it = lista.begin();
        std::list<int>::iterator ite = lista.end();
        ++it;
        --it;
        while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
        }
    }
    return 0;
}