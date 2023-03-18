#ifndef __BITCOINEXCHANGE_HPP__
#define __BITCOINEXCHANGE_HPP__

#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
#include <string>
#include <functional>

class BitcoinExchane
{
    public:
        std::map<std::string, double, std::greater<std::string> > BitcoinEx;
        void        getData(std::ifstream & file, int opt);
        void        addElement(const std::string date, const std::string value);
        void        checkDate(const std::string  date);
        void        checkValue(const std::string  value);
        std::string getDate(const std::string line);
        int         getYear(const std::string date, int pos);
        int         getMonth(const std::string date, int pos);
        int         getDay(const std::string date, int pos);
        void        checkYear(int year, int month, int day);
        bool        is_leap(int year);
        double      getValue(const std::string line);
        void        get_line(const std::string line, int opt);
        void        performQuery(const std::string date, const std::string value);
};

#endif