#include<bits/stdc++.h>
#include "singly_linked_list.cpp"
using namespace std;

bool isLoop(Node *head){
    unordered_set<Node*> mySet;
    Node* temp=head;
    while(temp!=NULL){
        if(mySet.find(temp)!=mySet.end()){
            return true;
        }
        mySet.insert(temp);
        temp=temp->next;
    }
    return false;
}
int main()
{
    Node *head=getLinkedListData(NULL);
    if(isLoop(head)){
        cout<<"Loop Exists";
    }else{
        cout<<"Loop doesn't exits";
    }
    return(0);
}