#include<bits/stdc++.h>
#include "singly_linked_list.cpp"
using namespace std;

bool isLoop(Node *head){
    Node *slow=head,*fast=head;

    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}

int main()
{
    Node *head=getLinkedListData(NULL);
    if(isLoop(head)){
        cout<<"Loop Exists";
    }else{
        cout<<"Loop do not exist";
    }
    return(0);
}