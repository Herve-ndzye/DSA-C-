#include<iostream>
using namespace std;
int numOfSteps(int n)
{
    int m = 0;
    while (n--)m+=1;
    return m;
}
int main()
{
    cout << "Number of steps for n = 100 is : "<< numOfSteps(100);
    return 0;
}