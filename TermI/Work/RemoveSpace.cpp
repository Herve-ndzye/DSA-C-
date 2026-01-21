#include <iostream>
using namespace std;
string remSpace(string a)
{
    string result = "";
    for (char b : a)
    {
        if (b!=' ') result+=b;
    }
    return result;
}
int main()
{
    cout << "Enter the string :";
    string a;
    getline(cin , a);
    cout << "The resulting string is "<< remSpace(a);
    return 0;
}