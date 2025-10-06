#include <iostream>
#include <algorithm>
using namespace std;
string checkPalindrome(string a)
{
    string rev = a;
    reverse(rev.begin(),rev.end());
    if (a == rev) return "It is a palindrome";
    return "It is not a palindrome";
}
int main()
{
     string a;
    cout << "Enter the string : ";
    cin >> a;
    cout << checkPalindrome(a);
    return 0;
}