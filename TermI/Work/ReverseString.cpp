#include <iostream>
using namespace std;
string reverse(string a)
{
    for (int i = 0; i < a.size()/2;i++)
    {
        swap(a[i],a[a.size()-1-i]);
    }
    return a;
}
int main()
{
    cout << "Enter the word :";
    string a;
    cin >> a;
    cout <<"The reversed string is "<< reverse(a);
    return 0;
}