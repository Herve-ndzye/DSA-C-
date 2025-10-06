#include <iostream>
using namespace std;
void toN(int n)
{
    if (n != 0)
    {
        toN(n-1);
        cout << n<< endl;
    }
}
int main()
{
    toN(5);
    return 0;
}