#include <iostream>
using namespace std;

string palindrome(string a)
{
    int length = 0;
    while (a[length] !='\0') length++;
    string rev = a;
    for (int i = 0;i < length/2;i++)
    {
        char temp = rev[i];
        rev[i]=rev[length-i-1];
        rev[length-i]=temp;
    }
    if (rev == a) return "It is a palindrome.";
    return "It is not a palindrome";
}
int main()
{
    string a;
    cout << "Enter the string :";
    cin >> a;
    cout << palindrome(a);
    return 0;
}