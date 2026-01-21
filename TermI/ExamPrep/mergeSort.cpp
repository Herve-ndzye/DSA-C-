#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int s,int mid,int e)
{
    int ans[e-s+1];
    int i = s,j = mid+1,k = 0;
    while (i <=mid && j <=e)
    {
        if (a[i] < a[j])
            ans[k++] = a[i++];
        else
            ans[k++] = a[j++];
    }
    while (i <= mid)
    {
        ans[k++] = a[i];
        i++;
    }
    while (j <= e)
    {
        ans[k++] = a[j];
        j++;
    }
    for (int x = 0 ; x < k;x++)
    {
        a[s+x] = ans[x];
    }
}
void mergeSort(int a[],int s, int e)
{
    if (s>=e) return ;
    int mid = (s+e)/2;
    mergeSort(a,s,mid);
    mergeSort(a,mid+1,e);

    merge(a,s,mid,e);
}
int main()
{
    int a[] = {5,4,3,2,1};
    mergeSort(a,0,4);

    for (int i = 0; i < 5;i++)
    {
        cout << a[i]<< " ";
    }

    return 0;
}