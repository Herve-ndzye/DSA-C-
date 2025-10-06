#include <iostream>
using namespace std;
class Animal{
public:
virtual void makeSound()= 0;
};
class Dog:public Animal{
public:
    void makeSound()override{
    cout << "I bark woof woof!\n";
    }
};
class Person: public Animal
{
public:
    void makeSound()override
    {
        cout << "I speak !\n";
    }
};
class Cat:public Animal
{
public:
    void makeSound()override
    {
        cout<< "I meow meow!\n";
    }
};
class Cow:public Animal
{
public:
    void makeSound() override
    {
        cout << "I mooo mooo!";
    }
};
int main(){
    Dog d;
    d.makeSound();
    Person p;
    p.makeSound();
    Cat c;
    c.makeSound();
    Cow w;
    w.makeSound();
return 0;
}