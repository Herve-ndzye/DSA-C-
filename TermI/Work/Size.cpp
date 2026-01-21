#include <iostream>
using namespace std;
int size(string a)
{
    int length = 0;
    while (a[length] !='\0') length++;
    return length;
}
int main()
{
    cout << "Enter the string :";
    string a;
    cin >> a;
    cout << "The size is "<< size(a);
    return 0;
}