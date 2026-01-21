#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next = nullptr;
    Node(int val) : data(val) {}
};

void insert(Node*& head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void printList(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

Node* getMid(Node* head) {
    if (!head) return head;

    Node* slow = head;
    Node* fast = head->next;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* merge(Node* left, Node* right) {
    if (!left) return right;
    if (!right) return left;

    if (left->data < right->data) {
        left->next = merge(left->next, right);
        return left;
    } else {
        right->next = merge(left, right->next);
        return right;
    }
}

Node* mergeSort(Node* head) {
    if (!head || !head->next)
        return head;

    Node* mid = getMid(head);
    Node* right = mid->next;
    mid->next = NULL;

    Node* leftSorted = mergeSort(head);
    Node* rightSorted = mergeSort(right);

    return merge(leftSorted, rightSorted);
}

int main() {
    Node* head = NULL;

    insert(head, 10);
    insert(head, 3);
    insert(head, 6);
    insert(head, 1);
    insert(head, 8);

    printList(head);

    head = mergeSort(head);

    printList(head);

    return 0;
}
