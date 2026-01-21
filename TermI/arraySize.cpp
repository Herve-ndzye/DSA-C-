#include <iostream>
using namespace std;
int countChar(string m)
{
    if (m.size()-1 == 0 ) return 1;
    return countChar(m.substr(0,m.size()-1))+1;
}
int main()
{
    cout << countChar("abacada");
    return 0;
}