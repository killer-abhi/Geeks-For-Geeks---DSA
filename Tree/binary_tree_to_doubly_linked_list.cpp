#include<bits/stdc++.h>
#include "BinaryTree.cpp"
using namespace std;

struct Node{
    int key;
    Node* previous;
    Node* next;

    Node(int k){
        key=k;
        previous=next=NULL;
    }
};

void print(Node *head){
    while(head->next!=NULL){
        cout<<head->key<<"\t";
        head=head->next;
    }
}

Node *prev=NULL;
Node* getDoublyLinkedList(BinaryTree<int> *root){
    if(root==NULL){
        return NULL;
    }
    Node *head=getDoublyLinkedList(root->left);
    Node *curNode=new Node(root->key);
    if(::prev==NULL){
        head=curNode;
    }
    else{
        ::prev->next=curNode;
        curNode->previous=::prev;
    }
    ::prev=curNode;
    getDoublyLinkedList(root->right);
    return head;
}

int main()
{
    BinaryTree<int> *root=takeInputLevelWise();
    Node *head=getDoublyLinkedList(root);
    cout<<head->key;
    return(0);
}