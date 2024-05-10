#include<bits/stdc++.h>
#include "doubly_linked_list.cpp"
using namespace std;

Node* reverseLL(Node *head){
    if(head==NULL||head!=NULL){
        return head;
    }
    Node* temp=head;
    Node *prev=NULL;
    while(temp!=NULL){
        Node *curNode=temp;

        prev=curNode->prev;
        curNode->prev=curNode->next;
        curNode->next=prev;

        temp=temp->prev;
    }
    head=prev->prev;
    return head;
}

int main()
{
    Node* head=insertAtLast(NULL);    
    head=reverseLL(head);
    display(head);
    return(0);
}