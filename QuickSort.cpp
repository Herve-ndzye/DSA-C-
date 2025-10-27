#include <iostream>
#include <vector>
using namespace std;
int partition(int low,int high,vector<int>& a)
{
   int pivot = a[high];
   int i = low-1;
   for (int j = low; j < high;j++)
   {
      if (a[j] < pivot)
      {
         i++;
         swap(a[j],a[i]);
      }
   }
   swap(a[i+1],a[high]);
   return i+1;
}
void quicksort(int low,int high,vector<int>& a)
{
   if (low<high)
   {
      int pos = partition(low,high,a);
      quicksort(pos+1,high,a);
      quicksort(low,pos-1,a);
   }
}
int main()
{
   vector<int>a = {6,5,4,3,2,1};
   quicksort(0,5,a);
   for (int b : a) cout << b<<" ";
   return 0;
}