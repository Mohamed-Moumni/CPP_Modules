/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:13:12 by mmoumni           #+#    #+#             */
/*   Updated: 2023/03/21 15:49:40 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void    getData(std::map<std::string, double, std::greater<std::string> > & BitcoinEx, std::ifstream & file, int opt)
{
    std::string line;

    while (getline(file, line))
    {
        get_line(BitcoinEx, line, opt);
        line.clear();
        if (file.eof())
            break ;
    }
}

void        performQuery(std::map<std::string, double, std::greater<std::string> > & _bitcoinExchange, const std::string date, const std::string value)
{
    double _value;

    checkDate(date);
    checkValue(value, false);
    _value = atof(value.c_str());
    if (_value > 1000)
        throw std::runtime_error(std::string("Error: too large a number " + value));
    if (_bitcoinExchange.lower_bound(date) != _bitcoinExchange.end())
        std::cout << date << " => " << value << " = " << std::setprecision(2) << std::fixed << _bitcoinExchange.lower_bound(date)->second * _value << std::endl;
}

void    get_line(std::map<std::string, double, std::greater<std::string> > & _bitcoinExchange, const std::string line, int opt)
{
    int         found;
    std::string date;
    std::string value;

    if (opt)
        found = line.find(",", 0);
    else
        found = line.find("|", 0);
    date = line.substr(0, found);
    value = line.substr(found + 1);
    try
    {
        if (opt)
            addElement(_bitcoinExchange, date, value);
        else
            performQuery(_bitcoinExchange, date, value);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    date.clear();
    value.clear();
}

void    addElement(std::map<std::string, double, std::greater<std::string> > & BitcoinEx, const std::string date, const std::string value)
{
    checkDate(date);
    checkValue(value, true);
    BitcoinEx[date] = atof(value.c_str());
}

int         getYear(const std::string date, int pos)
{
    int i;
    int year;

    i = pos;
    year = 0;
    while (i < pos + 4)
    {
        if (date[i] >= '0' && date[i] <= '9')
        {
            year = year * 10 + (date[i] - 48);
            i++;
        }
        else
            return (-1);
    }
    return (year);
}

int         getMonth(const std::string date, int pos)
{
    int i;
    int month;

    i = pos;
    month = 0;
    while (i < pos + 2)
    {
        if (date[i] >= '0' && date[i] <= '9')
        {
            month = month * 10 + (date[i] - 48);
            i++;
        }
        else
            return (-1);
    }
    return (month);
}

int         getDay(const std::string date, int pos)
{
    int i;
    int day;

    i = pos;
    day = 0;
    while (i < pos + 2)
    {
        if (date[i] >= '0' && date[i] <= '9')
        {
            day = day * 10 + (date[i] - 48);
            i++;
        }
        else
            return (-1);
    }
    return (day);
}

void    checkValue(const std::string value, bool oper)
{
    int i;
    int point_count;
    int j;
    int digitCount;

    i = 0;
    j = 0;
    digitCount = 0;
    point_count = 0;
    while (value[i] && value[i] == ' ')
        i++;
    while (value[i])
    {
        if (value[i] == '.')
            point_count++;
        else if (value[i] == '-')
            throw std::runtime_error(std::string("Error: not a positive number " + value));
        else if (value[i] < '0' || value[i] > '9')
            throw std::runtime_error(std::string("Error: invalid number " + value));
        if (!point_count)
            digitCount++;
        i++;
        j++;
    }
    if ((point_count > 1 || digitCount > 4) && !oper)
        throw std::runtime_error(std::string("Error: invalid Number" + value));
}

void    checkDate(const std::string  date)
{
    int year = 0, month = 0, day = 0,i;

    i = 0;
    while (date[i] == ' ')
        i++;
    year = getYear(date, i);
    if (date[i + 4] != '-')
        throw std::runtime_error(std::string("Error in Date reprsentation " + date));
    i = i + 5;
    month = getMonth(date, i);
    if (date[i + 2] != '-')
        throw std::runtime_error(std::string("Error in Date reprsentation " + date));
    i = i + 3;
    day = getDay(date, i);
    if (year < 2009 || month < 1 || month > 12 || day > 31 || day < 1)
        throw std::runtime_error(std::string("Error in Date reprsentation " + date));
    i = i + 2;
    while (date[i])
    {
        if (date[i++] != ' ')
            throw std::runtime_error(std::string("Error in Date representation " + date));
    }
    checkYear(year, month, day);
}

void    checkYear(int year, int month, int day)
{
    if (year < 2009)
        throw std::runtime_error("Error in Year representation");
    if (month < 1 || month > 12)
        throw std::runtime_error("Error in month representation");
    if (day < 1 || day > 31)
        throw std::runtime_error("Error in day representation");
    if (day == 29 && !is_leap(year) && month == 2)
        throw std::runtime_error("Error in leap year validation");
}

bool    is_leap(int year)
{
    if ((year % 400 == 0 || year % 100 != 0) && (year % 4 == 0))
        return (true);
    return (false);
}