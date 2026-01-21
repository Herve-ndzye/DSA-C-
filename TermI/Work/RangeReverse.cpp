#include <iostream>
#include <vector>
using namespace std;
vector<int> rangeReverse(vector<int> vec,int a,int b)
{
    for (int i = a; i < b; i++, b--)
    {
        swap(vec[i], vec[b]);
    }

    return vec;
}
int main()
{
    vector<int> vec = {9, 8, 7, 4};
    vector<int> ans =  rangeReverse(vec,0,0);
    for ( int a : ans) cout << a<< ' ';
    return 0;
}