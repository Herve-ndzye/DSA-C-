#include <iostream>
using namespace std;
int n = 100;
int arrQueue[7],front = -1,rear = -1;
void enqueue(int num)
{
    if (rear == n - 1)
        cout << "Queue is full" << endl;
    else
    {
      if (front == -1)
          front = 0;
        rear++;
        arrQueue[rear] = num;
    }
}
void dequeue()
{
    if (front == -1 || front > rear)
        cout << "Queue is empty" << endl;
    else
    front++;
}
void display()
{
    if (front == -1 || front > rear)
        cout << "Queue is empty" << endl;
    else
    {
        for (int i = front; i <= rear; i++)
        {
            cout << arrQueue[i] << " ";
        }
    }
}