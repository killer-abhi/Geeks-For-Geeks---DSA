#include<bits/stdc++.h>
#include "singly_linked_list.cpp"
using namespace std;

Node *segregateEvenOdd(Node *head){
    Node *temp=head;

    Node *evenHead=NULL;
    Node *oddHead=NULL;

    while(temp->next!=NULL){

        if(temp->data%2==0){
            evenHead=insertAtLast(evenHead,temp->data);
        }else{
            oddHead=insertAtLast(oddHead,temp->data);
        }
        temp=temp->next;
    }

    temp=evenHead;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node *evenTail=temp;

    evenTail->next=oddHead;
    return evenHead;
}

int main()
{
    Node *head=getLinkedListData(NULL);
    head=segregateEvenOdd(head);
    display(head);
    return(0);
}