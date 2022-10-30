#include <iostream>

using namespace std;

#define DoubleToFixed(x) (x * (double)(1<<8))
#define FixedToDouble(x) ((double)x / (double)(1<<8))
int main()
{
    int f = DoubleToFixed(1.20);
    cout << f << endl;
    cout << FixedToDouble(f) << endl;
}