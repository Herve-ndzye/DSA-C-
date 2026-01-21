#include <iostream>
using namespace std;
struct  Person
{
 string firstName;
 string lastName;
 int age;
 Person(){}
 Person (string fname,string lname,int a)
 {
  firstName = fname;
  lastName = lname;
  age = a;
 }
 void printMe()
 {
  cout << firstName<< " "<< lastName<< " "<< age<< endl;
 }
};
int main()
{
 Person person1("Ange","Mugisha",15);
 Person person2{"Peter","Neza",18};
 Person person3 = {"Mary","Keza",20};
 Person *person4= new Person("Arlene","Ishimwe",14);
 Person person5;
 person5.firstName = "Samuel";
 person5.lastName = "BYIRINGIRO";
 person5.age = 15;
 person1.printMe();
 person2.printMe();
 person3.printMe();
 person4->printMe();
 person5.printMe();
 return 0;
}