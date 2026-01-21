#include <iostream>
using namespace std;
int CtoF(int celsius)
{
    return (celsius*9)/5+32;
}
int main()
{
    int a;
    cout << "Enter the celsius temperature :";
    cin >> a;
    cout <<"The temperature in fahreneit is "<< CtoF(a);
    return 0;
}