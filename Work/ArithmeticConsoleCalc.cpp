#include <iostream>
using namespace std;
 namespace arithmetic
 {
     int add(int a,int b)
     {
         return a+b;
     }
     int sub(int a,int b)
     {
         return a-b;
     }int mult(int a,int b)
     {
         return a*b;
     }int div(int a,int b)
     {
         return a/b;
     }int mod(int a,int b)
     {
         return a-(a/b * b);
     }
 }
int main()
 {
     bool UserChoice = true;
     while (UserChoice)
     {
         cout << "Menu:\n";
         cout << "1.Add\n";
         cout << "2.Subtract\n";
         cout << "3.Multiply\n";
         cout << "4.Divide\n";
         cout << "5.Modulus\n";
         cout << "Enter your choice:";
         int n;
         cin>> n;
         cout << "Enter two numbers:";
         int a,b;
         cin >> a >> b;
         if (n == 1) cout <<"Result:"<< arithmetic::add(a,b)<< endl;
         else if (n == 2) cout << "Result:"<< arithmetic::sub(a,b)<< endl;
         else if (n == 3) cout <<"Result:"<< arithmetic::mult(a,b)<< endl;
         else if (n == 4) cout <<"Result:"<< arithmetic::div(a,b)<< endl;
         else if(n == 5) cout <<"Result:"<< arithmetic::mod(a,b)<< endl;
         char answer ;
         cout << "Continue?";
         cin >> answer;
         if (answer != 'y') UserChoice = false;
     }
     return 0;
 }