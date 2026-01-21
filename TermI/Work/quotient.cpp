#include <iostream>
#include <vector>
using namespace std;
vector<int> quotient(int a,int b)
{
    vector<int> vec;
    vec.push_back(a/b);
    vec.push_back(a-(a/b*b));
    return vec;
}
int main()
{
    int a,b;
    cout << "Enter the divident:";
    cin >> a;
    cout <<"Enter the divider:";
    cin >> b;
    cout << "The quotient is "<< quotient(a,b)[0]<<" and the remainder is "<< quotient(a,b)[1];
    return 0;
}