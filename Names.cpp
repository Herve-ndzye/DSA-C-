#include <iostream>

using namespace std;
int main(){
string a,b;
cout << "Type your first name:";
getline(cin,a);
cout << "Type your last name:";
cin >> b;
    int age;
    cout << "Type your age:";
    cin >> age;
cout <<"Your Full Name is "<< a<< " "<< b <<" and you are "<<age <<" years old." ;
return 0;
}