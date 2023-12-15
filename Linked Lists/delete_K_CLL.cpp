#include<bits/stdc++.h>
#include "circular_linked_list.cpp"
using namespace std;

Node* deleteKth(Node *head,int k){
    Node *temp=head;
    if(k==1&&(head->next==head)){
        delete head;
        return NULL;
    }
    int count=1;
    while(count!=k-1){
        temp=temp->next;
        count++;
    }
    
    Node *prev=temp;
    Node *toDelete=prev->next;
    prev->next=toDelete->next;
    delete toDelete;
    return head;

}
int main()
{
    Node *head=insertAtLast(NULL);
    int k;
    cout<<"Enter K :: ";
    cin>>k;
    head=deleteKth(head,k);
    display(head);
    return(0);
}