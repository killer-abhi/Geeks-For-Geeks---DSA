#include<bits/stdc++.h>
#include "singly_linked_list.cpp"
using namespace std;

// Naive Approach
// Node* findMiddle(Node *head){
//     Node *temp=head;
//     if(temp==NULL){
//         return NULL;
//     }
//     if(temp->next==NULL){
//         return temp;
//     }
//     int count=1;
//     while(temp->next!=NULL){
//         temp=temp->next;
//         count++;
//     }
//     temp=head;
//     int n=0;
//     while(n!=(count/2)){
//         temp=temp->next;
//         n++;
//     }
//     return temp;
// }

Node* findMiddle(Node *head){
    if(head==NULL){
        return head;
    }
    Node *slow,*fast;
    slow=fast=head;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

int main()
{
    Node *head=getLinkedListData(NULL);
    Node *middle=findMiddle(head);
    if(middle!=NULL){
        cout<<"Middle Element Is = "<<middle->data;
    }
    return(0);
}