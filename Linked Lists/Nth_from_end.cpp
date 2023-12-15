#include<bits/stdc++.h>
#include "singly_linked_list.cpp"
using namespace std;

Node* findFromLast(Node *head,int n){
    int count=1;
    Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
        count++;
    }
    if(count<n){
        return NULL;
    }
    int res=count-n;
    cout<<res;
    temp=head;
    for(int i=0;i<res;i++){
        temp=temp->next;
    }
    return temp;
}

int main()
{
    Node *head=getLinkedListData(NULL);
    int n;
    cout<<"Enter position from end :: ";
    cin>>n;
    Node *res=findFromLast(head,n);
    cout<<"Required Node = "<<res->data;
    return(0);
}