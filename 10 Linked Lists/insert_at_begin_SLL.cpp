#include<bits/stdc++.h>
#include "singly_linked_list.cpp"
using namespace std;

Node* insertAtBegin(Node *head){
    cout<<"Enter data of New Node = ";
    int x;
    cin>>x;
    Node *newNode=new Node(x);
    newNode->next=head;
    return newNode;
}

int main()
{
    Node *head=getLinkedListData(NULL);
    head=insertAtBegin(head);
    display(head);
    return(0);
}