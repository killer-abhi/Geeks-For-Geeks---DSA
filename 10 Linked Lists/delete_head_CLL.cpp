#include<bits/stdc++.h>
#include "circular_linked_list.cpp"
using namespace std;

Node* deleteHead(Node *head){
    Node *temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    Node *tail=temp;
    Node *toDelete=head;
    head=head->next;
    tail->next=head;
    delete toDelete;
    return head;
}
int main()
{
    Node *head=insertAtLast(NULL);
    head=deleteHead(head);
    display(head);
    return(0);
}