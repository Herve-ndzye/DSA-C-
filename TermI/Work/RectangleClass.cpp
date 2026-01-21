#include <iostream>
using namespace std;
class Rectangle
{
    double length;
    double width;
public:
    Rectangle(int length,int width)
    {
        this->length = length;
        this->width = width;
    }
    double getArea()
    {
        return length*width;
    }
};
int main()
{
    Rectangle r1 = Rectangle(12,13);
    Rectangle r2(13.4,15.6);
    Rectangle r3{16,16};
    cout << r1.getArea()<< endl;
    cout << r2.getArea()<< endl;
    cout<< r3.getArea();
    return 0;
}