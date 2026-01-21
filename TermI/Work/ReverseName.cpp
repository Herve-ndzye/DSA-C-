#include <iostream>
using namespace std;
void reverseName(string a,string b){
cout << "Name in reverse is "<< b<< " "<< a;
}
int main()
{
    string a,b;
    cout << "Input First Name :";
    getline(cin,a);
    cout << "Input Second Name :";
    getline(cin,b);
    reverseName(a,b);
    return 0;
}