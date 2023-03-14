#include <bits/stdc++.h>
using namespace std;
#define n 100
class Queue
{
    int front;
    int back;
    int *arr;

public:
    Queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }
    void push(int x)
    {
        if (back == n - 1)
        {
            cout << "Queue overflow" << endl;
            return;
        }
        arr[++back] = x;
        if (front == -1)
        {
            front++;
        }
    }
    void dequeue()
    {
        if (front == -1 || front > back)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        front++;
    }
    int peek()
    {
        if (front == -1 || front > back)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }
    bool isEmpty()
    {
        if (front == -1 || front > back)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    class Queue q;
    q.push(1);
    cout << q.peek() << endl;
    q.push(2);
    q.push(3);
    cout << q.isEmpty() << endl;
    q.dequeue();
    q.dequeue();
    cout << q.peek() << endl;
    q.dequeue();
    cout << q.isEmpty() << endl;
    return 0;
}