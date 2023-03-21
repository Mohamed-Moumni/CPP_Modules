#ifndef __PMERGE_HPP__
#define __PMERGE_HPP__

#include <iostream>
#include <list>
#include <vector>
#include <sys/time.h>
#include <iomanip>
#include <deque>

# define MAX "2147483647"
# define MIN "2147483648"

int     getNumber(std::string number); 
void    is_integer(std::string & num);
void    checkcmp(std::string & num, int plus, int minus);

void    store_seq_to_vect(std::vector<int> & vect, char **av);
void    store_seq_to_deque(std::deque<int> & deque, char **av);

void    print_vector(std::vector<int> & vect, bool sorted);
void    print_deck(std::deque<int> & deque, bool sorted);

void    MergeInsertSortVect(std::vector<int> & vect, int left, int right);
void    MergeVect(std::vector<int> & vect, int p, int q, int r);
void    InsertSortVect(std::vector<int> & vect, int left, int right);

void    MergeInsertSortdeck(std::deque<int> & deque, int left, int right);
void    Mergedeck(std::deque<int> & deque, int p, int q, int r);
void    InsertSortdeck(std::deque<int> & deque, int left, int right);

double   getTimeOfnow(void);

#endif