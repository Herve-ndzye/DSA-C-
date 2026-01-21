#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int s,int e)
{
    int pivot = a[e];
    int mid = (s+e)/2 ;
    int i = -1,j = 0;
    while (j < e)
    {
        if (a[j] < pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
        j++;
    }
    swap(a[i+1],a[e]);
    return i;
}
void quickSort(int a[],int s,int e)
{
    int pos = partition(a,s,e);
    if (s < e)
    {
        quickSort(a,s,pos-1);
        quickSort(a,pos+1,e);
    }
}
int main()
{
    int a[] = {5,4,3,2,1};
    quickSort(a,0,4);
    for (int i = 0; i < 5;i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}