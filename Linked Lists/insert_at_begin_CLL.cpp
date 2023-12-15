#include<bits/stdc++.h>
#include "circular_linked_list.cpp"
using namespace std;

Node* insertAtBegin(Node* head,int x){
    Node *newNode=new Node(x);
    if(head==NULL){
        newNode->next=newNode;
    }else{
        Node *temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->next=head;
    }
    head=newNode;
    return head;
}

int main()
{
    Node *head=insertAtLast(NULL);
    head=insertAtBegin(head,100);
    display(head);
    return(0);
}