#ifndef __BITCOINEXCHANGE_HPP__
#define __BITCOINEXCHANGE_HPP__

#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
#include <string>
#include <functional>

void        getData(std::map<std::string, double, std::greater<std::string> > & BitcoinEx, std::ifstream & file, int opt);
void        performQuery(std::map<std::string, double, std::greater<std::string> > & _bitcoinExchange, const std::string date, const std::string value);
void        get_line(std::map<std::string, double, std::greater<std::string> > & _bitcoinExchange, const std::string line, int opt);
void        addElement(std::map<std::string, double, std::greater<std::string> > & BitcoinEx, const std::string date, const std::string value);
int         getYear(const std::string date, int pos);
int         getMonth(const std::string date, int pos);
int         getDay(const std::string date, int pos);
void        checkValue(const std::string value);
void        checkDate(const std::string  date);
void        checkYear(int year, int month, int day);
bool        is_leap(int year);
#endif