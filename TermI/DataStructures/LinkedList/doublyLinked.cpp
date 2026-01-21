#include <iostream>
using namespace std;
template<typename T>
    class Node
{
public:
    T data;
    Node *next;
    Node *prev;
    Node(T d)
    {
        data  = d;
        next = nullptr;
        prev = nullptr;
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
template<typename  D>
void displayReverse(Node<D> *head)
{
    while (head != nullptr)
    {
        cout << head->data<<"->";
        head = head->prev;
    }
    cout << "Null\n";
}
int main()
{
    Node<int> *n1 = new Node(10);
    Node<int> *n2 = new Node(20);
    Node<int> *n3 = new Node(30);
    Node<int> *n4 = new Node(40);
    n1->next = n2;
    n2->next = n3;
    n2->prev = n1;
    n3->next = n4;
    n3->prev = n2;
    n4->prev = n3;
    display(n1);
    displayReverse(n4);
}