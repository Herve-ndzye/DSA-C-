#include <iostream>
using namespace std;
int main(){
int k = 20;
int *ptr = &k;
int *q = ptr;
(*q)++;
cout << k << endl;

int *ptrr  = 0;
    int r = 30;
    *ptrr = r;
    cout << *ptr<< endl;
return 0;
}