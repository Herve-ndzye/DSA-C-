#include <iostream>
using namespace std;
int main()
{
    int b[] = {10,20,40,30,50,60};
    int count  = 0;
    bool check= false;
    for (int i = 0;i<= 6-2;i++)
    {
        for (int j = 0; j <= 6-2;j++)
        {
            count++;
            if (b[j]>b[j+1])
            {
                int temp = b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
                check =true;
            }
        }
        if (check)break;
        cout << check<< " ";
    }
    cout << count<< " ";
    for (int a : b) cout << a<< ' ';
}