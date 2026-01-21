#include <iostream>
using namespace std;
void toint(string m)
{
    if (m.size()-1 == 0 ) cout << m[0]-'0';
    else
    {
        toint(m.substr(0,m.size()-1));
        cout << m[m.size()-1]-'0';
    }
}
int main()
{
    toint("12345");
    return 0;
}