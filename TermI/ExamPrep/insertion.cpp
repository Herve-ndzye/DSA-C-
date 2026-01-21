#include <bits/stdc++.h>
using namespace std;
void insertionSort(int a[],int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i-1;
        while (j >=0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}
int main()
{
    int a[] = {5,4,3,2,1};
    insertionSort(a,5);

    for (int i = 0; i < 5; i++)
    {
        cout << a[i]<< " ";
    }
    return 0;
}