#include <bits/stdc++.h>
#include "singly_linked_list.cpp"
using namespace std;

Node *sortedInsert(Node *head, int x)
{
    Node *temp = head;
    Node *newNode = new Node(x);
    if (temp == NULL)
    {
        return newNode;
    }
    if (x<= temp->data)
    {
        newNode->next = temp;
        return newNode;
    }
    
    while(temp->next!=NULL&&temp->next->data<x){
        temp=temp->next;
    }

    newNode->next=temp->next;
    temp->next=newNode;
    return head;
}

int main()
{
    Node *head = getLinkedListData(NULL);
    int x;
    cout << "Enter data of new Node :: ";
    cin >> x;
    head = sortedInsert(head, x);
    display(head);
    return (0);
}