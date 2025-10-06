#include <iostream>
#define PI 3.14
using namespace std;
int main()
{
    float r;
    cout << "Enter the radius:";
    cin >> r;
    cout << (4*PI*pow(r,3))/3;
    return 0;
}