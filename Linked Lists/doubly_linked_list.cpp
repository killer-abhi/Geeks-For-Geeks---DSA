#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;

    Node(int x){
        data=x;
        prev=next=NULL;
    }
};

Node* insertAtLast(Node* head){

    int x;
    cout<<"Enter data :: ";
    cin>>x;
    Node *newNode=new Node(x);

    Node *tail;

    if(head==NULL){
        head=tail=newNode;
    }else{
        Node *temp=head;
        while(temp!=NULL){
            temp=temp->next;
        }
        tail=temp;
    }

    while(true){
        cout << "Enter Data :: ";
        cin >> x;
        if(x==-1){
            break;
        }
        Node *newNode = new Node(x);

        newNode->prev=tail;
        tail->next=newNode;
        tail=newNode;
    }

    return head;
}

void display(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<'\t';
        temp=temp->next;
    }
}

// int main()
// {
//     Node *head=insertAtLast(NULL);
//     display(head);
//     return(0);
// }