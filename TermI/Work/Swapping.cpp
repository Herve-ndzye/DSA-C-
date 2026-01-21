#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cout << "Input 1st number:";
    cin >> a;
    cout << "Input 2nd number:";
    cin >> b;
    swap(a,b);
    cout << "After swapping the 1st number:"<< a<< endl;
    cout << "After swapping the 2nd number:"<< b<< endl;

    return 0;
}
