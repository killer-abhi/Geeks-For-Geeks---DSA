#include<bits/stdc++.h>
#include "singly_linked_list.cpp"
using namespace std;

void printRecursively(Node *head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<"\t";
    printRecursively(head->next);
}

int main()
{
    Node* head=getLinkedListData(NULL);
    printRecursively(head);
    return(0);
}