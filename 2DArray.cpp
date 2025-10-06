#include <iostream>
using namespace std;
int main()
{
    int marks[][4] = {80,75,76,75,54,72,55,70,65,85,35,59};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4;j++) cout << marks[i][j] << " ";
        cout << endl;
    }
    return 0;
}