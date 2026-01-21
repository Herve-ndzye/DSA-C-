#include <iostream>
using namespace std;
int main()
{
    int odd = 1,product = 1;
    while (odd<=20)
    {
        product*=odd;
        odd+=2;
    }
    cout << product;
    return 0;
}