#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void deleteAtHead(node *&head)
{
    node *todelete = head;
    head = head->next;
    delete todelete;
}
void deletion(node *&head, int val)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        deleteAtHead(head);
        return;
    }
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// In our code, we defined two pointers namely ptr1 and ptr2.
//  Each time we incremented ptr1 by 1 and ptr2 by 2.
//   This step is repeated until ptr2 goes to the end of the linked list.
//   When ptr2 is at the end of the list,
//  at the same time ptr1 will be at the middle of the list.
//  Then the middle node, i.e., ptr1 is deleted.

void deleteAtMiddle(node *&head)
{
    if (head == NULL)
    {
        return;
    }
    node *ptr1 = head;
    node *ptr2 = head->next;
    while (ptr2 && ptr2->next && ptr2->next->next)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next->next;
    }
    ptr1->next = ptr1->next->next;
}
int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    // deletion(head, 2);
    display(head);
    // deleteAtHead(head);
    deleteAtMiddle(head);
    display(head);
    return 0;
}