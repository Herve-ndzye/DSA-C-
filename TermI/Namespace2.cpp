#include <iostream>
using namespace std;
namespace rca
{
    int num = 240;
    void display()
    {
        cout << "The amount is :"<< num<< endl;
    }
}
namespace groupa
{
    int number  = 30;
    int display()
    {
        return number;
    }
}
int number  = 50;
int main()
{
    int number  = 10;
    cout << "The number from RCA is:"<< rca::num<< endl;
    cout << "The number from GroupA is :"<< groupa::number<< endl;
    cout << "the number from GroupA is printed using :"<< groupa::display()<< endl;
    cout << "the global number is :"<< ::number<< endl;
    cout<< "the local number is :"<< number<< endl;
    return 0;
}