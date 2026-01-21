#include<iostream>
using namespace std;
int SumDigits(int n)
{
    if (n == 0) return 0;
    return SumDigits(n/10)+n%10;
}
int main()
{
    cout << SumDigits(1223);
    return 0;
}