//
// Created by HERVE GT IT on 1/21/2026.
//
#include <iostream>
using namespace std;
template <typename T>
class Node {
public:
    T data;
    Node *next;
    Node( T data) {
        this->data = data;
        next = nullptr;
    }
};

template<typename T>
class stack {
public:
    Node<T> *head;
    int size;
    stack() {
        head = nullptr;
        size = 0;
    }
    bool isEmpty() {
        return size == 0;
    }
    void push(T ele) {
        Node<T> *n = new Node<T>(ele);
        n->next = head;
    }
    void pop() {
        Node<T>* temp = head;
        head = head->next;
        delete temp;
    }
    T top() {
        return head->data;
    }

    void display() {
        Node<T> *temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
        }
    }
};
int main() {
    stack<int> s;
    s.isEmpty();
    s.push(10);
    s.display();
    s.top();
    s.pop();
    s.display();
    return 0;
}
