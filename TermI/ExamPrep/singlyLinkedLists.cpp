#include<bits/stdc++.h>
using namespace std;
 struct Node
 {
     int data;
     Node *next = nullptr;

     Node(int data)
     {
         this->data = data;
     }
 };
void printLL(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data<< " ";
        head = head->next;
    }
}
Node* insertHead(int a,Node *head)
{
    Node *n = new Node(a);
    n->next = head;
    return n;
}
void insertTail(int a, Node *head)
{
    while (head->next != nullptr)
    {
        head = head->next;
    }
    Node *n = new Node(a);
    head->next=n;
}
void insertAtI(int a,int pos,Node *head)
{
    for (int i = 1;i <pos-1;i++)
    {
        head=head->next;
    }
    Node *n = new Node(a);
    n->next = head->next;
    head->next = n;
}
Node* deleteFirst(Node *head)
{
    return head->next;
}
bool search(Node *head, int b)
{
    while (head != nullptr)
    {
        if (head->data == b)
            return true;
        head = head->next;
    }
    return false;
}
Node* deleteAtPos(int pos,Node* head)
{
    for (int i = 1;i < pos-1;i++)
    {
        head = head->next;
    }
    Node* next = head->next;
    head = next->next;
    return head;
}
Node* reverseLinked(Node* head)
{
    Node* prev=nullptr;
    Node* next = nullptr;
    while (head != nullptr)
    {
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    return prev;
}
bool hasCycle(Node* head)
{
    Node* slow = head;
    Node* fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return true;
    }
    return false;
}
int length(Node *head)
{
    if (head == nullptr) return 0;
    return 1 + length(head->next);
}
Node* getMid(Node* head)
{
    Node* fast = head;
    Node* slow = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
Node* merge(Node* right,Node* left)
{
    if (right) return left;
    if (left) return right;

    if (left->data < right->data)
    {
        left->next = right;
        return left;
    }
    right->next = left;
    return right;

}
Node* mergeSort(Node* head)
{
    if (head || head->next) return head;
    Node* middle = getMid( head);
    Node* right = mergeSort(middle->next);
    middle->next = nullptr;
    Node* left = mergeSort(head);

    return merge(left,right);
}
int main()
{
    Node* first = new Node(12);
    Node* second = new Node(15);
    first->next = second;
    Node* third = new Node(17);
    second->next = third;

    first = insertHead(10,first);
    insertTail(18,first);
    insertAtI(14,3,first);
    // first = deleteFirst(first);
    // first = deleteAtPos(3,first);
    printLL(first);
    cout << endl << length(first);
    first = reverseLinked(first);
    printLL(first);
    return 0;
}