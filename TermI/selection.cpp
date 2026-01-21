#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> array = {20,49,60};
    int min;
    int temp;
    for (int i = 0; i < 2; i++)
    {
        min = *min_element(array.begin()+i,array.end());
        int pos = find(array.begin(),array.end(),min)-array.begin();
        temp = array[i];
        array[i]= min;
        array[pos]=temp;
    }
    for (int a : array) cout << a<< " ";
    return 0;
}