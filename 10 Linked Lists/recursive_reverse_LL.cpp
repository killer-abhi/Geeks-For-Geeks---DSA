#include<bits/stdc++.h>
#include "singly_linked_list.cpp"
using namespace std;

Node* recursiveReverse(Node *head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    Node *restHead=recursiveReverse(head->next);
    Node *restTail=head->next;
    restTail->next=head;
    head->next=NULL;
    return restHead;
}

int main()
{
    Node *head=getLinkedListData(NULL);
    Node *newHead=recursiveReverse(head);
    display(newHead);
    return(0);
}