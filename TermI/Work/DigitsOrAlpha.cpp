#include <iostream>
using namespace std;

void AlphaOrDigit(char a)
{
    if (a>='0' && a<='9') cout << "It is a digit.";
    else cout << "It is an alpha letter";
}
int main()
{
    char a;
    cout << "Enter the character :";
    cin >> a;
    AlphaOrDigit(a);
    return 0;
}