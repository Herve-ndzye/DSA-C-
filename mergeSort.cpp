#include <iostream>
using namespace std;
void mergeArrays(int x[],int y[],int a[], int s,int e)
{
    int mid =(s+e)/2;
    int i = s;
    int j = mid+1;
    int k = s;
    while (i<=mid && j<=e)
    {
        if (x[i]<y[j])
        {
            a[k] = x[i];
            i++;
            k++;
        }else
        {
            a[k] = y[j];
            j++;
            k++;
        }
    }
    while (i<=mid)
    {
        a[k] = x[i];
        k++;
        i++;
    }
    while (j<=e)
    {
        a[k] = y[j];
        k++;
        j++;
    }
}
void mergeSort(int a[], int s,int e)
{
    if (s>=e) return;
    cout << 1 << endl;
    int mid = (s+e)/2;
    int x[100],y[100];
    for (int i = s; i <=mid; i++)x[i]=a[i];
    for (int i = mid+1;i<=e; i++) y[i]=a[i];
    mergeSort(x,s,mid);
    mergeSort(y,mid+1,e);
    mergeArrays(x,y,a,s,e);
}
int main()
{
    int b[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    mergeSort(b,0,14);
}