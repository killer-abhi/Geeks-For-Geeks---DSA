#include<bits/stdc++.h>
#include "singly_linked_list.cpp"
using namespace std;

Node* deleteFirstNode(Node *head){  
    cout<<"Deleted Node = "<<head->data<<endl;
    return head->next;
}

int main()
{
    Node *head=getLinkedListData(NULL);
    display(head);
    head=deleteFirstNode(head);
    display(head);
    return(0);
}