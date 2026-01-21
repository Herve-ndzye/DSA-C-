#include <iostream>
using namespace std;
string toUpper(string a)
{
    for (char &b : a)
    {
        if (b > 90)  b-=32;
    }
    return a;
}
int main()
{
    cout << "Enter the string :";
    string a;
    cin >> a;
    cout << toUpper(a);
    return 0;
}