#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int a[] , int n)
{
    bool check = true;
    for (int i = 0;i < n-1;i++)
    {
        for (int j = 0;j < n-i-1; j++)
        {
            if (a[j] > a[j+1])
            {
                swap(a[j],a[j+1]);
                check = false;
            }
        }
        if (check)
            break;
    }
}
int main()
{
    int a[] = {5,4,3,2,1};
    bubbleSort(a,5);
    for (int i = 0; i < 5;i++)
    {
        cout << a[i]<< " ";
    }
}