#include <bits/stdc++.h>
using namespace std;
#define n 100

class Stack
{
    int *arr;
    int top;

public:
    Stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "No element to pop" << endl;
            return;
        }
        top--;
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    class Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout << st.Top() << endl;
    cout << st.isEmpty() << endl;
    st.pop();
    cout << st.Top() << endl;
    st.pop();
    cout << st.Top() << endl;
    st.pop();
    st.pop();
    cout << st.Top() << endl;
    cout << st.isEmpty() << endl;
    return 0;
}