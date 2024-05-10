#include<bits/stdc++.h>
#include "singly_linked_list.cpp"
using namespace std;

void detectRemoveLoop(Node *head){
    Node *slow=head,*fast=head;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast){
            break;
        }
    }
    if(slow!=fast){
        return;
    }
    slow=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    fast->next=NULL;
}
int main()
{
    Node *head=getLinkedListData(NULL);
    detectRemoveLoop(head);
    display(head);
    return(0);
}