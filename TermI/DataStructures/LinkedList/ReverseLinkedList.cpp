#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next= nullptr;
    Node(int data):data(data){}
    void display(Node *head)
    {
        while (head->next != NULL)
        {
            cout << head->data<< "->";
            head = head->next;
        }
        cout << head->data;
    }
    Node* reverse(Node* head)
    {
        Node *current = head;
        Node *previous = NULL;
        Node *nextNode = NULL;
        while (current != NULL)
        {
            nextNode = current->next;
            current->next = previous;
            previous  = current;
            current = nextNode;
        }
        return previous;
    }
};
int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    first->next = second;
    second->next = third;
    third->next = fourth;
    first->display(first);
    cout << endl;
    first->display(first->reverse(first));
    return 0;
}

