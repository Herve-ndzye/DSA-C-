#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a>> b >> c;
    cout << (-1*b+sqrt(pow(b,2)-(4*a*c)))/2*a << " ";
    cout << (-1*b-sqrt(pow(b,2)-(4*a*c)))/2*a;
    return 0;
}