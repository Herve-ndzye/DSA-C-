#include <iostream>
using namespace std;
class Student
{
public:
    int code;
    string name;
    string school;
    Student *next = nullptr;
    Student(int c, string fname,string school)
    {
        code = c;
        name = fname;
        this->school  = school;
    }
};
int display(Student *head)
{
    while (head !=nullptr)
    {
       cout << head->code << " "<< head->name<< " "<<head->school<< "->";
        head = head->next;
    }
    cout << "NULL";
}
int main()
{
    Student *q = new Student(10,"Ange","RCA");
    Student *r = new Student(11,"John","RCA");
    Student *s = new Student(12,"Mavic","RCA");

    q->next = r;
    r->next = s;
    display(q);
    return 0;
}