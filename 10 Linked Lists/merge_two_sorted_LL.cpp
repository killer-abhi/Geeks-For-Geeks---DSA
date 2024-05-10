#include<bits/stdc++.h>
#include "singly_linked_list.cpp"
using namespace std;

Node* mergeSorted(Node *head1,Node *head2){
    if(head1==NULL) return head1;
    if(head2==NULL) return head2;
    Node *finalHead=head1->data<head2->data?head1:head2;

    Node *temp1=head1;
    Node *temp2=head2;

    while(temp1!=NULL&&temp2!=NULL){
        if(temp1->data<temp2->data){
            Node *curr=temp1->next;
            temp1->next=temp2;
            temp1=curr;
        }else{
            Node *curr=temp2->next;
            temp2->next=temp1;
            temp2=curr;
        }
    }
    if(temp1)
    return finalHead;
}

int main()
{
    cout<<"Enter Nodes of Linked List 1 - \n";
    Node *head1=getLinkedListData(NULL);
    cout<<"\nEnter Nodes of Linked List 2 - \n";
    Node *head2=getLinkedListData(NULL);
    Node *sortedHead=mergeSorted(head1,head2);
    display(sortedHead);
    return(0);
}