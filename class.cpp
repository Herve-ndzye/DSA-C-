#include <iostream>
using namespace std;
 class Persona
 {
     string firstName;
     string lastName;
     int age;
 public:
     void setFirstName(string Fname)
     {
         firstName = Fname;
     }
     void setLastName(string Lname)
     {
         firstName = Lname;
     }
     void setAge(int ag)
     {
         age = ag;
     }
     int getAge()
     {
         return age;
     }
     string getFirstName()
     {
         return firstName;
     }
     string getLastName()
     {
         return lastName;
     }
     Persona(){}
     Persona(string fname,string lname,int a)
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
        Persona person1("Ange","Mugisha",15);
        Persona person2{"Peter","Neza",18};
        Persona person3 = {"Mary","Keza",20};
        Persona *person4= new Persona("Arlene","Ishimwe",14);
        Persona person5;
        person5.setFirstName( "Samuel");
        person5.setLastName("BYIRINGIRO");
        person5.setAge(15);
        person1.printMe();
        person2.printMe();
        person3.printMe();
        person4->printMe();
        person5.printMe();
        return 0;
    }