#include <iostream>
using namespace std;
int mult(int m, int n)
{
    if (n==0) return 0;
    return mult(m,n-1)+m;
}
int main()
{
    cout << mult(3,5);
    return 0;
}