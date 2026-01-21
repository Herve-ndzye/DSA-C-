#include <iostream>
using namespace std;
int dis(int price,int discount)
{
    return (price*discount)/100;
}
int main()
{
    int a,b;
    cout << "Enter the price:";
    cin >> a;
    cout << "Enter the discount:";
    cin >> b;
    cout << "The final price is:"<<dis(a,b);
    return 0;
}