#include <iostream>
using namespace std;
int binarySearch(int a[],int n,int key)
{
    int s = 0;
    int e = n-1;
    while (s<=e)
    {
        int mid = (s+e)/2;
        if (a[mid]>key)
        {
            e=mid-1;
        }else if (a[mid] < key)
        {
            s = mid+1;
        }else
        {
            return mid;
        }
    }
}
int main()
{
    int a[] = {1,2,3,4,5,6};
    cout << "The key is found at "<<binarySearch(a,6,1);
}