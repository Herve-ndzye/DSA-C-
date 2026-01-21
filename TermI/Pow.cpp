#include <iostream>
using namespace std;
 int power(int a, int x)
 {
     int ans = 1;
     while (x--) ans*=a;
     return ans;
 }
int main()
 {
     cout << power(5,5);
     return 0;
 }