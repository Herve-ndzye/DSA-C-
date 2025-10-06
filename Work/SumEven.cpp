#include <iostream>
using namespace std;
int main()
{
    int even = 2,sum = 0;
    while (even<=100)
    {
        sum+=even;
        even+=2;
    }
    cout << sum;
    return 0;
}