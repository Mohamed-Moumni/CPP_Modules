/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:59:38 by mmoumni           #+#    #+#             */
/*   Updated: 2022/10/16 12:00:14 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<cctype>

void    convert_to_upper(char *words)
{
    int i = 0;
    while (words[i])
    {
        words[i] = toupper(words[i]);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 1)
    {
        std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    }
    else
    {
        int i = 1;
        while (i < ac)
        {
            convert_to_upper(av[i]);
            std :: cout << av[i];
            i++;
        }
        std :: cout << "\n";
    }
}
