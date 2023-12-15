#include<bits/stdc++.h>
#include "doubly_linked_list.cpp"
using namespace std;

Node* deleteAtLast(Node* head){

    if(head==NULL) return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }

    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->prev->next=NULL;
    delete(temp);
    return head;
}

int main()
{
    Node* head=insertAtLast(NULL);
    head=deleteAtLast(head);
    display(head);
    return(0);
}