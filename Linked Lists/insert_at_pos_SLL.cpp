#include<bits/stdc++.h>
#include "singly_linked_list.cpp"
using namespace std;

Node* insertAtPosition(Node *head){
    int x;
    cout<<"Enter Data = ";
    cin>>x;
    Node *newNode=new Node(x);
    cout<<"Enter Position = ";
    int pos;
    cin>>pos;

    if(pos==1){
        newNode->next=head;
        return newNode;
    }

    int n=1;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        if(n==pos-2){
            break;
        }
        n++;
    }
    if(temp==NULL){
        return head;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    return head;
}

int main()
{
    Node* head=getLinkedListData(NULL);
    display(head);
    head=insertAtPosition(head);
    display(head);
    return(0);
}