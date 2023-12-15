#include<bits/stdc++.h>
#include "singly_linked_list.cpp"
using namespace std;

bool isPalindromeByStack(Node *head){
    
    stack<int> myList;
    Node *temp=head;

    while(temp!=NULL){
        myList.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        if(myList.top()!=temp->data){
            return false;
        }
        myList.pop();
        temp=temp->next;
    }
    return true;
}

int main()
{
    Node *head=getLinkedListData(NULL);
    if(isPalindromeByStack(head)){
        cout<<"Yes, linked list is palindrome";
    }else{
        cout<<"No, not a palindrome linked list";
    }
    return(0);
}