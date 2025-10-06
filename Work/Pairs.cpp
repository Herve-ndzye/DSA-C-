#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    for (int i = 2; i < 100;i++)
    {
        for (int j = 2; j < 100; j++)
        {
           int k2 =i*i+j*j;
            int k = (int)sqrt(k2);
            if (pow(k,2) == k2) cout << i << " "<< j<< " "<< k << endl;
        }
    }
    return 0;
}