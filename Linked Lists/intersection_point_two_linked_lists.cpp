#include<bits/stdc++.h>
#include "singly_linked_list.cpp"
using namespace std;

Node* getIntersectionNode(Node *head1,Node *head2){
    Node *temp1=head1;
    Node *temp2=head2;

    unordered_map<int,bool> myMap;

    while(temp1->next!=NULL){
        myMap[temp1->data]=true;
        temp1=temp1->next;
    }
    while(temp2->next!=NULL){
        if(myMap[temp2->data]==true){
            return temp2;
        }
        temp2=temp2->next;
    }
    return NULL;
}

int main()
{
    cout<<"Enter Data Of Linked List 1 - \n";
    Node *head1=getLinkedListData(NULL);
    cout<<"\nEnter Data Of Linked List 2 - \n";
    Node *head2=getLinkedListData(NULL);
    
    Node *res=getIntersectionNode(head1,head2);
    if(res){
        cout<<"Intersection Node = "<<res->data;
    }else{
        cout<<"Linked Lists do not intersect";
    }
    return(0);
}