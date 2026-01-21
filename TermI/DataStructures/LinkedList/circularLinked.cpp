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
    int n = 0;
    while (head != nullptr && n < 8)
    {
        n++;
        cout << head->data<<"->";
        head = head->next;
    }
    cout << "Null  \n";
}
template<typename  D>
void displayReverse(Node<D> *head)
{
    int n = 0;
    while (head != nullptr && n < 8)
    {
        n++;
        cout << head->data<<"->";
        head = head->prev;
    }
    cout << "Null"<<endl;
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
    n4->next = n1;
    n1->prev = n4;
    display(n1);
    displayReverse(n4);
}