#include <iostream>
#include <cmath>
using namespace std;
int volume(int side)
{
    return pow(side,3);
}
int main()
{
    int side;
    cout << "Enter the side length : ";
    cin >> side;
    cout << "The volume is "<<volume(side);
    return 0;
}