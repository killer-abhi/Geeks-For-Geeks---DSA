#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *next;

    Node(int x){
        key=x;
        next=NULL;
    }
};

struct Stack{
    Node* top;
    int stackSize;

    Stack(){
        top=NULL;
        stackSize=0;
    }
    void push(int x){
        Node* temp=new Node(x);
        temp->next=top;
        top=temp;
        stackSize++;
    }
    void pop(){
        if(top==NULL){
            cout<<"Error... Stack Empty";
        }else{
            Node* temp=top;
            top=top->next;
            delete(temp);
            stackSize--;
        }
    }
    int size(){
        return stackSize;
    }
    int peek(){
        return top->key;
    }
};

int main()
{
    Stack myStack;
    myStack.push(10);
    myStack.push(20);
    myStack.peek();
    myStack.push(30);
    myStack.push(40);
    myStack.pop();
    myStack.size();
    myStack.peek();
    return(0);
}