#include<bits/stdc++.h>
using namespace std;

struct Stack{
    int *arr;
    int top;
    int cap;

    Stack(int s){
        cap=s;
        arr=new int[cap];
        top=-1;
    }
    void push(int key){
        if(top==cap-1){
            cout<<"Error .... Stack Full !";
        }else{
            top++;
            arr[top]=key;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"Error .... Stack Empty !";
        }else{
            int ele=arr[top];
            top--;
        }
    }
    int size(){
        return top+1;
    }
    int peek(){
        return arr[top];
    }
};

int main()
{
    Stack myStack(10);
    myStack.push(20);
    myStack.push(10);
    myStack.push(30);
    int key=myStack.peek();
    cout<<key;
    return(0);
}