#include <iostream>
using namespace std;
void printChar(string m)
{
    if (m.size() == 1)
        cout << m[0];
    else
    {
        printChar(m.substr(1));
        cout << m[0];
    }
}
int main()
{
    printChar("abc");
    return 0;
}