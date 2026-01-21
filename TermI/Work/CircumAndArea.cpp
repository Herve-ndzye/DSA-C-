#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;
double area(double r)
{
    return pow(r,2)*PI;
}
double circum(double r)
{
    return 2*r*PI;
}
int main()
{
    double r;
    cout << "Enter the radius:";
    cin >> r;
    cout << "The area is "<< area(r)<< endl;
    cout << "The circumference is "<< circum(r);
    return 0;
}