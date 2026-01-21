#include <iostream>
using namespace std;
string checkSign(int a)
{
    if (a == 0) return "zero";
    if (a > 0) return "positive";
    return "negative";
}
int main()
{
    int a;
    cout << "Enter the number:";
    cin >> a;
    cout << "It is "<< checkSign(a);
    return 0;
}