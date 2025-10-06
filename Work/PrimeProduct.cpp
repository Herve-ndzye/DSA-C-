#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long double  product = 2;
    bool checker = true;
    for (int i=3;i<=100; i++)
    {
        for (int j = 2;j<=sqrt(i);j++)
        {
            if (i%j == 0)
            {
                checker= false;
                break;
            }
        }
        if (checker) product *=i;
         checker = true;
    }
    cout << product;
    return 0;
}