#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *insertAtLast(Node *head)
{
    int x;
    Node *tail = NULL;
    if (head == NULL)
    {
        cout << "Enter Data :: ";
        cin >> x;
        Node *newNode = new Node(x);
        head = tail = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        tail = temp;
    }

    while (true)
    {
        cout << "Enter Data :: ";
        cin >> x;
        if (x == -1)
        {
            break;
        }
        Node *newNode = new Node(x);
        tail->next = newNode;
        tail = newNode;
    }

    tail->next = head;
    return head;
}

void display(Node *head)
{
    Node *temp = head;
    cout << temp->data<<'\t';
    temp=temp->next;
    while (temp != head)
    {
        cout << temp->data << "\t";
        temp = temp->next;
    }
}

// int main()
// {
//     Node *head = insertAtLast(NULL);
//     display(head);
//     return (0);
// }