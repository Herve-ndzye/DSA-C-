#include <iostream>
using namespace std;
int fun6 (int n) {
    int i = 1, m = 0;
    while (i < n) {
cout << i<< " ";
        m += 1;
        i = i* 2;
    }
    return m;
}
// Testing Code
int main() {
     fun6 (1000);
    return 0;
}
