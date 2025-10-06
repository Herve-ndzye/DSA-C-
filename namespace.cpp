#include <iostream>

using namespace std;
namespace rca{
int x = 80;
int value(){
return x;
}
}
namespace groupC{
int x = 30;
void value(){
cout << "The number of students is "<< x<< endl;
}
}
int x=240;
int main(){
int x = 10;
cout <<"RCA:"<< rca::x<<endl;
cout << "GroupC:"<< groupC::x<< endl;
cout << "Global:"<< ::x<< endl;
cout << "Local x:"<< x<< endl;

return 0;
}