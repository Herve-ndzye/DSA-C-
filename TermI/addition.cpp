#include <iostream>
using namespace std;
// int addition(int a,int b)
// {
//     return a+b;
// }
// double addition(double a,double b)
// {
//     return a+b;
// }
template<class T,class D>
T addition(T a, T b)
{
    return a+b;
}
int main()
{
    int a,b;
    double c = 12.53;
    double d = 34.23;
    cout << "Enter two numbers a and b:"<< endl;
    cin >> a >> b;
    cout << "The sum "<< addition<int,int>(12,13)<< endl;
    cout << "The sum of C, D is "<< addition<double,int>(c,d)<< endl;
    return 0;
}