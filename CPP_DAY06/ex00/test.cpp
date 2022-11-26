#include<iostream>

class parent {};
class child :public parent{};

typedef struct data
{
    int x;
    int y;
}Data;
int main(void)
{
    child *ptr;

    parent *ptr2 = static_cast<parent *> (ptr);
}