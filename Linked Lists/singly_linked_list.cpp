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

Node *getLinkedListData(Node *head)
{
    Node *temp = head;
    Node *tail = NULL;
    int x;
    if (head == NULL)
    {
        cout << "Enter Data = ";
        cin >> x;
        Node *newNode = new Node(x);
        head = tail = newNode;
    }
    else
    {
        while (temp != NULL)
        {
            temp = temp->next;
        }
        tail = temp;
    }

    while (true)
    {
        cout << "Enter Data = ";
        cin >> x;
        if (x == -1)
        {
            break;
        }
        Node *newNode = new Node(x);
        tail->next = newNode;
        tail = newNode;
    }
    return head;
}
Node *insertAtLast(Node *head, int x)
{
    Node *temp = head;
    if (head == NULL)
    {
        Node *newNode = new Node(x);
        head = newNode;
        return head;
    }

    Node *tail = NULL;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    tail = temp;
    Node *newNode = new Node(x);
    tail->next = newNode;
    tail = newNode;
    return head;
}

void display(Node *head)
{
    Node *temp = head;
    cout << "Linked List = ";
    while (temp != NULL)
    {
        cout << temp->data << "\t";
        temp = temp->next;
    }
}

// int main()
// {
//     Node *head = NULL, *tail = NULL;
//     head=getLinkedListData(head);
//     display(head);
//     return (0);
// }