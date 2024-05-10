#include<bits/stdc++.h>
#include "doubly_linked_list.cpp"
using namespace std;

Node* deleteHead(Node *head){
    Node *temp=head;
    head=head->next;
    head->prev=NULL;
    delete(temp);
    return head;
}

int main()
{
    Node *head=insertAtLast(NULL);
    head=deleteHead(head);
    display(head);
    return(0);
}