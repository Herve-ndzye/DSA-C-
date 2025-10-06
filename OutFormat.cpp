#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << "Hello world"<< endl;
    cout <<setw(10)<< "Hello world"<< setw(50)<< "H\n";
    cout << setw(9)<< 8.25<<endl;
    cout << setw(20)<< "Hello!"<<endl;
    cout << setprecision(2)<< fixed<<1234.56789<<endl;
    int a = 15;
    int b = 127;
    cout << oct<< a<< endl<< oct<<b;
    return 0;
}