#include<bits/stdc++.h>
#include "singly_linked_list.cpp"
using namespace std;

Node* deleteLastNode(Node *head){  
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    cout<<"Deleted Node = "<<temp->next->data<<endl;
    temp->next=NULL;
    return head;
}

int main()
{
    Node *head=getLinkedListData(NULL);
    display(head);
    head=deleteLastNode(head);
    display(head);
    return(0);
}