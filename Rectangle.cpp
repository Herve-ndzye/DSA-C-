#include <iostream>
using namespace std;
int perimeter(int length,int width)
{
    return (length+width)*2;
}
int area(int length,int width)
{
    return length*width;
}
int main()
{
    int a,b;
    cout << "Enter the length and the width :";
    cin >> a>> b;
    cout<<"The perimeter is:"<< perimeter(a,b)<< endl;
    cout<< "The area is:"<< area(a,b);
    return 0;
}