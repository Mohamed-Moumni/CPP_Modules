#include "BitcoinExchange.hpp"

void    BitcoinExchane::getData(std::ifstream & file, int opt)
{
    std::string line;

    while (getline(file, line))
    {
        if (file.eof())
            break ;
        this->get_line(line, opt);
        line.clear();
    }
}

void        BitcoinExchane::performQuery(const std::string date, const std::string value)
{
    if (!checkDate(date))
        return ;
    if (!checkValue(value))
        return ;
    if (this->BitcoinEx.lower_bound(date) != BitcoinEx.end())
    {
        std::cout << date << " => " << value << " = " << this->BitcoinEx.lower_bound(date)->second * atof(value.c_str()) << std::endl;
    }
}

void    BitcoinExchane::get_line(const std::string line, int opt)
{
    int         found;
    std::string date;
    std::string value;

    if (opt)
        found = line.find(",", 0);
    else
        found = line.find("|", 0);
    date = line.substr(0, found);
    value = line.substr(found +1);
    if (opt)
        this->addElement(date, value);
    else
        this->performQuery(date, value);
    date.clear();
    value.clear();
}

void    BitcoinExchane::addElement(const std::string date, const std::string value)
{
    if (!checkDate(date))
        return ;
    if (!checkValue(value))
        return ;
    BitcoinEx[date] = atof(value.c_str());
}

int         BitcoinExchane::getYear(const std::string date, int pos)
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

int         BitcoinExchane::getMonth(const std::string date, int pos)
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

int         BitcoinExchane::getDay(const std::string date, int pos)
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

bool        BitcoinExchane::checkValue(const std::string value)
{
    int i;
    int point_count;

    i = 0;
    point_count = 0;
    while (value[i])
    {
        if (value[i] == '.')
            point_count++;
        else if (value[i] < '0' && value[i] > '9')
            return (false);
        i++;
    }
    if (point_count > 1)
        return (false);
    return (true);
}

bool    BitcoinExchane::checkDate(const std::string  date)
{
    int year = 0, month = 0, day = 0,i;

    i = 0;
    while (date[i] == ' ')
        i++;
    year = getYear(date, i);

    if (date[i + 4] != '-')
        return (false);

    i = i + 5;
    month = getMonth(date, i);

    if (date[i + 2] != '-')
        return (false);

    i = i + 3;
    day = getDay(date, i);

    if (year < 2009 || month < 1 || month > 12 || day > 31 || day < 1)
        return (false);

    if (!(this->checkYear(year, month, day)))
    {
        return (false);
    }
    return true;
}

bool    BitcoinExchane::checkYear(int year, int month, int day)
{
    if (year < 2009)
        return (false);
    if (month < 1 || month > 12)
        return (false);
    if (day < 1 || day > 31)
        return (false);
    if (day == 29 && !is_leap(year))
        return (false);
    return (true);
}

bool    BitcoinExchane::is_leap(int year)
{
    if ((year % 400 == 0 || year % 100 != 0) && (year % 4 == 0))
        return (true);
    return (false);
}