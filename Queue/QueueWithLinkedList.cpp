//
// Created by HERVE GT IT on 1/21/2026.
//
#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next = nullptr;
    Node(int n) {
        data = n;
    }
};
class Queue {
public:
    Node* head = nullptr;
    Node* tail = nullptr;
    int size = 0;
};

void enqueue(int val,Queue* q) {
    Node* n = new Node(val);
    if (head == nullptr) {
        q->head = n;
        q->tail = n;
    }else {
        q->tail->next = n;
        q->tail = n;
    }
    q->size++;
}

bool isEmpty(Queue* q) {
    return q->size == 0;
}

void dequeue(Queue* q) {
    if (isEmpty(q)) {
        return ;
    }
    Node* temp = q->head;
    q->head = q->head->next;
    delete temp;
    q->size--;
}

int front(Queue* q) {
    if (isEmpty(q)) {
        return -1;
    }
    return q->head->data;
}

void display(Queue* q) {
    Node* temp = q->head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void display2(Queue* q) {
    while (!isEmpty(q)) {
        cout << q->head->data << " ";
        dequeue(q);
    }
}
