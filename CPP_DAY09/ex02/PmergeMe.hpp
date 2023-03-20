#ifndef __PMERGE_HPP__
#define __PMERGE_HPP__

#include <iostream>
#include <deque>
#include <vector>

# define MAX "2147483647"
# define MIN "2147483648"

void    store_seq(std::vector<int> & vect, std::deque<int> & deck, char **av);
int     getNumber(std::string number);
void    print_sequence(std::vector<int> & vect, bool sorted);
void    is_integer(std::string & num);
void    checkcmp(std::string & num, int plus, int minus);
void    MergeInsertSortVect(std::vector<int> & vect, int left, int right);
void    Merge(std::vector<int> & vect, int p, int q, int r);
void    InsertSort(std::vector<int> & vect, int left, int right);
#endif