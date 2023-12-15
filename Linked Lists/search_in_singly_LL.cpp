#include<bits/stdc++.h>
#include "singly_linked_list.cpp"
using namespace std;

Node* search(Node *head,int data){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==data){
            return temp;
        }
        temp=temp->next;
    }
    return NULL;
}

int main()
{
    Node *head=getLinkedListData(NULL);

    int x;
    cin>>x;
    Node *res=search(head,x);
    if(res){
        cout<<"Yes, element Found ";
    }else{
        cout<<"Not Found ";
    }

    return(0);
}