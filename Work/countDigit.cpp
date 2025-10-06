#include <algorithm>
#include <iostream>
using namespace std;
int countDigit(int a, int b)
{
     string num = to_string(a);
    string host = to_string(b);
    int count = 0;
    for (char c : num)
    {
        if (c == host[0])count+=1;
    }
    return count;
}
int main()
{
    cout << countDigit(32121,1);
    return 0;
}