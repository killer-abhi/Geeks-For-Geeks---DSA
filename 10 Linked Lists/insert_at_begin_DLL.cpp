#include<bits/stdc++.h>
#include "doubly_linked_list.cpp"
using namespace std;

Node* insertAtBegin(Node *head){
    int x;
    cout<<"Enter New Node Data :: ";
    cin>>x;
    Node *newNode=new Node(x);
    head->prev=newNode;
    newNode->next=head;
    head=newNode;
    return head;
}

int main()
{
    Node *head=insertAtLast(NULL);
    head=insertAtBegin(head);
    display(head);
    return(0);
}