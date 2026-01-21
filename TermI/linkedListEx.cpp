#include <iostream>
using namespace std;
template<typename T>
    class Node
    {
    public:
        T data;
        Node *next;
        Node(T d)
        {
            data  = d;
            next = nullptr;
        }
    };
template<typename T>
void display(Node<T> *head)
{
    while (head != nullptr)
    {
        cout << head->data<<"->";
        head = head->next;
    }
    cout << "Null";
}
int main()
{
    Node<int> *n1 = new Node(10);
    Node<int> *n2 = new Node(20);
    Node<int> *n3 = new Node(30);
    Node<int> *n4 = new Node(40);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    display(n1);
}