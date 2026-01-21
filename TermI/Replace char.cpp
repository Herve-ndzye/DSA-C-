#include <iostream>
using namespace std;
void replaceChar(string m,char rem,char rep)
{
    if (m.size()-1 == 0 )
    {
        if (m[0] != rem){
            cout << m[0];
        }else cout << rep;
    }
    else{
        replaceChar(m.substr(0, m.size()-1),rem,rep);
        if (m[m.size()-1] != rem) cout << m[m.size()-1];
        else cout << rep;
    }
}
int main()
{
    replaceChar("abacada",'a','x');
    return 0;
}