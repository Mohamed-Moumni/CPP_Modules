/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 23:10:56 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/21 17:01:45 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConveScalar.hpp"

int main(int argc, char **argv)
{
    if (argc > 2 || argc < 2)
    {
        std::cout << "Invalid Arguments" << std::endl;
    }
    else
    {
        try
        {
            ConveScalar input;
            input.check_input(argv[1]);
            if (input.get_type() == INT)
                input.set_int(atoi(argv[1]));
            if (input.get_type() == DOUBLE)
                input.set_double(strtod(argv[1], NULL));
            if (input.get_type() == FLOAT)
                input.set_float(strtod(argv[1], NULL));
            input.stat_cast(input.get_type());
            input.print_all();
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
}