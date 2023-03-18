#ifndef __RPN_HPP__
#define __RPN_HPP__

#include <stack>
#include <iostream>
#include <vector>
#include <cctype>

void    RPN(std::string numbers);
void    division(std::stack<int> & stack, int val1, int val2);
#endif