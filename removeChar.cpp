#include <iostream>
using namespace std;
void printChar(string m,char rem)
{
    if (m.size()-1 == 0 )
    {
        if (m[0] != rem){
            cout << m[0];
        }
    }
    else{
        printChar(m.substr(0, m.size()-1),rem);
        if (m[m.size()-1] != rem) cout << m[m.size()-1];
    }
}
int main()
{
    printChar("abacada",'a');
    return 0;
}