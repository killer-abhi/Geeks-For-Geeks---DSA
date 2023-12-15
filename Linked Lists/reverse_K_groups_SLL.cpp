#include<bits/stdc++.h>
#include "singly_linked_list.cpp"
using namespace std;


Node* iterativeSolution(Node* head,int k){
    Node *curr=head;
    Node *prev=NULL,*next=NULL;
    int count=0;
    while(curr!=NULL&&count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    return prev;
}
Node* reverseK(Node *head,int k){
    Node *curr=head,*next=NULL,*prev=NULL;
    int count=0;
    while(curr!=NULL&&count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next!=NULL){
        Node *restHead=reverseK(next,k);
        head->next=restHead;
    }
    return prev;
}

// Iterative Solution

Node* reverseKNodes(Node *head,int k){
    Node *curr=head,*prevFirst=NULL;
    bool isFirstPass=true;

    while(curr!=NULL){
        Node *first=curr,*prev=NULL;
        int count=0;
        while(curr!=NULL&&count<k){
            Node *next =curr->next;
            curr->next=prev;
            prev=curr;
            curr->next;
            count++;
        }
        if(isFirstPass){
            head=prev;
            isFirstPass=false;
        }else{
            prevFirst->next=prev;
        }
       prevFirst=first;
    }
    return head;
}

int main()
{
    Node *head=getLinkedListData(NULL);
    int k;
    cout<<"Enter K :: ";
    cin>>k;
    head=reverseKNodes(head,k);
    display(head);
    return(0);
}