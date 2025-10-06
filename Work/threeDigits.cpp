#include <iostream>
#include <algorithm>
using namespace std;

void ascThree(int a, int b, int c)
{
    if (a > b) swap(a,b);
    if (a > c) swap(a,c);
    if (b > c) swap(b,c);
    cout << "The numbers in ascending order is : "<< a<<' '<< b<<' '<< c;
}
int main()
{
    int a,b,c;
    cout << "Enter three numbers : ";
    cin >> a>> b>> c;
    ascThree(a,b,c);
    return 0;
}