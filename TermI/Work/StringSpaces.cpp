#include <iostream>
using namespace std;
int stringSpaces(string a)
{
    int count = 0;
    for (char b : a)
    {
        if (b == ' ') count+=1;
    }
    return count;
}
int main()
{
    cout << "Enter the string:";
    string a;
    cin >> a;
    cout << stringSpaces(a);
    return 0;
}