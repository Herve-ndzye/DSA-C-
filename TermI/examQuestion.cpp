#include <iostream>
using namespace std;
int  occuranceCount(int a[],int k, int n)
{
    int count = 0;
    if (a[n-1] == k) count++;
    if (n>1) count+=occuranceCount(a,k,n-1);
    else
    {
        if (a[0]==k) count++;
    }
    return count;
}