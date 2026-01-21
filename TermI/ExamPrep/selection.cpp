#include<bits/stdc++.h>
using namespace std;
void selectionSort(int a[],int n)
{
    for (int i = 0; i < n-1;i++)
    {
        int min = i;
        for (int j = i+1; j < n;j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        swap(a[i],a[min]);
    }
}
int main()
{
    int a[] = {5,4,3,2,1};
    selectionSort(a,5);
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}