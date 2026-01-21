//
// Created by HERVE GT IT on 1/21/2026.
//
#include <iostream>
using namespace std;
class stack {
    int *arr;
    int nextIndex;
    int capacity;
    public:
    stack() {
        arr = new int[4];
        nextIndex = 0;
        capacity = 4;
    }
    stack(int cap) {
        arr = new int[cap];
        nextIndex = 0;
        capacity = cap;
    }

    int size(){return nextIndex;}
    bool isEmpty() {
        return nextIndex == 0;
    }

    void push(int ele) {
        if (nextIndex == capacity) {
            cout << "Stack Overflow"<<endl;
            return ;
        }
            arr[nextIndex] = ele;
            nextIndex++;

    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow"<<endl;
            return ;
        }
        nextIndex--;
    }

    int top() {
        if (isEmpty()) {
            cout << "Stack Underflow"<<endl;
            return 0;
        }
        return arr[nextIndex-1];
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack Underflow"<<endl;
            return;
        }
        cout << top() << endl;
        pop();
    }
};

int main() {
    stack s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << s.top() << endl;
    s.pop();

    cout << s.top() << endl;
    s.pop();

    cout << s.top() << endl;
    s.pop();

    cout << s.size() << endl;
    cout << s.isEmpty() << endl;

    stack s2(10);
    for (int i = 1; i <= 10; i++) {
        s2.push(i);
    }

    s2.display();

    cout << s2.size() << endl;

    return 0;
}